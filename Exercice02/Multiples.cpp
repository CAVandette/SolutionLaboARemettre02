// But : Écrire un programme qui permet de lire un entier A et d'afficher une réponse
// selon sa valeur
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-08

#include<iostream>

void main()
{
   setlocale(LC_ALL, "");

   int nombre;

   std::cout << "Veuillez entrer un nombre entier : ";
   std::cin >> nombre;

   if (nombre % 2 == 0 && nombre % 3 == 0)
   {
      std::cout << nombre << " est a la fois un multiple de 2 et de 3" << std::endl;
   }
   else if (nombre % 2 == 0)
   {
      std::cout << nombre << " est seulement un multiple de 2 " << std::endl;
   }
   else if (nombre % 3 == 0)
   {
      std::cout << nombre << " est seulement un multiple de 3" << std::endl;
   }
   else
   {
      std::cout << nombre << " n'est ni un multiple de 2, ni de 3" << std::endl;
   }

   system("pause");
}