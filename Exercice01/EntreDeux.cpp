// But : Le programme demande à l'utilisateur de saisir 3 entiers A,B,C.
// Le programme indique si C est compris entre A et B ou C est compris entre B et A dans une
// phrase claire indiquant les valeurs entrées par l'utilisateur 
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-08

#include<iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int nombreA;
   int nombreB;
   int nombreC;

   std::cout << "Veuillez entrer un premier nombre entier : ";
   std::cin >> nombreA;
   std::cout << "Veuillez entrer un deuxième nombre entier : ";
   std::cin >> nombreB;
   std::cout << "Veuillez entrer un troisième nombre entier : ";
   std::cin >> nombreC;
   // L'utilisateur entre 3 entiers


   // On dit ici : si le nombre C se trouve entre A et B ou B et A, afficher qu'il est compris entre les deux
   if (nombreC > nombreA && nombreC < nombreB || nombreC < nombreA && nombreC > nombreB)
   {
      std::cout << nombreC << " est compris entre " << nombreA << " et " << nombreB;
   }
   // Sinon, c'est qu'il n'est pas compris entre les deux autres entiers
   else
   {
      std::cout << nombreC << " n'est pas compris entre " << nombreA << " et " << nombreB;
   }





   /*             Version différente qui donne un résultat différent
   int nombreA;
   int nombreB;
   int nombreC;
   int max;
   int min;

   std::cout << "Veuillez entrer votre premier entier : ";
   std::cin >> nombreA;

   max = nombreA;
   min = nombreA;

   std::cout << "Veuillez entrer votre deuxième entier : ";
   std::cin >> nombreB;

   if (nombreB > max)
   {
      max = nombreB;
   }
   if (nombreB < min)
   {
      min = nombreB;
   }

   std::cout << "Veuillez entrer votre troisième entier : ";
   std::cin >> nombreC;

   if (nombreC > max)
   {
      max = nombreC;
   }
   if (nombreC < min)
   {
      min = nombreC;
   }

   if (nombreA > min && nombreA < max)
   {
      std::cout << nombreA << " est compris entre " << min << " et " << max << std::endl;
   }
   else if (nombreB > min && nombreB < max)
   {
      std::cout << nombreB << " est compris entre " << min << " et " << max << std::endl;
   }
   else if (nombreC > min && nombreC < max)
   {
      std::cout << nombreC << " est compris entre " << min << " et " << max << std::endl;
   }
   */


   /*
            Plan de test
   Essai       Donnée       Résultat
   no1         1,2,3        3 n'est pas compris entre 1 et 2
   no2         2,1,3        3 n'est pas compris entre 2 et 1
   no3         -1,3,0       0 est compris entre -1 et 3
   no4         3,-1,0       0 est compris entre 3 et -1
   no5         10,15,12     12 est compris entre 10 et 15
   no6         15,10,12     12 est compris entre 15 et 10
   */

   system("pause");
}