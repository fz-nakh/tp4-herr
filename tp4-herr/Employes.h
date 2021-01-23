#pragma once
#include <string>
#include<iostream>
using namespace std;
class Employes{
 public:
	 Employes();
	 Employes(string, string, int, double);
	 Employes(const Employes & E);
	 string GetNom() const;
	 string GetPrenom() const;
	 int GetAge() const;
	double GetSalaire() const;

protected:
	string Nom, Prenom; 
	int Age;
	double  Salaire;
};