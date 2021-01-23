#pragma once
#include <string>
#include<iostream>
#include "Employes.h"
using namespace std;
class Directeurs:public Employes
{
	
	public:
		Directeurs();
		Directeurs(string, string, int, double, int);
		Directeurs(const Directeurs& d);
		int  GetNombreEntreprisesDirigees() const;
		friend ostream& operator<<(ostream& o, const Directeurs& d);
	private: 
		
		int NombreEntreprisesDirigees;
	};



