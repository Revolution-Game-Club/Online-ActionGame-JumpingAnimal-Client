#pragma once

static enum STATES{
	RSTOP = 0,
	RRUN,
	RREADYDASH,
	RDELAYDASH,
	RDASH,
	RDELAY,
	RFJUMP,
	RFRUN,
	RFREADYDASH,
	RFDELAYDASH,
	RFDASH,
	RFALLING,
	RREADYSJUMP,
	RRSRUN,
	RRSREADYDASH,
	RRSDELAYDASH,
	RRSDASH,
	RSJUMP,
	RSRUN,
	RSREADYDASH,
	RSDELAYDASH,
	RSDASH,

	LSTOP = 100,
	LRUN,
	LREADYDASH,
	LDELAYDASH,
	LDASH,
	LDELAY,
	LFJUMP,
	LFRUN,
	LFREADYDASH,
	LFDELAYDASH,
	LFDASH,
	LFALLING,
	LREADYSJUMP,
	LRSRUN,
	LRSREADYDASH,
	LRSDELAYDASH,
	LRSDASH,
	LSJUMP,
	LSRUN,
	LSREADYDASH,
	LSDELAYDASH,
	LSDASH,

	DIE,
	ORSTOP = 150,
	ORRUN,
	ORDASH,
	ORJUMP,
	ORJDASH,

	OLSTOP,
	OLRUN,
	OLDASH,
	OLJUMP,
	OLJDASH,
	ODIE,

	METEOR_GOOD,
	METEOR_BAD,

	TIME_OVER,
};

static enum KINDCHAR{
	CHICKEN = 0,
	TIGER,
	SNAKE,
	SHEEP,
	GOOD_FIRE,
	BAD_FIRE
};

static enum TEAMCOLOR{
	WHITE = 0,
	BLUE,
	RED,
	BLACK
};

#define XTERM 14
#define YTERM 7
#define COLLISIONW 25
#define COLLISIONH 43