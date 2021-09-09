// But : �crire un programme pour calculer le montant qu'un individu devra d�bourser pour faire
// un voyage dans uneautomobile lou�e. L'algotithme tient compte du kilom�trage parcouru
// et de la dur�e du voyage qui sont soumises par le requ�rant
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-08

#include<iostream>

void main()
{
   setlocale(LC_ALL, "");

   // D�claration des variables
   int jours;
   float kilometres;
   float deductionkm;
   int sousTotalJours;
   float sousTotalDepassement;
   float sousTotalConsommation;
   float total;

   // D�claration et intialisation des variables (�ventuellement des constantes)
   int coutParJour = 45;
   int kmGratuitParJour = 250;
   float consommationVehicule = 7.6;
   float coutConsommation = 1.35;
   float coutDepassement = 0.05;

   // Information sur les donn�es du programme
   std::cout << "Bienvenue!\n";
   std::cout << "Nos prix courants sont :\n";
   std::cout << "45$ par jour pour la location\n";
   std::cout << "0,05$ par kilom�tre (250 km gratuits par jour)\n";
   std::cout << "1,35$ pour 1L d'essence (consommation : 7,6L pour 100Km)\n";

   std::cout << "\nVeuillez entrer le nombre de jours du voyage : ";
   std::cin >> jours;

   std::cout << "Veuillez entrer le nombre de kilom�tres parcourus : ";
   std::cin >> kilometres;

   if (jours > 0 && kilometres > 0) // Ici, on indique que si le nombre de jours et Km sont plus grand que 0, alors on peu continuer
   {
      deductionkm = kmGratuitParJour * jours; // Calcule le nombre de Km gratuits
      sousTotalJours = coutParJour * jours; // Calcule le co�t des jours
      sousTotalDepassement = (kilometres - deductionkm) * coutDepassement; // Calcule le co�t des Km qui d�passe les 250 gratuits
      sousTotalConsommation = ((kilometres / 100) * consommationVehicule) * coutConsommation; // Calcule le co�t total de l'essence

      if (kilometres - deductionkm < 1) // Si ke nombre de Km est plus petit que le nombre de Km gratuits, le co�t est 0
      {
         sousTotalDepassement = 0;
      }

      total = sousTotalJours + sousTotalDepassement + sousTotalConsommation;

      // Affiche une facture d�taill�e
      std::cout << "\nSous-total des jours (" << jours << "jours X " << coutParJour << "$) = " << sousTotalJours << "$" << std::endl;
      std::cout << "--------------------------------------------------------------------------------------\n";
      std::cout << "Sous-total des kilom�tres suppl�mentaires (" << kilometres << "Km - " << deductionkm << "Km gratuits X " << coutDepassement << "$) = " << sousTotalDepassement << "$" << std::endl;
      std::cout << "--------------------------------------------------------------------------------------\n";
      std::cout << "Sous-total des frais d'essence (" << kilometres << "Km / 100 x " << consommationVehicule << "Litres X " << coutConsommation << "$) = " << sousTotalConsommation << "$" << std::endl;
      std::cout << "--------------------------------------------------------------------------------------\n";
      std::cout << "Total (" << sousTotalJours << "$ + " << sousTotalDepassement << "$ + " << sousTotalConsommation << "$) = " << total << "$" << std::endl;
   }
   else // Indique que le programme ne peu fonctionner car il ne peu avoir 0 jours ou 0 Km utilis�.
   {
      std::cout << "Erreur, le nombre de jours ou le nombre de kilom�tres est erron�\n";
   }


   /*
            Plan de test
   Essai       Donn�e         R�sultat
   no1         10J, 2667Km    731,98$
   no2         45J, 5000Km    2538$
   no3         0j, 10000Km    Erreur, le nombre de jours ou le nombre de kilom�tres est erron�
   */

   system("pause");
}