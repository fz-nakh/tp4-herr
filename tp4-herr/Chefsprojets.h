#pragma once
#include <string>
#include<iostream>
#include "Employes.h"
using namespace std;
class Chefsprojets:public Employes
{
 public: 
	Chefsprojets(); 
	Chefsprojets(string, string, int, double, double);
	Chefsprojets(const Chefsprojets & c);
	double GetTauxProjetsReussis() const;
	friend ostream& operator<<(ostream& o,const Chefsprojets&c) ;
private: 
	   double TauxProjetsReussis;
	   

};

