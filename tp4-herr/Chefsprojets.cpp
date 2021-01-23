#include "Chefsprojets.h"


Chefsprojets::Chefsprojets() : TauxProjetsReussis(0),Employes()
{
}

Chefsprojets::Chefsprojets(string n, string p, int a, double s, double t): TauxProjetsReussis(t), Employes(n, p, a, s)
{
}

Chefsprojets::Chefsprojets(const Chefsprojets& c):TauxProjetsReussis(c.TauxProjetsReussis), Employes()
{
}

double Chefsprojets::GetTauxProjetsReussis() const
{
	return this->TauxProjetsReussis;
}


ostream& operator<<(ostream& o, const Chefsprojets& c)
{
	o << "nom est :" << c.Nom << " ,prenom:  " << c.Prenom << " ,ages:  " << c.Age << " ,salaire: " << c.Salaire << " ,TauxProjetsReussis " << c.TauxProjetsReussis << endl;
	return o;
}
