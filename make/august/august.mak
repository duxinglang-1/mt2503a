# Define source file lists to SRC_LIST
#frank add august.mak

INC_DIR  +=  august
SRC_LIST += august\august_net.c
ifeq ($(strip $(AUGUST_ALL_FUNC_SUPPORT)),TRUE)
	SRC_LIST += august\august_gps.c
endif

