/*
 * Copyright (c) 2007 The Khronos Group Inc. 
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions: 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software. 
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
 *
 */

/** @file OMX_Index.h - OpenMax IL version 1.1.1
 *  The OMX_Index header file contains the definitions for both applications
 *  and components .
 */


#ifndef OMX_Index_h
#define OMX_Index_h

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Each OMX header must include all required header files to allow the
 *  header to compile without errors.  The includes below are required
 *  for this header file to compile successfully 
 */
//#include "OMX_Types.h"


/** The OMX_INDEXTYPE enumeration is used to select a structure when either
 *  getting or setting parameters and/or configuration data.  Each entry in 
 *  this enumeration maps to an OMX specified structure.  When the 
 *  OMX_GetParameter, OMX_SetParameter, OMX_GetConfig or OMX_SetConfig methods
 *  are used, the second parameter will always be an entry from this enumeration
 *  and the third entry will be the structure shown in the comments for the entry.
 *  For example, if the application is initializing a cropping function, the 
 *  OMX_SetConfig command would have OMX_ConfigInputCrop as the second parameter 
 *  and would send a pointer to an initialized OMX_RECTTYPE structure as the 
 *  third parameter.
 *  
 *  The enumeration entries named with the OMX_Config prefix are sent using
 *  the OMX_SetConfig command and the enumeration entries named with the
 *  OMX_PARAM_ prefix are sent using the OMX_SetParameter command.
 */
typedef enum OMX_INDEXTYPE {

    OMX_IndexComponentStartUnused = 0x01000000,
    OMX_IndexParamPriorityMgmt, /**< reference: OMX_PRIORITYMGMTTYPE */
    OMX_IndexParamAudioInit, /**< reference: OMX_PORT_PARAM_TYPE  */
    OMX_IndexParamImageInit, /**< reference: OMX_PORT_PARAM_TYPE  */
    OMX_IndexParamVideoInit, /**< reference: OMX_PORT_PARAM_TYPE  */
    OMX_IndexParamOtherInit, /**< reference: OMX_PORT_PARAM_TYPE  */
    OMX_IndexParamNumAvailableStreams, /**< reference: OMX_PARAM_U32TYPE */
    OMX_IndexParamActiveStream,        /**< reference: OMX_PARAM_U32TYPE */
    OMX_IndexParamSuspensionPolicy,    /**< reference: OMX_PARAM_SUSPENSIONPOLICYTYPE */
    OMX_IndexParamComponentSuspended,  /**< reference: OMX_PARAM_SUSPENSIONTYPE */
    OMX_IndexConfigCapturing, /**< reference: OMX_CONFIG_BOOLEANTYPE */ 
    OMX_IndexConfigCaptureMode, /**< reference: OMX_CONFIG_CAPTUREMODETYPE */ 
    OMX_IndexAutoPauseAfterCapture, /**< reference: OMX_CONFIG_BOOLEANTYPE */ 
    OMX_IndexParamContentURI,  /**< reference: OMX_PARAM_CONTENTURITYPE */
    OMX_IndexParamCustomContentPipe, /**< reference: OMX_PARAM_CONTENTPIPETYPE */ 
    OMX_IndexParamDisableResourceConcealment, /**< reference: OMX_RESOURCECONCEALMENTTYPE */
    OMX_IndexConfigMetadataItemCount,        /**< reference: OMX_CONFIG_METADATAITEMCOUNTTYPE */
    OMX_IndexConfigContainerNodeCount,       /**< reference: OMX_CONFIG_CONTAINERNODECOUNTTYPE */
    OMX_IndexConfigMetadataItem,             /**< reference: OMX_CONFIG_METADATAITEMTYPE */
    OMX_IndexConfigCounterNodeID,            /**< reference: OMX_CONFIG_CONTAINERNODEIDTYPE */
    OMX_IndexParamMetadataFilterType,        /** < reference: OMX_PARAM_METADATAFILTERTYPE */
    OMX_IndexParamMetadataKeyFilter,         /**< reference: OMX_PARAM_METADATAFILTERTYPE */
    OMX_IndexConfigPriorityMgmt,             /**< reference: OMX_PRIORITYMGMTTYPE */
    OMX_IndexParamStandardComponentRole,     /**< reference: OMX_PARAM_COMPONENTROLETYPE */

    OMX_IndexPortStartUnused = 0x02000000,
    OMX_IndexParamPortDefinition, /**< reference: OMX_PARAM_PORTDEFINITIONTYPE */
    OMX_IndexParamCompBufferSupplier, /**< reference: OMX_PARAM_BUFFERSUPPLIERTYPE (*/ 
    OMX_IndexReservedStartUnused = 0x03000000,

    /* Audio parameters and configurations */
    OMX_IndexAudioStartUnused = 0x04000000,
    OMX_IndexParamAudioPortFormat, /**< reference: OMX_AUDIO_PARAM_PORTFORMATTYPE */
    OMX_IndexParamAudioPcm,    /**< reference: OMX_AUDIO_PARAM_PCMMODETYPE */
    OMX_IndexParamAudioAac,    /**< reference: OMX_AUDIO_PARAM_AACPROFILETYPE */
    OMX_IndexParamAudioRa,     /**< reference: OMX_AUDIO_PARAM_RATYPE */
    OMX_IndexParamAudioMp3,    /**< reference: OMX_AUDIO_PARAM_MP3TYPE */
    OMX_IndexParamAudioApe,    /**< reference: OMX_AUDIO_PARAM_APETYPE */
    OMX_IndexParamAudioAdpcm,  /**< reference: OMX_AUDIO_PARAM_ADPCMTYPE */
    OMX_IndexParamAudioG723,   /**< reference: OMX_AUDIO_PARAM_G723TYPE */
    OMX_IndexParamAudioG729,   /**< reference: OMX_AUDIO_PARAM_G729TYPE */
    OMX_IndexParamAudioAmr,    /**< reference: OMX_AUDIO_PARAM_AMRTYPE */
    OMX_IndexParamAudioWma,    /**< reference: OMX_AUDIO_PARAM_WMATYPE */
    OMX_IndexParamAudioSbc,    /**< reference: OMX_AUDIO_PARAM_SBCTYPE */
    OMX_IndexParamAudioMidi,   /**< reference: OMX_AUDIO_PARAM_MIDITYPE */
    OMX_IndexParamAudioGsm_FR, /**< reference: OMX_AUDIO_PARAM__GSMFRTYPE */
    OMX_IndexParamAudioMidiLoadUserSound, /**< reference: OMX_AUDIO_PARAM_MIDILOADUSERSOUNDTYPE */
    OMX_IndexParamAudioG726,     /**< reference: OMX_AUDIO_PARAM_G726TYPE */
    OMX_IndexParamAudioGsm_EFR,  /**< reference: OMX_AUDIO_PARAM_GSMEFRTYPE */
    OMX_IndexParamAudioGsm_HR,   /**< reference: OMX_AUDIO_PARAM_GSMHRTYPE */
    OMX_IndexParamAudioPdc_FR,   /**< reference: OMX_AUDIO_PARAM_PDCFRTYPE */
    OMX_IndexParamAudioPdc_EFR,  /**< reference: OMX_AUDIO_PARAM_PDCEFRTYPE */
    OMX_IndexParamAudioPdc_HR,   /**< reference: OMX_AUDIO_PARAM_PDCHRTYPE */
    OMX_IndexParamAudioTdma_FR,  /**< reference: OMX_AUDIO_PARAM_TDMAFRTYPE */
    OMX_IndexParamAudioTdma_EFR, /**< reference: OMX_AUDIO_PARAM_TDMAEFRTYPE */
    OMX_IndexParamAudioQcelp8,   /**< reference: OMX_AUDIO_PARAM_QCELP8TYPE */
    OMX_IndexParamAudioQcelp13,  /**< reference: OMX_AUDIO_PARAM_QCELP13TYPE */
    OMX_IndexParamAudioEvrc,     /**< reference: OMX_AUDIO_PARAM_EVRCTYPE */
    OMX_IndexParamAudioSmv,      /**< reference: OMX_AUDIO_PARAM_SMVTYPE */
    OMX_IndexParamAudioVorbis,   /**< reference: OMX_AUDIO_PARAM_VORBISTYPE */
    OMX_IndexParamAudioDspAac,   /**< reference: OMX_AUDIO_PARAM_DSPAACTYPE */
    OMX_IndexParamAudioFlac,     /**< reference: OMX_AUDIO_PARAM_FLACTYPE */

    OMX_IndexConfigAudioMidiImmediateEvent, /**< OMX_AUDIO_CONFIG_MIDIIMMEDIATEEVENTTYPE */
    OMX_IndexConfigAudioMidiControl, /**< reference: OMX_AUDIO_CONFIG_MIDICONTROLTYPE */
    OMX_IndexConfigAudioMidiSoundBankProgram, /**< reference: OMX_AUDIO_CONFIG_MIDISOUNDBANKPROGRAMTYPE */
    OMX_IndexConfigAudioMidiStatus,  /**< reference: OMX_AUDIO_CONFIG_MIDISTATUSTYPE */
    OMX_IndexConfigAudioMidiMetaEvent, /**< reference: OMX_AUDIO_CONFIG_MIDIMETAEVENTTYPE */
    OMX_IndexConfigAudioMidiMetaEventData, /**< reference: OMX_AUDIO_CONFIG_MIDIMETAEVENTDATATYPE */
    OMX_IndexConfigAudioVolume,      /**< reference: OMX_AUDIO_CONFIG_VOLUMETYPE */
    OMX_IndexConfigAudioBalance,     /**< reference: OMX_AUDIO_CONFIG_BALANCETYPE */
    OMX_IndexConfigAudioChannelMute, /**< reference: OMX_AUDIO_CONFIG_CHANNELMUTETYPE */
    OMX_IndexConfigAudioMute,        /**< reference: OMX_AUDIO_CONFIG_MUTETYPE */
    OMX_IndexConfigAudioLoudness,    /**< reference: OMX_AUDIO_CONFIG_LOUDNESSTYPE */
    OMX_IndexConfigAudioEchoCancelation, /**< reference: OMX_AUDIO_CONFIG_ECHOCANCELATIONTYPE */
    OMX_IndexConfigAudioNoiseReduction,  /**< reference: OMX_AUDIO_CONFIG_NOISEREDUCTIONTYPE */
    OMX_IndexConfigAudioBass,        /**< reference: OMX_AUDIO_CONFIG_BASSTYPE */
    OMX_IndexConfigAudioTreble,      /**< reference: OMX_AUDIO_CONFIG_TREBLETYPE */
    OMX_IndexConfigAudioStereoWidening, /**< reference: OMX_AUDIO_CONFIG_STEREOWIDENINGTYPE */
    OMX_IndexConfigAudioChorus,      /**< reference: OMX_AUDIO_CONFIG_CHORUSTYPE */
    OMX_IndexConfigAudioEqualizer,   /**< reference: OMX_AUDIO_CONFIG_EQUALIZERTYPE */
    OMX_IndexConfigAudioReverberation, /**< reference: OMX_AUDIO_CONFIG_REVERBERATIONTYPE */
    OMX_IndexConfigAudioChannelVolume, /**< reference: OMX_AUDIO_CONFIG_CHANNELVOLUMETYPE */
    OMX_IndexConfigMelodyParserInit,
    OMX_IndexConfigMelodySynthesizerInit,
    OMX_IndexConfigMelodyDeviceInit,
    OMX_IndexConfigMelodyGetChannelVolume,
    OMX_IndexConfigMelodySetChannelVolume,
    OMX_IndexConfigMelodyGetChannelProgram,
    OMX_IndexConfigMelodySetChannelProgram,
    OMX_IndexConfigMelodyGetTempo,
    OMX_IndexConfigMelodySetTempo,
    OMX_IndexConfigMelodyGetPitchTranspose,
    OMX_IndexConfigMelodySetPitchTranspose,
    OMX_IndexConfigMelodyGetPlayRate,
    OMX_IndexConfigMelodySetPlayRate,
    OMX_IndexConfigMelodyGetTsRate,
    OMX_IndexConfigMelodySetTsRate,
    OMX_IndexConfigMelodyGetLevel,
    OMX_IndexConfigMelodySetLevel,
    OMX_IndexConfigMelodySpMidi,
    OMX_IndexConfigMelodyGetParsedTime,
    OMX_IndexConfigMelodyGetDuration,
    OMX_IndexConfigMelodySetStartTime,
    OMX_IndexConfigMelodySetStopTime,
    OMX_IndexConfigMelodySendMessage,
    OMX_IndexConfigMelodyGetCurrentTime,
    OMX_IndexConfigMelodyGetFormat,
    OMX_IndexConfigMelodySetEndFlag,
    OMX_IndexConfigMelodyClrEndFlag,
    OMX_IndexConfigMelodySynthesisDone,
    OMX_IndexConfigMelodyRepeat,
    OMX_IndexConfigMelodyGetParserMemSize,
    OMX_IndexConfigMelodyGetParserState,
    OMX_IndexConfigMelodyPlayerInit,
    OMX_IndexConfigMelodyPlayerFree,
    OMX_IndexConfigMelodyPlayerStart,
    OMX_IndexConfigMelodyPlayerStop,
    OMX_IndexConfigMelodySetParserLevel,
    OMX_IndexConfigMelodyGetParserLevel,
    OMX_IndexConfigMelodyClrIPEndFlag,
    OMX_IndexConfigMelodyParserSetHandler,
    OMX_IndexConfigMelodySetSynHandle,

    /* Image specific parameters and configurations */
    OMX_IndexImageStartUnused = 0x05000000,
    OMX_IndexParamImagePortFormat,   /**< reference: OMX_IMAGE_PARAM_PORTFORMATTYPE */
    OMX_IndexParamFlashControl,      /**< refer to OMX_IMAGE_PARAM_FLASHCONTROLTYPE */
    OMX_IndexConfigFocusControl,     /**< refer to OMX_IMAGE_CONFIG_FOCUSCONTROLTYPE */
    OMX_IndexParamQFactor,           /**< refer to OMX_IMAGE_PARAM_QFACTORTYPE */
    OMX_IndexParamQuantizationTable, /**< refer to OMX_IMAGE_PARAM_QUANTIZATIONTABLETYPE */
    OMX_IndexParamHuffmanTable,      /**< For jpeg, refer to OMX_IMAGE_PARAM_HUFFMANTTABLETYPE */
    OMX_IndexConfigFlashControl,      /**< refer to OMX_IMAGE_PARAM_FLASHCONTROLTYPE */

    /* Video specific parameters and configurations */
    OMX_IndexVideoStartUnused = 0x06000000,
    OMX_IndexParamVideoPortFormat,   /**< reference: OMX_VIDEO_PARAM_PORTFORMATTYPE */
    OMX_IndexParamVideoQuantization, /**< reference: OMX_VIDEO_PARAM_QUANTIZATIONPARAMTYPE */
    OMX_IndexParamVideoFastUpdate,   /**< reference: OMX_VIDEO_PARAM_VIDEOFASTUPDATETYPE */
    OMX_IndexParamVideoBitrate,      /**< reference: OMX_VIDEO_PARAM_BITRATETYPE */
    OMX_IndexParamVideoMotionVector,    /**< reference: OMX_VIDEO_PARAM_MOTIONVECTORTYPE */
    OMX_IndexParamVideoIntraRefresh,    /**< reference: OMX_VIDEO_PARAM_INTRAREFRESHTYPE */
    OMX_IndexParamVideoErrorCorrection, /**< reference: OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE */
    OMX_IndexParamVideoVBSMC, /**< reference:OMX_VIDEO_PARAM_VBSMCTYPE */
    OMX_IndexParamVideoMpeg2, /**< reference:OMX_VIDEO_PARAM_MPEG2TYPE */
    OMX_IndexParamVideoMpeg4, /**< reference: OMX_VIDEO_CONFIG_MPEG4TYPE */
    OMX_IndexParamVideoWmv,   /**< reference:OMX_VIDEO_PARAM_WMVTYPE */
    OMX_IndexParamVideoRv,    /**< reference:OMX_VIDEO_PARAM_RVTYPE */
    OMX_IndexParamVideoAvc,   /**< reference:OMX_VIDEO_PARAM_AVCTYPE */
    OMX_IndexParamVideoH263,  /**< reference:OMX_VIDEO_PARAM_H263TYPE */
    OMX_IndexParamVideoProfileLevelQuerySupported, /**< reference:OMX_VIDEO_PARAM_PROFILELEVEL */
    OMX_IndexParamVideoProfileLevelCurrent, /**< reference:OMX_VIDEO_PARAM_PROFILELEVEL */
    OMX_IndexConfigVideoBitrate, /**< reference: OMX_VIDEO_CONFIG_BITRATETYPE */
    OMX_IndexConfigVideoFramerate, /**< reference:OMX_VIDEO_CONFIG_FRAMERATETYPE */
    OMX_IndexConfigVideoIntraVOPRefresh, /**< reference: OMX_CONFIG_INTRAREFRESHVOPTYPE */
    OMX_IndexConfigVideoIntraMBRefresh, /**< reference: OMX_CONFIG_MACROBLOCKERRORMAPTYPE */
    OMX_IndexConfigVideoMBErrorReporting, /**< reference: OMX_CONFIG_MBERRORREPORTINGTYPE */
    OMX_IndexParamVideoMacroblocksPerFrame, /**< reference: OMX_PARAM_MACROBLOCKSTYPE */
    OMX_IndexConfigVideoMacroBlockErrorMap, /**< reference: OMX_CONFIG_MACROBLOCKERRORMAPTYPE */
    OMX_IndexParamVideoSliceFMO, /**< reference: OMX_VIDEO_PARAM_AVCSLICEFMO */
    OMX_IndexConfigVideoAVCIntraPeriod, /** reference: OMX_VIDEO_CONFIG_AVCINTRAPERIOD */
    OMX_IndexConfigVideoNalSize, /** reference: OMX_VIDEO_CONFIG_NALSIZE */

    /* Image & Video common Configurations */
    OMX_IndexCommonStartUnused = 0x07000000,
    OMX_IndexParamCommonDeblocking, /**< reference: OMX_PARAM_DEBLOCKINGTYPE */
    OMX_IndexParamCommonSensorMode, /**< reference: OMX_PARAM_SENSORMODETYPE */
    OMX_IndexParamCommonInterleave, /** reference: OMX_PARAM_INTERLEAVETYPE */
    OMX_IndexConfigCommonColorFormatConversion,   /**< reference: OMX_CONFIG_COLORCONVERSIONTYPE */
    OMX_IndexConfigCommonScale,  /**< reference: OMX_CONFIG_SCALEFACTORTYPE */
    OMX_IndexConfigCommonImageFilter, /**< reference: OMX_CONFIG_IMAGEFILTERTYPE */
    OMX_IndexConfigCommonColorEnhancement, /**< reference: OMX_CONFIG_COLORENHANCEMENTTYPE */
    OMX_IndexConfigCommonColorKey, /**< reference: OMX_CONFIG_COLORKEYTYPE */
    OMX_IndexConfigCommonColorBlend, /**< reference: OMX_CONFIG_COLORBLENDTYPE */
    OMX_IndexConfigCommonFrameStabilisation, /**< reference: OMX_CONFIG_FRAMESTABTYPE */
    OMX_IndexConfigCommonRotate, /**< reference: OMX_CONFIG_ROTATIONTYPE */
    OMX_IndexConfigCommonMirror, /**< reference: OMX_CONFIG_MIRRORTYPE */
    OMX_IndexConfigCommonOutputPosition, /**< reference: OMX_CONFIG_POINTTYPE */
    OMX_IndexConfigCommonInputCrop, /**< reference: OMX_CONFIG_RECTTYPE */
    OMX_IndexConfigCommonOutputCrop, /**< reference: OMX_CONFIG_RECTTYPE */
    OMX_IndexConfigCommonDigitalZoom,  /**< reference: OMX_CONFIG_SCALEFACTORTYPE */
    OMX_IndexConfigCommonOpticalZoom, /**< reference: OMX_CONFIG_SCALEFACTORTYPE*/
    OMX_IndexConfigCommonWhiteBalance, /**< reference: OMX_CONFIG_WHITEBALCONTROLTYPE */
    OMX_IndexConfigCommonExposure, /**< reference: OMX_CONFIG_EXPOSURECONTROLTYPE */
    OMX_IndexConfigCommonContrast, /**< reference to OMX_CONFIG_CONTRASTTYPE */
    OMX_IndexConfigCommonBrightness, /**< reference to OMX_CONFIG_BRIGHTNESSTYPE */
    OMX_IndexConfigCommonBacklight, /**< reference to OMX_CONFIG_BACKLIGHTTYPE */
    OMX_IndexConfigCommonGamma, /**< reference to OMX_CONFIG_GAMMATYPE */
    OMX_IndexConfigCommonSaturation, /**< reference to OMX_CONFIG_SATURATIONTYPE */
    OMX_IndexConfigCommonLightness, /**< reference to OMX_CONFIG_LIGHTNESSTYPE */
    OMX_IndexConfigCommonExclusionRect, /** reference: OMX_CONFIG_RECTTYPE */
    OMX_IndexConfigCommonDithering, /**< reference: OMX_TIME_CONFIG_DITHERTYPE */
    OMX_IndexConfigCommonPlaneBlend, /** reference: OMX_CONFIG_PLANEBLENDTYPE */
    OMX_IndexConfigCommonExposureValue,  /**< reference: OMX_CONFIG_EXPOSUREVALUETYPE */
    OMX_IndexConfigCommonOutputSize, /**< reference: OMX_FRAMESIZETYPE */
    OMX_IndexParamCommonExtraQuantData, /**< reference: OMX_OTHER_EXTRADATATYPE */
    OMX_IndexConfigCommonFocusRegion,      /**< refer to OMX_PARAM_FOCUSREGIONTYPE */
    OMX_IndexConfigCommonFocusStatus,      /**< refer to OMX_IMAGE_CONFIG_FOCUSSTATUSTYPE */

    /* Reserved Configuration range */
    OMX_IndexOtherStartUnused = 0x08000000,
    OMX_IndexParamOtherPortFormat, /**< reference: OMX_OTHER_PARAM_PORTFORMATTYPE */
    OMX_IndexConfigOtherPower, /**< reference: OMX_OTHER_CONFIG_POWERTYPE */
    OMX_IndexConfigOtherStats, /**< reference: OMX_OTHER_CONFIG_STATSTYPE */


    /* Reserved Time range */
    OMX_IndexTimeStartUnused = 0x09000000,
    OMX_IndexConfigTimeScale, /**< reference: OMX_TIME_CONFIG_SCALETYPE */
    OMX_IndexConfigTimeClockState,  /**< reference: OMX_TIME_CONFIG_CLOCKSTATETYPE */
    OMX_IndexConfigTimeActiveRefClock, /**< reference: OMX_TIME_CONFIG_ACTIVEREFCLOCKTYPE */
    OMX_IndexConfigTimeCurrentMediaTime, /**< reference: OMX_TIME_CONFIG_TIMESTAMPTYPE (read only)*/
    OMX_IndexConfigTimeCurrentWallTime, /**< reference: OMX_TIME_CONFIG_TIMESTAMPTYPE (read only)*/
    OMX_IndexConfigTimeCurrentAudioReference, /**< reference: OMX_TIME_CONFIG_TIMESTAMPTYPE (write only) */
    OMX_IndexConfigTimeCurrentVideoReference, /**< reference: OMX_TIME_CONFIG_TIMESTAMPTYPE (write only) */
    OMX_IndexConfigTimeMediaTimeRequest, /**< reference: OMX_TIME_CONFIG_MEDIATIMEREQUESTTYPE (write only) */
    OMX_IndexConfigTimeClientStartTime,  /**<reference:  OMX_TIME_CONFIG_TIMESTAMPTYPE (write only) */
    OMX_IndexConfigTimePosition,  /**< reference: OMX_TIME_CONFIG_TIMESTAMPTYPE */
    OMX_IndexConfigTimeSeekMode,  /**< reference: OMX_TIME_CONFIG_SEEKMODETYPE */


    /* Vendor specific area */
    OMX_IndexVendorStartUnused = 0x7F000000,
    /* Vendor specific structures should be in the range of 0x7F000000 
       to 0x7FFFFFFE.  This range is not broken out by vendor, so
       private indexes are not guaranteed unique and therefore should
       only be sent to the appropriate component. */

    // KH add for audio post-processing
    OMX_IndexParamBesLoudness,  // reference: BesLoudnessParam
    OMX_IndexParamBesEQ,        // reference: BesEQParam
    OMX_IndexParamBesLive,      // reference: BesLiveParam
    OMX_IndexParamBesSurround,  // reference: BesSurroundParam
    OMX_IndexParamBesTS,        // reference: BesTSParam
    OMX_IndexParamBesCF,        // reference: BesCFParam
    
    // KH add for MED adaptation
    OMX_IndexParamMedFileHandle,
    
    // KH add for AMR encoder
    OMX_IndexParamMediaTekAmrEnc,
    
    // KH add for PCM source
    OMX_IndexParamMediaTekPcmSrc,
    
    // KH add for seek operation
    OMX_IndexParamMedSetTime,
    
    // KH add for DSP operation
    OMX_IndexParamMedSetHandle,
    
    // KH add for PCM sink
    OMX_IndexParamMediaTekPcmSink,
    
    // KH add for PCM Route
    OMX_IndexParamMediaTekPcmRutSrc,
    
    // KH add for PCM sink temp solution
    OMX_IndexParamMediaTekPcmSinkSkip,
    
    // KH add for PCM sink voice path
    OMX_IndexParamMediaTekPcmSinkVoice,

    // KH add: to query audio ID
    OMX_IndexParamMediaTekQueryAudioId,
    
    // KH add: to query audio ID
    OMX_IndexParamMediaTekSetDevice,

    // WN add for WAV decoder, WAV Parser
    OMX_IndexParamMediaTekWavDecSWIPHdl,
 
    // WN add for DRA streaming
    OMX_IndexParamMediaAudioDRA,

    // WN add for PCM streaming
    OMX_IndexParamMediaAudioPCMStreaming,

    // PLR add for DTMF output parameters
    OMX_IndexParamMediaTekDtmfOutputParams,

    // PLR add for DTMF key parameters
    OMX_IndexParamMediaTekDtmfKeyParams,

    // PLR add for DTMF gain parameters
    OMX_IndexParamMediaTekDtmfGainParams,

    OMX_IndexParamMediaTekAudioMixerPortDef,

    // Lanus add for APE decoder, APE Parser
    OMX_IndexParamMediaTekApeDecSWIPHdl,
    
     // Lanus add for Seek
    OMX_IndexParamMediaTekApeSeekParam,
    
    // WN add for AAC DUAL-SCE Set Channel
    OMX_IndexParamMediaTekAACSelectChannel,
    
    // KH add for Sink End Time
    OMX_IndexParamMediaTekSetSinkEndTime,
    
    // KH add for DAF streaming
    OMX_IndexParamMediaTekSetDafStrmInfo,

    OMX_IndexParamMediaTekAPMParam,

    // WN add for PCM info
    OMX_IndexParamMediaTekGetPCMInfo,

    // WN add for PCM info
    OMX_IndexParamMediaTekSetPCMInfo,

    // WN add for TS get In Sample
    OMX_IndexParamMediaTekGetTSProcessInfo,

    // WN add for render skip apm 
    OMX_IndexParamMediaTekRenderSkipAPM,

    // WN add for Add Silence 
    OMX_IndexParamMediaTekAddTileSilence,

    OMX_IndexParamMediaTekAudioVm,     /**< reference: OMX_AUDIO_PARAM_VMTYPE */
    
    // Lanus add for render force stop
    OMX_IndexParamMediaTekRenderAbortStop,

    // Lanus add for render delay stop
    OMX_IndexParamMediaTekRenderDelayStop,
    
    // KH add for TS to init internal variable
    OMX_IndexParamMediaTekResetTSVariable,
    
    // KH: PCM source negotiation
    OMX_IndexParamMediaTekPcmSourceNegotiation,
    OMX_IndexParamMediaTekPcmSourceNotifyInfo,
    OMX_IndexParamMediaTekQuerySetPcmSourceInfo,
    
    // KH: encode related
    OMX_IndexParamMediaTekQueryEncodeSupportFormat,
    OMX_IndexParamMediaTekSetEncodeFormat,
    OMX_IndexParamMediaTekSetAmrMode,
    OMX_IndexParamMediaTekSetWavFormat,
    OMX_IndexParamMediaTekGetWavHeader,
    OMX_IndexParamMediaTekSetVmMode,

    // WN add for pcmmixer get time
    OMX_IndexParamMediaTekGetCurrentTime,

    // WN add for pcmmixer get time
    OMX_IndexParamMediaTekSetGain,
    
    OMX_IndexMax = 0x7FFFFFFF

} OMX_INDEXTYPE;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
/* File EOF */
