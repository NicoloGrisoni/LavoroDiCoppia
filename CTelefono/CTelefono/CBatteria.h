#pragma once
#include <string>
using namespace std;

class CBatteria
{
private:
	int capacitaCarica, livelloCarica;

public:
	CBatteria();
	CBatteria(int cap, int liv);

	int getCapacita();
	int getLivello();

	void setCapacita(int c);
	void setLivello(int l);

	void consumoLivello(int livelloPerso);

	string toString();
};

