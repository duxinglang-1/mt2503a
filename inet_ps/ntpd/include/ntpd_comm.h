/*
 * ntp.h - NTP definitions for the masses
 */
#ifndef _NTPD_COMM_H_
#define _NTPD_COMM_H_

#include <stddef.h>
#include <math.h>

#include "kal_release.h"
#include "soc_api.h"

#include "ntp_fp.h"
#include "ntp_types.h"


#include "mmi2ntpd_struct.h"

/*
 * Calendar arithmetic - contributed by G. Healton
 */
#define YEAR_BREAK 500  /* years < this are tm_year values:
                           Break < AnyFourDigitYear && Break >
                           Anytm_yearYear */

#define YEAR_PIVOT 98   /* 97/98: years < this are year 2000+
                           FYI: official UNIX pivot year is
                           68/69 */

/*
 * Number of Days since 1 BC Gregorian to 1 January of given year
 */
#define julian0(year)   (((year) * 365 ) + ((year) > 0 ? (((year) + 3) \
             / 4 - ((year - 1) / 100) + ((year - 1) /                  \
             400)) : 0))

/*
 * Number of days since start of NTP time to 1 January of given year
 */
#define ntp0(year)   (julian0(year) - julian0(1900))

/*
 * Number of days since start of UNIX time to 1 January of given year
 */
#define unix0(year)  (julian0(year) - julian0(1970))

/*
 * LEAP YEAR test for full 4-digit years (e.g, 1999, 2010)
 */
#define isleap_4(y)  ((y) % 4 == 0 && !((y) % 100 == 0 && !(y % \
             400 == 0)))

/*
 * LEAP YEAR test for tm_year (struct tm) years (e.g, 99, 110)
 */
#define isleap_tm(y) ((y) % 4 == 0 && !((y) % 100 == 0 && !(((y) \
             + 1900) % 400 == 0)))

/*
 * to convert simple two-digit years to tm_year style years:
 *
 * if (year < YEAR_PIVOT)
 *    year += 100;
 *
 * to convert either two-digit OR tm_year years to four-digit years:
 *
 * if (year < YEAR_PIVOT)
 *    year += 100;
 *
 * if (year < YEAR_BREAK)
 *    year += 1900;
 */

/*
 * How to get signed characters.  On machines where signed char works,
 * use it. On machines where signed char doesn't work, char had better
 * be signed.
 */
typedef signed char s_char;

#ifndef TRUE
# define TRUE 1
#endif 
#ifndef FALSE
# define FALSE 0
#endif 

/*
 * NTP protocol parameters.  See section 3.2.6 of the specification.
 */
#define  NTP_VERSION ((u_char)4)        /* current version number */
#define  NTP_OLDVERSION ((u_char)1)     /* oldest credible version */
#define  NTP_PORT 123   /* included for non-unix machines */

/*
 * Poll interval parameters
 */
#define NTP_UNREACH  10 /* poll unreach threshold */
#define  NTP_MINPOLL 3  /* log2 min poll interval (8 s) */
#define NTP_MINDPOLL 6  /* log2 default min poll (64 s) */
#define NTP_MAXDPOLL 10 /* log2 default max poll (~17 m) */
#define  NTP_MAXPOLL 17 /* log2 max poll interval (~36 h) */
#define  NTP_RETRY   3  /* max packet retries */
#define  NTP_MINPKT  1  /* log2 min interburst interval (2 s) */

/*
 * Clock filter algorithm tuning parameters
 */
#define MAXDISPERSE  16.        /* max dispersion */
#define  NTP_SHIFT   4  /* clock filter stages */
#define NTP_FWEIGHT  .5 /* clock filter weight */

/*
 * Selection algorithm tuning parameters
 */
#define  NTP_MINCLOCK   3       /* min survivors */
#define  NTP_MAXCLOCK   10      /* max candidates */
#define  NTP_MAXASSOC   50      /* max associations */
#define MINDISPERSE  .001       /* min distance */
#define MAXDISTANCE  1.5        /* max root distance (select threshold) */
#define CLOCK_SGATE  3. /* popcorn spike gate */
#define HUFFPUFF  900   /* huff-n'-puff sample interval (s) */
#define MAXHOP    2     /* anti-clockhop threshold */
#define MAX_TTL      8  /* max ttl mapping vector size */
#define  BEACON      7200       /* manycast beacon interval */
#define NTP_MAXEXTEN 2048       /* max extension field size */

/*
 * Miscellaneous stuff
 */
#define NTP_MAXKEY   65535      /* max authentication key number */
#define  KEY_TYPE_MD5   NID_md5 /* MD5 digest NID */
/*
 * Limits of things
 */
#define  MAXFILENAME 128        /* max length of file name */
#define MAXHOSTNAME  512        /* max length of host/node name */
#define NTP_MAXSTRLEN   256     /* max string length */

/*
 * Operations for jitter calculations (these use doubles).
 *
 * Note that we carefully separate the jitter component from the
 * dispersion component (frequency error plus precision). The frequency
 * error component is computed as CLOCK_PHI times the difference between
 * the epoch of the time measurement and the reference time. The
 * precision component is computed as the square root of the mean of the
 * squares of a zero-mean, uniform distribution of unit maximum
 * amplitude. Whether this makes statistical sense may be arguable.
 */
#define SQUARE(x) ((x) * (x))
#define SQRT(x) (sqrt(x))
#define DIFF(x, y) (SQUARE((x) - (y)))
#define LOGTOD(a) ((a) < 0 ? 1. / (1L << -(a)) : \
             1L << (int)(a))    /* log2 to double */
#define UNIVAR(x) (SQUARE(.28867513 * LOGTOD(x)))       /* std uniform distr */
#define ULOGTOD(a)   (1L << (int)(a))   /* ulog2 to double */

#define  EVENT_TIMEOUT  0       /* one second, that is */


/*
 * Flags for interfaces
 */
#define INT_UP    0x001 /* Interface is up */
#define  INT_PPP     0x002      /* Point-to-point interface */
#define  INT_LOOPBACK   0x004   /* the loopback interface */
#define  INT_BROADCAST  0x008   /* can broadcast out this interface */
#define INT_MULTICAST   0x010   /* can multicast out this interface */
#define  INT_BCASTOPEN  0x020   /* broadcast socket is open */
#define INT_MCASTOPEN   0x040   /* multicasting enabled */
#define INT_WILDCARD 0x080      /* wildcard interface - usually skipped */
#define INT_MCASTIF  0x100      /* bound directly to MCAST address */
#define INT_PRIVACY  0x200      /* RFC 4941 IPv6 privacy address */

/*
 * Define flasher bits (tests 1 through 11 in packet procedure)
 * These reveal the state at the last grumble from the peer and are
 * most handy for diagnosing problems, even if not strictly a state
 * variable in the spec. These are recorded in the peer structure.
 *
 * Packet errors
 */
#define TEST1     0X0001        /* duplicate packet */
#define TEST2     0x0002        /* bogus packet */
#define TEST3     0x0004        /* protocol unsynchronized */
#define TEST4     0x0008        /* access denied */
#define TEST5     0x0010        /* bad authentication */
#define TEST6     0x0020        /* bad synch or stratum */
#define TEST7     0x0040        /* bad header */
#define TEST8     0x0080        /* bad autokey */
#define TEST9     0x0100        /* bad crypto */
#define  PKT_TEST_MASK  (TEST1 | TEST2 | TEST3 | TEST4 | TEST5 |\
         TEST6 | TEST7 | TEST8 | TEST9)
/*
 * Peer errors
 */
#define TEST10    0x0200        /* peer bad synch or stratum */
#define  TEST11      0x0400     /* peer distance exceeded */
#define TEST12    0x0800        /* peer synchronization loop */
#define TEST13    0x1000        /* peer unreacable */
#define  PEER_TEST_MASK (TEST10 | TEST11 | TEST12 | TEST13)

/*
 * The peer structure. Holds state information relating to the guys
 * we are peering with. Most of this stuff is from section 3.2 of the
 * spec.
 */
struct peer
{
    struct peer *next;      /* link pointer in peer hash */
    struct peer *ass_next;  /* link pointer in associd hash */
    struct peer *ilink;     /* list of peers for interface */
    sockaddr_struct srcadr;      /* address of remote host */
    // endpt *      dstadr; /* local address */
    associd_t associd;      /* association ID */
    u_char version;         /* version number */
    u_char hmode;           /* local association mode */
    u_char hpoll;           /* local poll interval */
    u_char minpoll;         /* min poll interval */
    u_char maxpoll;         /* max poll interval */
    u_int flags;            /* association flags */
    u_char cast_flags;      /* additional flags */
    u_char last_event;      /* last peer error code */
    u_char num_events;      /* number of error events */
    u_char ttl;             /* ttl/refclock mode */

    /*
     * Variables used by reference clock support
     */
#ifdef REFCLOCK
    struct refclockproc *procptr;   /* refclock structure pointer */
    u_char refclktype;              /* reference clock type */
    u_char refclkunit;              /* reference clock unit number */
    u_char sstclktype;              /* clock type for system status word */
#endif /* REFCLOCK */ 

    /*
     * Variables set by received packet
     */
    u_char leap;        /* local leap indicator */
    u_char pmode;       /* remote association mode */
    u_char stratum;     /* remote stratum */
    u_char ppoll;       /* remote poll interval */
    s_char precision;   /* remote clock precision */
    double rootdelay;   /* roundtrip delay to primary source */
    double rootdisp;    /* dispersion to primary source */
    u_int32 refid;      /* remote reference ID */
    l_fp reftime;       /* update epoch */

    /*
     * Variables used by authenticated client
     */
    keyid_t keyid;                      /* current key ID */
#ifdef OPENSSL
#define clear_to_zero opcode
    u_int32 opcode;                     /* last request opcode */
    associd_t assoc;                    /* peer association ID */
    u_int32 crypto;                     /* peer status word */
    EVP_PKEY *pkey;                     /* public key */
    const EVP_MD *digest;               /* message digest algorithm */
    char *subject;                      /* certificate subject name */
    char *issuer;                       /* certificate issuer name */
    struct cert_info *xinfo;            /* issuer certificate */
    keyid_t pkeyid;                     /* previous key ID */
    keyid_t hcookie;                    /* host cookie */
    keyid_t pcookie;                    /* peer cookie */
    const struct pkey_info *ident_pkey; /* identity key */
    BIGNUM *iffval;                     /* identity challenge (IFF, GQ, MV) */
    const BIGNUM *grpkey;               /* identity challenge key (GQ) */
    struct value cookval;               /* receive cookie values */
    struct value recval;                /* receive autokey values */
    struct exten *cmmd;                 /* extension pointer */
    u_long refresh;                     /* next refresh epoch */

    /*
     * Variables used by authenticated server
     */
    keyid_t *keylist;       /* session key ID list */
    int keynumber;          /* current key number */
    struct value encrypt;   /* send encrypt values */
    struct value sndval;    /* send autokey values */
#else /* OPENSSL */ 
#define clear_to_zero status
#endif /* OPENSSL */ 

    /*
     * Ephemeral state variables
     */
    u_char status;                      /* peer status */
    u_char reach;                       /* reachability register */
    int flash;                          /* protocol error test tally bits */
    u_long epoch;                       /* reference epoch */
    int burst;                          /* packets remaining in burst */
    int retry;                          /* retry counter */
    int flip;                           /* interleave mode control */
    int filter_nextpt;                  /* index into filter shift register */
    double filter_delay[NTP_SHIFT];     /* delay shift register */
    double filter_offset[NTP_SHIFT];    /* offset shift register */
    double filter_disp[NTP_SHIFT];      /* dispersion shift register */
    u_long filter_epoch[NTP_SHIFT];     /* epoch shift register */
    u_char filter_order[NTP_SHIFT];     /* filter sort index */
    l_fp rec;                           /* receive time stamp */
    l_fp xmt;                           /* transmit time stamp */
    l_fp dst;                           /* destination timestamp */
    l_fp aorg;                          /* origin timestamp */
    l_fp borg;                          /* alternate origin timestamp */
    double offset;                      /* peer clock offset */
    double delay;                       /* peer roundtrip delay */
    double jitter;                      /* peer jitter (squares) */
    double disp;                        /* peer dispersion */
    double xleave;                      /* interleave delay */
    double bias;                        /* bias for NIC asymmetry */

    /*
     * Variables used to correct for packet length and asymmetry.
     */
    double t21;     /* outbound packet delay */
    int t21_bytes;  /* outbound packet length */
    int t21_last;   /* last outbound packet length */
    double r21;     /* outbound data rate */
    double t34;     /* inbound packet delay */
    int t34_bytes;  /* inbound packet length */
    double r34;     /* inbound data rate */

    /*
     * End of clear-to-zero area
     */
    u_long update;                  /* receive epoch */
#define end_clear_to_zero update
    int unreach;                    /* watchdog counter */
    int throttle;                   /* rate control */
    u_long outdate;                 /* send time last packet */
    u_long nextdate;                /* send time next packet */
    u_long nextaction;              /* peer local activity timeout (refclocks) */
    void (*action) (struct peer *); /* action timeout function */

    /*
     * Statistic counters
     */
    u_long timereset;       /* time stat counters were reset */
    u_long timereceived;    /* last packet received time */
    u_long timereachable;   /* last reachable/unreachable time */

    u_long sent;            /* packets sent */
    u_long received;        /* packets received */
    u_long processed;       /* packets processed */
    u_long badauth;         /* bad authentication (TEST5) */
    u_long bogusorg;        /* bogus origin (TEST2, TEST3) */
    u_long oldpkt;          /* old duplicate (TEST1) */
    u_long seldisptoolarge; /* bad header (TEST6, TEST7) */
    u_long selbroken;       /* KoD received */
};

/*
 * Values for peer.leap, sys_leap
 */
#define  LEAP_NOWARNING 0x0     /* normal, no leap second warning */
#define  LEAP_ADDSECOND 0x1     /* last minute of day has 61 seconds */
#define  LEAP_DELSECOND 0x2     /* last minute of day has 59 seconds */
#define  LEAP_NOTINSYNC 0x3     /* overload, clock is free running */

/*
 * Values for peer mode and packet mode. Only the modes through
 * MODE_BROADCAST and MODE_BCLIENT appear in the transition
 * function. MODE_CONTROL and MODE_PRIVATE can appear in packets,
 * but those never survive to the transition function.
 * is a
 */
#define  MODE_UNSPEC 0  /* unspecified (old version) */
#define  MODE_ACTIVE 1  /* symmetric active mode */
#define  MODE_PASSIVE   2       /* symmetric passive mode */
#define  MODE_CLIENT 3  /* client mode */
#define  MODE_SERVER 4  /* server mode */
#define  MODE_BROADCAST 5       /* broadcast mode */
/*
 * These can appear in packets
 */
#define  MODE_CONTROL   6       /* control mode */
#define  MODE_PRIVATE   7       /* private mode */
/*
 * This is a madeup mode for broadcast client.
 */
#define  MODE_BCLIENT   6       /* broadcast client mode */

/*
 * Values for peer.stratum, sys_stratum
 */
#define  STRATUM_REFCLOCK ((u_char)0)   /* default stratum */
/* A stratum of 0 in the packet is mapped to 16 internally */
#define  STRATUM_PKT_UNSPEC ((u_char)0) /* unspecified in packet */
#define  STRATUM_UNSPEC ((u_char)16)    /* unspecified */

/*
 * Values for peer.flags
 */
#define  FLAG_CONFIG 0x0001     /* association was configured */
#define FLAG_PREEMPT 0x0002     /* preemptable association */
#define  FLAG_AUTHENTIC 0x0004  /* last message was authentic */
#define  FLAG_REFCLOCK  0x0008  /* this is actually a reference clock */
#define  FLAG_SYSPEER   0x0010  /* system peer */
#define FLAG_PREFER  0x0020     /* prefer peer */
#define FLAG_BURST   0x0040     /* burst mode */
#define FLAG_PPS  0x0080        /* steered by PPS */
#define FLAG_IBURST  0x0100     /* initial burst mode */
#define FLAG_NOSELECT   0x0200  /* never select */
#define FLAG_TRUE 0x0400        /* force truechimer */
#define FLAG_SKEY 0x0800        /* autokey authentication */
#define  FLAG_XLEAVE 0x1000     /* interleaved protocol */
#define  FLAG_XB     0x2000     /* interleaved broadcast */
#define  FLAG_XBOGUS 0x4000     /* interleaved bogus packet */
#ifdef OPENSSL
#define FLAG_ASSOC   0x8000     /* autokey request */
#endif 

/*
 * Definitions for the clear() routine.  We use memset() to clear
 * the parts of the peer structure which go to zero.  These are
 * used to calculate the start address and length of the area.
 */
#define  CLEAR_TO_ZERO(p)  ((char *)&((p)->clear_to_zero))
#define  END_CLEAR_TO_ZERO(p) ((char *)&((p)->end_clear_to_zero))
#define  LEN_CLEAR_TO_ZERO (END_CLEAR_TO_ZERO((struct peer *)0) \
                - CLEAR_TO_ZERO((struct peer *)0))
#define CRYPTO_TO_ZERO(p)  ((char *)&((p)->clear_to_zero))
#define END_CRYPTO_TO_ZERO(p) ((char *)&((p)->end_clear_to_zero))
#define LEN_CRYPTO_TO_ZERO (END_CRYPTO_TO_ZERO((struct peer *)0) \
                - CRYPTO_TO_ZERO((struct peer *)0))

/*
 * Reference clock identifiers (for pps signal)
 */
#define PPSREFID (u_int32)"PPS "        /* used when pps controls stratum>1 */

/*
 * Reference clock types.  Added as necessary.
 */
#define  REFCLK_NONE    0       /* unknown or missing */
#define  REFCLK_LOCALCLOCK 1    /* external (e.g., lockclock) */
#define  REFCLK_GPS_TRAK      2 /* TRAK 8810 GPS Receiver */
#define  REFCLK_WWV_PST    3    /* PST/Traconex 1020 WWV/H */
#define  REFCLK_SPECTRACOM 4    /* Spectracom (generic) Receivers */
#define  REFCLK_TRUETIME      5 /* TrueTime (generic) Receivers */
#define REFCLK_IRIG_AUDIO  6    /* IRIG-B/W audio decoder */
#define  REFCLK_CHU_AUDIO  7    /* CHU audio demodulator/decoder */
#define REFCLK_PARSE    8       /* generic driver (usually DCF77,GPS,MSF) */
#define  REFCLK_GPS_MX4200 9    /* Magnavox MX4200 GPS */
#define REFCLK_GPS_AS2201  10   /* Austron 2201A GPS */
#define  REFCLK_GPS_ARBITER   11        /* Arbiter 1088A/B/ GPS */
#define REFCLK_IRIG_TPRO   12   /* KSI/Odetics TPRO-S IRIG */
#define REFCLK_ATOM_LEITCH 13   /* Leitch CSD 5300 Master Clock */
#define REFCLK_MSF_EES     14   /* EES M201 MSF Receiver */
#define  REFCLK_GPSTM_TRUE 15   /* OLD TrueTime GPS/TM-TMD Receiver */
#define REFCLK_IRIG_BANCOMM   16        /* Bancomm GPS/IRIG Interface */
#define REFCLK_GPS_DATUM   17   /* Datum Programmable Time System */
#define REFCLK_ACTS     18      /* Generic Auto Computer Time Service */
#define REFCLK_WWV_HEATH   19   /* Heath GC1000 WWV/WWVH Receiver */
#define REFCLK_GPS_NMEA    20   /* NMEA based GPS clock */
#define REFCLK_GPS_VME     21   /* TrueTime GPS-VME Interface */
#define REFCLK_ATOM_PPS    22   /* 1-PPS Clock Discipline */
#define REFCLK_PTB_ACTS    23   /* replaced by REFCLK_ACTS */
#define REFCLK_USNO     24      /* replaced by REFCLK_ACTS */
#define REFCLK_GPS_HP      26   /* HP 58503A Time/Frequency Receiver */
#define REFCLK_ARCRON_MSF  27   /* ARCRON MSF radio clock. */
#define REFCLK_SHM      28      /* clock attached thru shared memory */
#define REFCLK_PALISADE    29   /* Trimble Navigation Palisade GPS */
#define REFCLK_ONCORE      30   /* Motorola UT Oncore GPS */
#define REFCLK_GPS_JUPITER 31   /* Rockwell Jupiter GPS receiver */
#define REFCLK_CHRONOLOG   32   /* Chrono-log K WWVB receiver */
#define REFCLK_DUMBCLOCK   33   /* Dumb localtime clock */
#define REFCLK_ULINK    34      /* Ultralink M320 WWVB receiver */
#define REFCLK_PCF      35      /* Conrad parallel port radio clock */
#define REFCLK_WWV_AUDIO   36   /* WWV/H audio demodulator/decoder */
#define REFCLK_FG    37 /* Forum Graphic GPS */
#define REFCLK_HOPF_SERIAL 38   /* hopf DCF77/GPS serial receiver  */
#define REFCLK_HOPF_PCI    39   /* hopf DCF77/GPS PCI receiver  */
#define REFCLK_JJY      40      /* JJY receiver  */
#define  REFCLK_TT560      41   /* TrueTime 560 IRIG-B decoder */
#define REFCLK_ZYFER    42      /* Zyfer GPStarplus receiver  */
#define REFCLK_RIPENCC     43   /* RIPE NCC Trimble driver */
#define REFCLK_NEOCLOCK4X  44   /* NeoClock4X DCF77 or TDF receiver */
#define REFCLK_MAX      44      /* NeoClock4X DCF77 or TDF receiver */

/*
 * NTP packet format.  The mac field is optional.  It isn't really
 * an l_fp either, but for now declaring it that way is convenient.
 * See Appendix A in the specification.
 *
 * Note that all u_fp and l_fp values arrive in network byte order
 * and must be converted (except the mac, which isn't, really).
 */
struct pkt
{
    u_char li_vn_mode;  /* peer leap indicator */
    u_char stratum;     /* peer stratum */
    u_char ppoll;       /* peer poll interval */
    s_char precision;   /* peer clock precision */
    u_fp rootdelay;     /* roundtrip delay to primary source */
    u_fp rootdisp;      /* dispersion to primary source */
    u_int32 refid;      /* reference id */
    l_fp reftime;       /* last update time */
    l_fp org;           /* originate time stamp */
    l_fp rec;           /* receive time stamp */
    l_fp xmt;           /* transmit time stamp */

#define  LEN_PKT_NOMAC  (12 *sizeof(u_int32))  /* min header length */
#define MIN_MAC_LEN  (1 *sizeof(u_int32))      /* crypto_NAK */
#define MAX_MD5_LEN  (5 *sizeof(u_int32))      /* MD5 */
#define  MAX_MAC_LEN (6 *sizeof(u_int32))      /* SHA */

    /*
     * The length of the packet less MAC must be a multiple of 64
     * with an RSA modulus and Diffie-Hellman prime of 256 octets
     * and maximum host name of 128 octets, the maximum autokey
     * command is 152 octets and maximum autokey response is 460
     * octets. A packet can contain no more than one command and one
     * response, so the maximum total extension field length is 864
     * octets. But, to handle humungus certificates, the bank must
     * be broke.
     */
#ifdef OPENSSL
    u_int32 exten[NTP_MAXEXTEN / 4];    /* max extension field */
#else 
    u_int32 exten[1];                   /* misused */
#endif 
    u_char mac[MAX_MAC_LEN];            /* mac */
};

/*
 * Stuff for extracting things from li_vn_mode
 */
#define  PKT_MODE(li_vn_mode) ((u_char)((li_vn_mode) & 0x7))
#define  PKT_VERSION(li_vn_mode) ((u_char)(((li_vn_mode) >> 3) & 0x7))
#define  PKT_LEAP(li_vn_mode) ((u_char)(((li_vn_mode) >> 6) & 0x3))

/*
 * Stuff for putting things back into li_vn_mode
 */
#define  PKT_LI_VN_MODE(li, vn, md) \
   ((u_char)((((li) << 6) & 0xc0) | (((vn) << 3) & 0x38) | ((md) & 0x7)))

/*
 * Dealing with stratum.  0 gets mapped to 16 incoming, and back to 0
 * on output.
 */
#define  PKT_TO_STRATUM(s) ((u_char)(((s) == (STRATUM_PKT_UNSPEC)) ?\
            (STRATUM_UNSPEC) : (s)))

#define  STRATUM_TO_PKT(s) ((u_char)(((s) == (STRATUM_UNSPEC)) ?\
            (STRATUM_PKT_UNSPEC) : (s)))

/*
 * Event codes. Used for reporting errors/events to the control module
 */
#define  PEER_EVENT  0x080      /* this is a peer event */
#define CRPT_EVENT   0x100      /* this is a crypto event */

/*
 * System event codes
 */
#define  EVNT_UNSPEC 0  /* unspecified */
#define  EVNT_NSET   1  /* freq not set */
#define  EVNT_FSET   2  /* freq set */
#define  EVNT_SPIK   3  /* spike detect */
#define  EVNT_FREQ   4  /* freq mode */
#define  EVNT_SYNC   5  /* clock sync */
#define  EVNT_SYSRESTART   6    /* restart */
#define  EVNT_SYSFAULT  7       /* panic stop */
#define  EVNT_NOPEER 8  /* no sys peer */
#define  EVNT_ARMED  9  /* leap armed */
#define  EVNT_DISARMED  10      /* leap disarmed */
#define  EVNT_LEAP   11 /* leap event */
#define  EVNT_CLOCKRESET   12   /* clock step */
#define  EVNT_KERN   13 /* kernel event */
#define  EVNT_TAI 14    /* TAI */
#define  EVNT_LEAPVAL   15      /* stale leapsecond values */
#define  EVNT_CLKHOP 16 /* clockhop */

/*
 * Peer event codes
 */
#define  PEVNT_MOBIL (1 | PEER_EVENT)   /* mobilize */
#define  PEVNT_DEMOBIL  (2 | PEER_EVENT)        /* demobilize */
#define  PEVNT_UNREACH  (3 | PEER_EVENT)        /* unreachable */
#define  PEVNT_REACH (4 | PEER_EVENT)   /* reachable */
#define  PEVNT_RESTART  (5 | PEER_EVENT)        /* restart */
#define  PEVNT_REPLY (6 | PEER_EVENT)   /* no reply */
#define  PEVNT_RATE  (7 | PEER_EVENT)   /* rate exceeded */
#define  PEVNT_DENY  (8 | PEER_EVENT)   /* access denied */
#define PEVNT_ARMED  (9 | PEER_EVENT)   /* leap armed */
#define  PEVNT_NEWPEER  (10 | PEER_EVENT)       /* sys peer */
#define  PEVNT_CLOCK (11 | PEER_EVENT)  /* clock event */
#define  PEVNT_AUTH  (12 | PEER_EVENT)  /* bad auth */
#define  PEVNT_POPCORN  (13 | PEER_EVENT)       /* popcorn */
#define  PEVNT_XLEAVE   (14 | PEER_EVENT)       /* interleave mode */
#define  PEVNT_XERR  (15 | PEER_EVENT)  /* interleave error */
#define  PEVNT_TAI   (16 | PEER_EVENT)  /* TAI */

/*
 * Clock event codes
 */
#define  CEVNT_NOMINAL  0       /* unspecified */
#define  CEVNT_TIMEOUT  1       /* no reply */
#define  CEVNT_BADREPLY 2       /* bad format */
#define  CEVNT_FAULT 3  /* fault */
#define  CEVNT_PROP  4  /* bad signal */
#define  CEVNT_BADDATE  5       /* bad date */
#define  CEVNT_BADTIME  6       /* bad time */
#define CEVNT_MAX CEVNT_BADTIME

/*
 * Very misplaced value.  Default port through which we send traps.
 */
#define  TRAPPORT 18447

/*
 * To speed lookups, peers are hashed by the low order bits of the
 * remote IP address. These definitions relate to that.
 */
#define  _NTPD_COMM_H_ASH_SIZE   128
#define  _NTPD_COMM_H_ASH_MASK   (_NTPD_COMM_H_ASH_SIZE-1)
#define  _NTPD_COMM_H_ASH_ADDR(src) sock_hash(src)

/*
 * min, min3 and max.  Makes it easier to transliterate the spec without
 * thinking about it.
 */
#define  min(a,b) (((a) < (b)) ? (a) : (b))
#define  max(a,b) (((a) > (b)) ? (a) : (b))
#define  min3(a,b,c) min(min((a),(b)), (c))

/*
 * Configuration items.  These are for the protocol module (proto_config())
 */
#define  PROTO_BROADCLIENT 1
#define  PROTO_PRECISION      2 /* (not used) */
#define  PROTO_AUTHENTICATE   3
#define  PROTO_BROADDELAY  4
#define  PROTO_AUTHDELAY      5 /* (not used) */
#define PROTO_MULTICAST_ADD   6
#define PROTO_MULTICAST_DEL   7
#define PROTO_NTP    8
#define PROTO_KERNEL    9
#define PROTO_MONITOR      10
#define PROTO_FILEGEN      11
#define  PROTO_PPS      12
#define PROTO_CAL    13
#define PROTO_MINCLOCK     14
#define  PROTO_MAXCLOCK    15
#define PROTO_MINSANE      16
#define PROTO_FLOOR     17
#define PROTO_CEILING      18
#define PROTO_COHORT    19
#define PROTO_CALLDELAY    20
#define PROTO_MINDISP      21
#define PROTO_MAXDIST      22
#define PROTO_ADJ    23
#define  PROTO_MAXHOP      24
#define  PROTO_BEACON      25
#define  PROTO_ORPHAN      26

/*
 * Configuration items for the loop filter
 */
#define  LOOP_DRIFTINIT    1    /* set initial frequency offset */
#define LOOP_DRIFTCOMP     2    /* set frequency offset */
#define LOOP_MAX     3  /* set step offset */
#define LOOP_PANIC      4       /* set panic offseet */
#define LOOP_PHI     5  /* set dispersion rate */
#define LOOP_MINSTEP    6       /* set step timeout */
#define LOOP_MINPOLL    7       /* set min poll interval (log2 s) */
#define LOOP_ALLAN      8       /* set minimum Allan intercept */
#define LOOP_HUFFPUFF      9    /* set huff-n'-puff filter length */
#define LOOP_FREQ    10 /* set initial frequency */
#define LOOP_KERN_CLEAR    11   /* reset kernel pll parameters */
#define LOOP_CODEC      12      /* set audio codec frequency */
#define  LOOP_LEAP      13      /* insert leap after second 23:59 */

/*
 * Configuration items for the stats printer
 */
#define  STATS_FREQ_FILE      1 /* configure drift file */
#define STATS_STATSDIR     2    /* directory prefix for stats files */
#define  STATS_PID_FILE    3    /* configure ntpd PID file */
#define  STATS_LEAP_FILE      4 /* configure ntpd leapseconds file */

#define MJD_1900     15020      /* MJD for 1 Jan 1900 */

/*
 * Default parameters.  We use these in the absence of something better.
 */
#define INADDR_NTP   0xe0000101 /* NTP multicast address 224.0.1.1 */


/*
 * Values for cast_flags
 */
#define  MDF_UCAST   0x01       /* unicast */
#define  MDF_MCAST   0x02       /* multicast */
#define  MDF_BCAST   0x04       /* broadcast */
#define  MDF_LCAST   0x08       /* localcast */
#define MDF_ACAST 0x10  /* manycast */
#define  MDF_BCLNT   0x20       /* broadcast client */
#define MDF_ACLNT 0x40  /* manycast client */

/*
 * Values used with mon_enabled to indicate reason for enabling monitoring
 */
#define MON_OFF    0x00 /* no monitoring */
#define MON_ON     0x01 /* monitoring explicitly enabled */
#define MON_RES    0x02 /* implicit monitoring for RES_LIMITED */
/*
 * Structure used for restrictlist entries
 */
typedef struct res_addr4_tag
{
    u_int32 addr;   /* IPv4 addr (host order) */
    u_int32 mask;   /* IPv4 mask (host order) */
} res_addr4;

typedef struct restrict_u_tag restrict_u;
struct restrict_u_tag
{
    restrict_u *link;   /* link to next entry */
    u_int32 count;      /* number of packets matched */
    u_short flags;      /* accesslist flags */
    u_short mflags;     /* match flags */
    union
    {                   /* variant starting here */
        res_addr4 v4;
    } u;
};

#define  V4_SIZEOF_RESTRICT_U (offsetof(restrict_u, u)   \
             + sizeof(res_addr4))

/*
 * Access flags
 */
#define  RES_IGNORE     0x0001  /* ignore packet */
#define  RES_DONTSERVE     0x0002       /* access denied */
#define  RES_DONTTRUST     0x0004       /* authentication required */
#define  RES_VERSION    0x0008  /* version mismatch */
#define  RES_NOPEER     0x0010  /* new association denied */
#define RES_LIMITED     0x0020  /* packet rate exceeded */
#define RES_FLAGS    (RES_IGNORE | RES_DONTSERVE |\
                RES_DONTTRUST | RES_VERSION |     \
                RES_NOPEER | RES_LIMITED)

#define  RES_NOQUERY    0x0040  /* mode 6/7 packet denied */
#define  RES_NOMODIFY      0x0080       /* mode 6/7 modify denied */
#define  RES_NOTRAP     0x0100  /* mode 6/7 set trap denied */
#define  RES_LPTRAP     0x0200  /* mode 6/7 low priority trap */

#define RES_KOD         0x0400  /* send kiss of death packet */
#define  RES_MSSNTP     0x0800  /* enable MS-SNTP authentication */
#define RES_TIMEOUT     0x1000  /* timeout this entry */

#define  RES_ALLFLAGS      (RES_FLAGS | RES_NOQUERY |\
                RES_NOMODIFY | RES_NOTRAP |          \
                RES_LPTRAP | RES_KOD |               \
                RES_MSSNTP | RES_TIMEOUT)

/*
 * Match flags
 */
#define  RESM_INTERFACE    0x1000       /* this is an interface */
#define  RESM_NTPONLY      0x2000       /* match ntp port only */

/*
 * Restriction configuration ops
 */
#define  RESTRICT_FLAGS    1    /* add flags to restrict entry */
#define  RESTRICT_UNFLAG      2 /* remove flags from restrict entry */
#define  RESTRICT_REMOVE      3 /* remove a restrict entry */
#define  RESTRICT_REMOVEIF       4      /* remove an interface restrict entry */

/*
 * Endpoint structure for the select algorithm
 */
struct endpoint
{
    double val; /* offset of endpoint */
    int type;   /* interval entry/exit */
};

/*
 * Association matching AM[] return codes
 */
#define AM_ERR    -1    /* error */
#define AM_NOMATCH   0  /* no match */
#define AM_PROCPKT   1  /* server/symmetric packet */
#define AM_BCST      2  /* broadcast packet */
#define AM_FXMIT  3     /* client packet */
#define AM_MANYCAST  4  /* manycast packet */
#define AM_NEWPASS   5  /* new passive */
#define AM_NEWBCL 6     /* new broadcast */
#define  AM_POSSBCL  7  /* discard broadcast */

/* NetInfo configuration locations */
#ifdef HAVE_NETINFO
#define NETINFO_CONFIG_DIR "/config/ntp"
#endif 

/* //////// */
/*
 * The server structure is a much simplified version of the
 * peer structure, for ntpdate's use.  Since we always send
 * in client mode and expect to receive in server mode, this
 * leaves only a very limited number of things we need to
 * remember about the server.
 */
struct server
{
    struct server *next_server;     /* next server in build list */
    sockaddr_struct srcadr;         /* address of remote host */
    u_char version;                 /* version to use */
    u_char leap;                    /* leap indicator */
    u_char stratum;                 /* stratum of remote server */
    s_char precision;               /* server's clock precision */
    u_char trust;                   /* trustability of the filtered data */
    u_fp rootdelay;                 /* distance from primary clock */
    u_fp rootdisp;                  /* peer clock dispersion */
    u_int32 refid;                  /* peer reference ID */
    l_fp reftime;                   /* time of peer's last update */
    u_long event_time;              /* time for next timeout */
    u_long last_xmit;               /* time of last transmit */
    u_short xmtcnt;                 /* number of packets transmitted */
    u_short rcvcnt;                 /* number of packets received */
    u_char reach;                   /* reachability, NTP_WINDOW bits */
    u_short filter_nextpt;          /* index into filter shift register */
    s_fp filter_delay[NTP_SHIFT];   /* delay part of shift register */
    l_fp filter_offset[NTP_SHIFT];  /* offset part of shift register */
    s_fp filter_soffset[NTP_SHIFT]; /* offset in s_fp format, for disp */
    u_fp filter_error[NTP_SHIFT];   /* error part of shift register */
    l_fp org;                       /* peer's originate time stamp */
    l_fp xmt;                       /* transmit time stamp */
    u_fp delay;                     /* filter estimated delay */
    u_fp dispersion;                /* filter estimated dispersion */
    l_fp offset;                    /* filter estimated clock offset */
    s_fp soffset;                   /* fp version of above */
	l_fp updtime;
};

/*
 * ntpdate runs everything on a simple, short timeout.  It sends a
 * packet and sets the timeout (by default, to a small value suitable
 * for a LAN).  If it receives a response it sends another request.
 * If it times out it shifts zeroes into the filter and sends another
 * request.
 *
 * The timer routine is run often (once every 1/5 second currently)
 * so that time outs are done with reasonable precision.
 */
#define TIMER_HZ  (5)   /* 5 per second */

/*
 * ntpdate will make a long adjustment using adjtime() if the times
 * are close, or step the time if the times are farther apart.  The
 * following defines what is "close".
 */
#define  NTPDATE_THRESHOLD (FP_SECOND >> 1)     /* 1/2 second */

#define NTP_MAXAGE   86400      /* one day in seconds */

/*
 * When doing adjustments, ntpdate actually overadjusts (currently
 * by 50%, though this may change).  While this will make it take longer
 * to reach a steady state condition, it will typically result in
 * the clock keeping more accurate time, on average.  The amount of
 * overshoot is limited.
 */
#ifdef NOTNOW
#define  ADJ_OVERSHOOT  1/2     /* this is hard coded */
#endif 
#define  ADJ_MAXOVERSHOOT  0x10000000   /* 50 ms as a ts fraction */

/*
 * Since ntpdate isn't aware of some of the things that normally get
 * put in an NTP packet, we fix some values.
 */
#define  NTPDATE_PRECISION (-6) /* use this precision */
#define  NTPDATE_DISTANCE  FP_SECOND    /* distance is 1 sec */
#define  NTPDATE_DISP      FP_SECOND    /* so is the dispersion */
#define  NTPDATE_REFID     (0)  /* reference ID to use */
#define PEER_MAXDISP (64*FP_SECOND)     /* maximum dispersion (fp 64) */

/*
 * Some defaults
 */
#define  MINTIMEOUT  (2 * TIMER_HZ)     /* 2s min. between packets */
#define  DEFTIMEOUT  MINTIMEOUT /*   (to the same server) */
#define  DEFSAMPLES  4  /* get 4 samples per server */
#define  DEFPRECISION   (-5)    /* the precision we claim */
#define  DEFMAXPERIOD   60      /* maximum time to wait */
#define  DEFMINSERVERS  3       /* minimum responding servers */
#define  DEFMINVALID 1  /* mimimum servers with valid time */

#define MAX_AF 2

/*
 * Compatibility stuff for Version 2
 */
#define NTP_MAXSKW   0x28f      /* 0.01 sec in fp format */
#define NTP_MINDIST  0x51f      /* 0.02 sec in fp format */
#define PEER_MAXDISP (64*FP_SECOND)     /* maximum dispersion (fp 64) */
#define NTP_INFIN 15    /* max stratum, infinity a la Bellman-Ford */
#define NTP_MAXWGT   (8*FP_SECOND)      /* maximum select weight 8 seconds */
#define NTP_MAXLIST  5  /* maximum select list size */
#define PEER_SHIFT   8  /* 8 suitable for crystal time base */

#define  JAN_1970 0x83aa7e80    /* 2208988800 1970 - 1900 in seconds */

void get_systime(l_fp *now);
int authencrypt(unsigned int keyno, unsigned int *pkt, int length);
int authdecrypt(keyid_t keyno, u_int32 *pkt, int length, int size);

/* //////////////////////////////////// */
#define NTP_TRUE  1
#define NTP_FALSE   0

/* NTP State */
#define NTPD_S_IDLE    0
#define NTPD_S_INIT    1
#define NTPD_S_HOST    2
#define NTPD_S_SYNC    3
#define NTPD_S_RECV    4
#define NTPD_S_UPDT    5


typedef struct
{
    kal_int32 state;
    kal_int32 soc_id;
    kal_int32 account_id;
    kal_int32 dns_req_id;
    kal_int32 sys_numservers;
    kal_uint32 current_time;
    kal_int32 error;
    struct server *sys_servers; /* ntp server list */
    ntpd_sync_cb sync_cb[NTPD_MAX_CALLBACK];
    void *usr_data[NTPD_MAX_CALLBACK];
    sockaddr_struct serv_addr;
    kal_uint8 keyid[NTPD_KEYID_LEN];
    kal_uint8 server[NTPD_SERVER_NUM][NTPD_MAX_NAME_LEN];
    kal_uint16 port[NTPD_SERVER_NUM];
    kal_uint16 server_num;
    kal_uint16 samples;
    kal_uint16 timeout;
    kal_uint16 cb_cnt;
    kal_uint16 done_cnt;
    kal_uint16 auth;
    kal_uint32 sys_authkey;
    struct server * ntpd_sys_peer;
} ntpd_context_struct;

#endif /* _NTPD_COMM_H_ */ 

