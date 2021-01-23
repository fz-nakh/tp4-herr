#include "Secretaires.h"

Secretaires::Secretaires():NombreLanguesEtrangeres(0), Employes()
{
}

Secretaires::Secretaires(string n, string p, int a, double s, int nl):  NombreLanguesEtrangeres(nl), Employes(n, p, a, s)
{
}

Secretaires::Secretaires(const Secretaires& s): NombreLanguesEtrangeres(s.NombreLanguesEtrangeres), Employes(s)
{
}

int Secretaires::GetNombreLanguesEtrangeres() const
{
	return this->NombreLanguesEtrangeres;
}

ostream& operator<<(ostream& o, const Secretaires& s)
{
	o << "nom: " << s.Nom << ",prenom: " << s.Prenom << ",ages: " << s.Age << ", salaire: " << s.Salaire << " ,NombreEntreprisesDirigees " << s.NombreLanguesEtrangeres << endl;
	return o;
}
