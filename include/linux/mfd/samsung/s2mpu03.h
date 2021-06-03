/*
 * s2mpu03.h
 *
 * Copyright (c) 2012 Samsung Electronics Co., Ltd
 *              http://www.samsung.com
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#ifndef __LINUX_MFD_S2MPU03_H
#define __LINUX_MFD_S2MPU03_H

/* S2MPU03 registers */
enum S2MPU03_reg {
	S2MPU03_REG_ID,
	S2MPU03_REG_INT1,
	S2MPU03_REG_INT2,
	S2MPU03_REG_INT3,
	S2MPU03_REG_INT1M,
	S2MPU03_REG_INT2M,
	S2MPU03_REG_INT3M,
	S2MPU03_REG_ST1,
	S2MPU03_REG_ST2,
	S2MPU03_REG_PWRONSRC,
	S2MPU03_REG_OFFSRC,
	S2MPU03_REG_BU_CHG,
	S2MPU03_REG_RTC_BUF,
	S2MPU03_REG_CTRL1,
	S2MPU03_REG_CTRL2,
	S2MPU03_REG_ETC_TEST,
	S2MPU03_REG_OTP_ADRL,
	S2MPU03_REG_OTP_ADRH,
	S2MPU03_REG_OTP_DATA,
	S2MPU03_REG_MON1SEL,
	S2MPU03_REG_MON2SEL,
	S2MPU03_REG_CTRL3,
	S2MPU03_REG_ETC_OTP,
	S2MPU03_REG_UVLO,
	S2MPU03_REG_TIME_CTRL1,
	S2MPU03_REG_TIME_CTRL2,
	S2MPU03_REG_B1CTRL1,
	S2MPU03_REG_B1CTRL2,
	S2MPU03_REG_B2CTRL1,
	S2MPU03_REG_B2CTRL2,
	S2MPU03_REG_B3CTRL1,
	S2MPU03_REG_B3CTRL2,
	S2MPU03_REG_B4CTRL1,
	S2MPU03_REG_B4CTRL2,
	S2MPU03_REG_B5CTRL1,
	S2MPU03_REG_B5CTRL2,
	S2MPU03_REG_B6CTRL1,
	S2MPU03_REG_B6CTRL2, /* BUCK7 for CP */
	S2MPU03_REG_BUCK_RAMP = 0x29,
	S2MPU03_REG_LDO_DVS10,
	S2MPU03_REG_L1CTRL,
	S2MPU03_REG_L2CTRL,
	S2MPU03_REG_L3CTRL,
	S2MPU03_REG_L4CTRL,
	S2MPU03_REG_L5CTRL,
	S2MPU03_REG_L6CTRL,
	S2MPU03_REG_L7CTRL,
	S2MPU03_REG_L8CTRL,
	S2MPU03_REG_L9CTRL,
	S2MPU03_REG_L10CTRL, /* LDO11~21 for CP */
	S2MPU03_REG_L22CTRL = 0x43,
	S2MPU03_REG_L23CTRL,
	S2MPU03_REG_L24CTRL,
	S2MPU03_REG_L25CTRL,
	S2MPU03_REG_L26CTRL,
	S2MPU03_REG_L27CTRL,
	S2MPU03_REG_L28CTRL,
	S2MPU03_REG_L29CTRL,
	S2MPU03_REG_L30CTRL,
	S2MPU03_REG_L31CTRL,
	S2MPU03_REG_L32CTRL,
	S2MPU03_REG_L33CTRL,
	S2MPU03_REG_L34CTRL,
	S2MPU03_REG_L35CTRL,
	S2MPU03_REG_L36CTRL,
	S2MPU03_REG_L37CTRL,
	S2MPU03_REG_L38CTRL,
	S2MPU03_REG_L39CTRL,
	S2MPU03_REG_LDO_DSCH1,
	S2MPU03_REG_LDO_DSCH2,
	S2MPU03_REG_LDO_DSCH3,
	S2MPU03_REG_LDO_DSCH4,
	S2MPU03_REG_LDO_DSCH5,
	S2MPU03_REG_LDO_BB,
	S2MPU03_REG_LDO_EFUSE,
	S2MPU03_REG_TCXO_CTRL,
	S2MPU03_REG_SELMIF,
};

/* S2MPU03 regulator ids */
enum S2MPU03_regulators {
	S2MPU03_LDO1,
	S2MPU03_LDO2,
	S2MPU03_LDO3,
	S2MPU03_LDO4,
	S2MPU03_LDO5,
	S2MPU03_LDO6,
	S2MPU03_LDO7,
	S2MPU03_LDO8,
	S2MPU03_LDO9,
	S2MPU03_LDO10, /* LDO11~21 for CP */
	S2MPU03_LDO22,
	S2MPU03_LDO23,
	S2MPU03_LDO24,
	S2MPU03_LDO25,
	S2MPU03_LDO26,
	S2MPU03_LDO27,
	S2MPU03_LDO28,
	S2MPU03_LDO29,
	S2MPU03_LDO30,
	S2MPU03_LDO31,
	S2MPU03_LDO32,
	S2MPU03_LDO33,
	S2MPU03_LDO34,
	S2MPU03_LDO35,
	S2MPU03_LDO36,
	S2MPU03_LDO37,
	S2MPU03_LDO38,
	S2MPU03_LDO39,
	S2MPU03_BUCK1,
	S2MPU03_BUCK2,
	S2MPU03_BUCK3,
	S2MPU03_BUCK4,
	S2MPU03_BUCK5,
	S2MPU03_BUCK6, /* BUCK7 for CP */
	S2MPU03_REG_MAX,
};

#define S2MPU03_BUCK_MIN1	400000
#define S2MPU03_BUCK_MIN2	600000
#define S2MPU03_LDO_MIN1	800000
#define S2MPU03_LDO_MIN2	1800000
#define S2MPU03_LDO_MIN3	400000
#define S2MPU03_BUCK_STEP1	6250
#define S2MPU03_BUCK_STEP2	12500
#define S2MPU03_LDO_STEP1	12500
#define S2MPU03_LDO_STEP2	25000
#define S2MPU03_LDO_VSEL_MASK	0x3F
#define S2MPU03_BUCK_VSEL_MASK	0xFF
#define S2MPU03_ENABLE_MASK	(0x03 << S2MPU03_ENABLE_SHIFT)
#define S2MPU03_SW_ENABLE_MASK	0x03
#define S2MPU03_RAMP_DELAY	12000

#define S2MPU03_ENABLE_TIME_LDO		128
#define S2MPU03_ENABLE_TIME_BUCK1	95
#define S2MPU03_ENABLE_TIME_BUCK2	95
#define S2MPU03_ENABLE_TIME_BUCK3	95
#define S2MPU03_ENABLE_TIME_BUCK4	128
#define S2MPU03_ENABLE_TIME_BUCK5	150
#define S2MPU03_ENABLE_TIME_BUCK6	150

#define S2MPU03_ENABLE_SHIFT	0x06
#define S2MPU03_LDO_N_VOLTAGES	(S2MPU03_LDO_VSEL_MASK + 1)
#define S2MPU03_BUCK_N_VOLTAGES (S2MPU03_BUCK_VSEL_MASK + 1)

#define S2MPU03_PMIC_EN_SHIFT	6
#define S2MPU03_REGULATOR_MAX (S2MPU03_REG_MAX)

#endif /*  __LINUX_MFD_S2MPU03_H */