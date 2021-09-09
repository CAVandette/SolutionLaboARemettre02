// But : Écrire un programme qui permet de lire un entier A et d'afficher une réponse
// selon sa valeur
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-08

#include<iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int nombre;

   std::cout << "Veuillez entrer un nombre entier : ";
   std::cin >> nombre;
   // L'utilisateur entre un nombre entier

   if (nombre % 2 == 0 && nombre % 3 == 0) // Premier test : si le nombre est un multiple de 2 et 3, l'afficher
   {
      std::cout << nombre << " est a la fois un multiple de 2 et de 3" << std::endl;
   }
   else if (nombre % 2 == 0) // Sinon, tester s'il est multiple de 2
   {
      std::cout << nombre << " est seulement un multiple de 2" << std::endl;
   }
   else if (nombre % 3 == 0) // Sinon, tester s'il est multiple de 3
   {
      std::cout << nombre << " est seulement un multiple de 3" << std::endl;
   }
   else // Sinon : ce nombre n'est pas multiple de 2 ou de 3
   {
      std::cout << nombre << " n'est ni un multiple de 2, ni de 3" << std::endl;
   }

   /*
            Plan de test
   Essai       Donnée       Résultat
   no1         12           12 est a la fois un multiple de 2 et de 3
   no2         24           24 est a la fois un multiple de 2 et de 3
   no3         8            8 est seulement un multiple de 2
   no4         202          202 est seulement un multiple de 2
   no5         -9           -9 est seulement un multiple de 3
   no6         0            0 est a la fois un multiple de 2 et de 3
   no7         25           25 n'est ni un multiple de 2, ni de 3
   no8         13           13 n'est ni un multiple de 2, ni de 3
   */

   system("pause");
}