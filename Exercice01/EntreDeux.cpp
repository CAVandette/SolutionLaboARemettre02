// But : Le programme demande à l'utilisateur de saisir 3 entiers A,B,C.
// Le programme indique si C est compris entre A et B ou C est compris entre B et A dans une
// phrase claire indiquant les valeurs entrées par l'utilisateur 
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-08

#include<iostream>

void main()
{
   setlocale(LC_ALL, "");

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


   

   system("pause");
}