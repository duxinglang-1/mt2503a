# Define source file lists to SRC_LIST
#Frank_shao add lsm6ds3.mak

# frank_shao
INC_DIR  += custom\drv\Motion_sensor\LSM6DS3_I2C
SRC_LIST += custom\drv\Motion_sensor\LSM6DS3_I2C\lsm6ds3.c
SRC_LIST += custom\drv\Motion_sensor\LSM6DS3_I2C\lsm6ds3_i2c_operation.c
SRC_LIST += custom\drv\Motion_sensor\LSM6DS3_I2C\algorithm.c
SRC_LIST += custom\drv\Motion_sensor\LSM6DS3_I2C\algorithm_config.c