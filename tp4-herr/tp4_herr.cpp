#include "Directeurs.h"
#include "Secretaires.h"
#include "Chefsprojets.h"
#include <iostream>
#include "Employes.h"
using namespace std;
int main()
{
    Chefsprojets CP("Naimar", "Jean", 40, 3250, 0.3);
    Secretaires S("Liguili", "Guy", 35, 1200, 1);
    Directeurs D("Touseul", "Sébastienne", 50, 4000, 3);
    string Chl = CP.GetNom(), Ch2 = S.GetPrenom();
    double Taux = CP.GetTauxProjetsReussis();
    cout << "************afficher les infos**************" << endl;
    cout << CP;
    cout << S;
    cout << D;
    cout << "afficher le nom de chef de projet" << endl;
    cout << CP.GetNom() << endl;
   cout << "afficher le nom de secretaire" << endl;
   cout << S.GetNom() << endl;
   cout << "afficher le nom de directeur" << endl;
   cout << D.GetNom() << endl;
   cout << "*******************fin***********************" << endl;

    return 0;
}
