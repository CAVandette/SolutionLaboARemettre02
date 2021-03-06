// But : Ce programme devra calculer le montant totale que quelqu'un devra d?bours? en louant une voiture pour un voyage.
// Auteur : Charles-Auguste Vandette
// Date : 2020-09-16

/*
spec. Doit prendre en compte le kilom?trage et la dur? du voyage (pr?alablement entr? par l'utilisateur)
sources: Co?t de la location: 45$/j (250km gratuit/j), consomation v?hicule: 7.6L/100km (1.25$/1L), km suppl: 0.05$/km suppl.
2020-09-16 CAV Version 0.1 (version finale)
temps de cr?ation max : 3h
temps utilis? : 1h20
*/

#include<iostream> // boite ? outils de communications.

int main() // block d'instruction ou l'on code notre programe principale
{

	setlocale(LC_ALL, ""); // permet la bonne compr?hention des caract?res sp?ciaux

	float kilometre; // est la variable du nombre de km
	int jours; // est la variable du nombre de jours
	float coutKm; // est la variable du co?t pour les kilom?tre
	int coutJ; // est la variable du cout pour les jours
	float litres; // est la variable du nombre de litres
	float coutL; // est la variable du cout des litres
	float coutTotal; // est la variable du cout total

	

	std::cout << "Veuillez entrer le nombre de jours total du voyage : "; // ici, on demande a l'utilisateur d'entrer le nombre de jours total du voyage

	std::cin >> jours; // ici l'utilisateur introduit a la variable le nombre de jours

	if (jours >= 1) // ici on dit que : si jours est 1 et plus, la machine calculera sinon, elle indiquera que le nombre minimale de jours est de 1.
	{
		coutJ = jours * 45; // ce calcule indique que la variable cout-jours est = au nombres de jours multipli? par le cout pour la location de un jour.
	std::cout << "Vous avez voyag? " << jours << " jours. Pour " << jours <<" jours, le cout est de " << coutJ << "$" << std::endl; // confirme a l'utilisateur le nombre de jours qu'il
	// as entrer
	}
	else // indique que le nombre de jours minimal est de 1 si l'utilisateur a entrer 0
	{
		std::cout << "Le nombre de jours minimal est de 1." << std::endl;
	}
	
std::cout << "Veuillez entrer le nombre de kilom?tre parcouru : "; // indique a l'utilisateur d'entrer un nombre de kilom?tres

	std::cin >> kilometre;

	if (kilometre >= 1) // ici, on dit que si le nb de km est supp?rieur a 1, il process sinon, il indique que le nombre de km minimal est 1
	{
		std::cout << "Vous avez parcouru " << kilometre << " kilom?tres." << std::endl;

		if (kilometre > 250) //si km est bien plus de 1, il viendra ici pour dire: si le nb de kilom?tres d?passe 250, il faut calculer des r?ductions.
		{
			if (250 * jours > kilometre) // dit que si le nombre de km gratuits est plus grand que le nb de km total, afficher que le cout des km total est de 0 
			{
				coutKm = 0; // est l'affichage dans le cas ou les 250 km gratuit par jours (au total) est plus grand que le kilom?trage total
				std::cout << "Le cout pour les km d?pass? (250/jours sont gratuits), est de " << coutKm << "$" << std::endl; //affiche la r?ponse
				litres = ((kilometre / 100) * 7.6); // ici, on calcule le nombre de litres (7.6L/100km) donc, on divise le nombre de km par 100 et on multiplie par 7.6
				std::cout << "Pour " << kilometre << " kilom?tres, le v?hicule utilisera " << litres << " litres d'essence." << std::endl;
				coutL = litres * 1.25; // ici on calcule le cout des litres car apr?s tout, c'est ce que l'on recherche.
				std::cout << "Pour " << litres << " litres total, le co?t est de " << coutL << "$" << std::endl;
				coutTotal = coutKm + coutJ + coutL; // ici on calcul le cout total de tout nos calculs pr?c?dents.
				std::cout << "Le co?t total pour le voyage sera de : " << coutTotal << "$" << std::endl;
			}
			else
			{
			coutKm = (kilometre - (250 * jours)) * 0.05; // ce calcul dit que le cout des km est = (au nombre de km moin le nombre de jours fois le rabais (250 km/jours)) fois 0.05$
			std::cout << "Le cout pour les km d?pass? (250/jours sont gratuits), est de " << coutKm << "$" << std::endl; //affiche la r?ponse
			litres = ((kilometre / 100) * 7.6);
			std::cout << "Pour " << kilometre << " kilom?tres, le v?hicule utilisera " << litres << " litres d'essence." << std::endl;
			coutL = litres * 1.25;
			std::cout << "Pour " << litres << " litres total, le co?t est de " << coutL << "$" << std::endl;
			coutTotal = coutKm + coutJ + coutL;
			std::cout << "Le co?t total pour le voyage sera de : " << coutTotal << "$" << std::endl;
			}
			
		}
		else // dans le cas ou la voiture n'a m?me pas parcouru 250km, il n'y a donc pas de frais de km suppl?mentaires.

			/*
			ici, il ?tais difficile de comprendre le sh?ma, car ma premi?re pens? ?tait : "mais que faire si le premier jour, il roule 250km (donc gratuit) et le second jour,
			 il roule 1000..." mais le sh?ma ne fonctionne pas ainsi. pour calculer les gratuit?s, c'est comme si le concessionaire qui fournis la voiture, ne compte pas par 
			jours mais par totalit?. En r?sum?, si le conducteur a utilis? 10000km, sur 20 jours, c'est uniquement le nombre de jours fois rabais de 250 km (20 * 250)
			donnera la r?duction de km sur le kilom?trage total du voyage et non selon le nombre de jours.
			*/
		{
			std::cout << "Comme vous n'avez parcouru que 250 km ou moin, aucun frais de d?passement seront ajout?." << std::endl;
			litres = ((kilometre / 100) * 7.6); // malgr? que c'est 250 ou moin (et donc gratuit), on doit quand m?me calculer le nb de litres et le co?t.
			std::cout << "Pour " << kilometre << " kilom?tres, le v?hicule utilisera " << litres << " litres d'essence" << std::endl;
			coutL = litres * 1.25;
			std::cout << "Pour " << litres << " litres total, le co?t est de " << coutL << "$" << std::endl;
			coutKm = 0;
			coutTotal = coutKm + coutJ + coutL; // ici on calcul le cout total de tout nos calculs pr?c?dents.
			std::cout << "Le co?t total pour le voyage sera de : " << coutTotal << "$" << std::endl;
		}
	}
	else
	{
		std::cout << "Le nombre de kilom?tres minimal est de 1." << std::endl;
	}



	/*
				Plan de tests

	utilisateur:			entre le nombre de jours de location			r?sultat attendu			entre le nombre de kilom?tres			r?sultat attendu

	1						0												le nombre de jours est		0										le nombre de km est
	                                                                        minimum 1															minimum de 1

	2						20												900$						10000 km 250$ 							760L(950$) total : 2100$

	3						10												450$						2600 km 5$								197.6L(247$) total : 702$

	4						10												450$						2400 km 0$(car km gratuit)				182.4L(228$) total : 678$

	5						50												2250$						140 km 0$								10,64L(13.3$) total : 2263.3$

	6						365												16425$						200000 km 5437.5$						15200L(19000$) total : 40862.5$

	7						-20												le nombre de jours est		-300									le nombre de km est
	                                                                        minimum 1															minimum de 1
	
	*/


	return 0; // indique que tout vas bien.
}