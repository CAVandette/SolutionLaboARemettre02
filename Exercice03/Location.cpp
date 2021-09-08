// But : Écrire un programme pour calculer le montant qu'un individu devra débourser pour faire
// un voyage dans uneautomobile louée. L'algotithme tient compte du kilométrage parcouru
// et de la durée du voyage qui sont soumises par le requérant
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-08

#include<iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int jours;
   float kilometres;
   float deductionkm;
   int sousTotalJours;
   float sousTotalDepassement;
   float sousTotalConsommation;
   float total;

   // Initialisation des variables
   int coutParJour = 45;
   int kmGratuitParJour = 250;
   float consommationVehicule = 7.6;
   float coutConsommation = 1.35;
   float coutDepassement = 0.05;

   std::cout << "Bienvenue!\n";
   std::cout << "Nos prix courants sont :\n";
   std::cout << "45$ par jour pour la location\n";
   std::cout << "0,05$ par kilomètres (250 km gratuits par jours)\n";
   std::cout << "1.35$ pour 1L d'essence (consommation : 7,6L pour 100Km)\n";

   std::cout << "\nVeuillez entrer le nombre de jours du voyage : ";
   std::cin >> jours;

   std::cout << "Veuillez entrer le nombre de kilomètre parcouru : ";
   std::cin >> kilometres;

   if (jours > 0 && kilometres > 0)
   {
      deductionkm = kmGratuitParJour * jours;
      sousTotalJours = coutParJour * jours;
      sousTotalDepassement = (kilometres - deductionkm) * coutDepassement;
      sousTotalConsommation = ((kilometres / 100) * consommationVehicule) * coutConsommation;

      if (kilometres - deductionkm < 1)
      {
         sousTotalDepassement = 0;
      }

      total = sousTotalJours + sousTotalDepassement + sousTotalConsommation;

      std::cout << "\nSous-total des jours (" << jours << "jours X " << coutParJour << "$) = " << sousTotalJours << "$" << std::endl;
      std::cout << "-----------------------------------------------------------------------------------\n";
      std::cout << "Sous-total des kilomètres supplémentaires (" << kilometres << "Km - " << deductionkm << "Km gratuits X " << coutDepassement << "$) = " << sousTotalDepassement << "$" << std::endl;
      std::cout << "-----------------------------------------------------------------------------------\n";
      std::cout << "Sous-total des frais du l'essence (" << kilometres << "Km / 100 x " << consommationVehicule << "Litres X " << coutConsommation << "$) = " << sousTotalConsommation << "$" << std::endl;
      std::cout << "-----------------------------------------------------------------------------------\n";
      std::cout << "Total (" << sousTotalJours << "$ + " << sousTotalDepassement << "$ + " << sousTotalConsommation << "$) = " << total << "$" << std::endl;
   }
   else
   {
      std::cout << "Erreur, le nombre de jours ou le nombre de kilomètres est erroné\n";
   }



   system("pause");
}