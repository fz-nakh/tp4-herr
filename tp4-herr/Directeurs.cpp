#include "Directeurs.h"

Directeurs::Directeurs(): NombreEntreprisesDirigees(0), Employes()
{
}

Directeurs::Directeurs(string n, string p, int a, double s, int ne):  NombreEntreprisesDirigees(ne), Employes(n, p, a, s)
{
}

Directeurs::Directeurs(const Directeurs& d): NombreEntreprisesDirigees(d.NombreEntreprisesDirigees), Employes(d)
{
}

int Directeurs::GetNombreEntreprisesDirigees() const
{
	return this->NombreEntreprisesDirigees;
}

ostream& operator<<(ostream& o, const Directeurs& d)
{
	o << "nom: " << d.Nom << " ,prenom: " << d.Prenom << " ,ages: " << d.Age << " ,salaire: " << d.Salaire << " ,NombreEntreprisesDirigees " << d.NombreEntreprisesDirigees << endl;
	return o;
}
