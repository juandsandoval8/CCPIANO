#ifndef SETTING_H
#define SETTING_H

#include <Arduino.h>

enum class SettingID //same order as menus
{
	HANDLE_NOTES,
	SCHEDULE_NOTES,
	MIN_ACCEPTED_VEL,
	PWM_PERCENT,
	MIN_STARTUP_MS,
	MAX_STARTUP_MS,
	VELOCITY_VAR,
	MIN_OFF_MS,
	MAX_OFF_MS,
	FAST_OFF_MS,
	PEDAL_ON_MS,
	PEDAL_OFF_MS,
	NOTE_TIMEOUT,
	SUSTAIN_TIMEOUT,
	AUTO_RESET_MINS,
	MAX_LEFT_KEYS,
	MAX_RIGHT_KEYS
};

void changeSetting(int changeBy);

#endif