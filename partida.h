#ifndef PARTIDA_H
#define PARTIDA_H

#include <string>
#include "tauler.h"

using namespace std;

class Partida
{
public:
    Partida() 
    void inicialitza(const string& nomFitxer);
    void fesMoviment(const Posicio& pos1, const Posicio& pos2);
    void escriuTauler(const string& nomFitxer);
private:
	Tauler m_tauler;

};

#endif
