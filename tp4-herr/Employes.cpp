#include "Employes.h"

Employes::Employes():Nom(""), Prenom(""), Age(0), Salaire(0)
{
}

Employes::Employes(string n, string p, int a, double s): Nom(n), Prenom(p), Age(a),Salaire(s)
{
}

Employes::Employes(const Employes& E):Nom(E.Nom), Prenom(E.Prenom), Age(E.Age), Salaire(E.Salaire)
{
}

string Employes::GetNom() const
{
	return this->Nom;
}

string Employes::GetPrenom() const
{
	return this->Prenom;
}

int Employes::GetAge() const
{
	return this->Age;
}

double Employes::GetSalaire() const
{
	return this->Salaire;
}
