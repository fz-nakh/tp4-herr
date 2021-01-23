
#pragma once
#include <string>
#include<iostream>
#include "Employes.h"
	using namespace std;
	class Secretaires: public Employes
	{

	public:
		Secretaires();
		Secretaires(string, string, int, double, int);
		Secretaires(const Secretaires& s);
		int GetNombreLanguesEtrangeres() const;
		friend ostream& operator<<(ostream& o, const Secretaires& s);

	private:
		
		int NombreLanguesEtrangeres;

	};




