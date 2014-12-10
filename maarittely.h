/*
Eetu Salo

Harjoitus 23 (Palautus vko 49)
Jaa aiemmin esitetty henkil�rekisteri-ohjelma omiin "osa-projekteihin" ja
otsikkotiedostoihin. Laita p��ohjelma omaan tiedostoon (paa.cpp),
aliohjelmat omaan tiedostoon (ali.cpp) ja
m��ritelm�t omaan otsikkotiedostoon (maarittely.h).

Projekti tulee koostaa toimivaksi Visual Studio-
ymp�rist�sss�.



*/



#include <iostream>
#include <cstring>
using namespace std;

struct HLO
{
	char nimi[32];
	float matka;
	int hattu;
};
const int MAX_HLO = 10;

int Valikko(void);
void TulostaKaikkiHenkilot(HLO[], int lkm);
void LisaaHenkilo(HLO[], int *lkm);
void TulostaHenkilo(HLO henkilo[]);



