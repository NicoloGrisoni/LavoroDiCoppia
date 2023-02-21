#pragma once
#include "CBatteria.h"

#define SECONDI 5

class CCellulare
{
private:
	int sms, chiamate, secondiChaimate;
	CBatteria batteria;

public:
	CCellulare(int s, int c, int sec, CBatteria b);

	int getSms();
	int getCall();
	int getSecondiCall();
	CBatteria getBatteria();

	void setSms();
	void setCall();
	void setSecondiCall();
	void setBatteria();

	int livelloConsumatoSms(int smsMandati);
	int livelloConsumatoCall(int callFatte, int secondiPerLeCall);

	int livelloCaricaCellulare();

	string toString();
};

