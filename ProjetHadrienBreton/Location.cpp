//But: Calculer le montant qu’un individu devra débourser pour faire un voyage dans une automobile louée
//Auteur: Hadrien Breton
//Date: 2020-09-16

#include <iostream>																												
using namespace std;																											

int main()
{
	int jrs;																													//Réservation des variables. Nombre de jours de la location.
	int kms;																													//Nombre de kilomètres parcourus durant la location.
	int cjrs;																													//Coût pour le nombre de jours.
	int ce;																														//Coût pour l'essence.
	int ckms;																													//Coût pour la distance parcourue.
	int kmsp;																													//Nombres de kilomètres parcourus payants (qui ne faont pas parti des 250 gratuits par jours).
	int ct;																														//Coût total.

	setlocale(LC_ALL, "");																										//Pour afficher les accents correctement dans la console.

	std::cout << "Veuillez entrer le nombre de jours de la location: \n";														//Affiche le message entre guillemets à l'écran.
	std::cin >> jrs;																											//Enregistre la valeur entrée par l'utilisateur dans la variable jrs.

	if (jrs <= 0)																												//Si le nombre de jours entré par l'utilisateur est égal ou inférieur à 0
	{																															//le programme affiche un message d'erreur et s'arrête.
		std::cout << "Vous n'avez pas entré une valeur valide.";																
	}
	else																														//Si le nombre de jours est supérieur à 0, le programme continue.
	{
		std::cout << "Veuillez entrer la distance parcourue (en kilomètres) durant la location: \n";							//Affiche un message demandant d'entrer la distance parcourue.
		std::cin >> kms;																										//Enregistre la valeur entrée par l'utilisateur dans la variable kms.
		if (kms <= 0)																											//Si le nombre de Kilomètres entré par l'utilisateur est égal ou inférieur à 0
			std::cout << "Vous n'avez pas entré un valeur valide.";																//le programme affiche un message d'erreur et s'arrête.
		else
		{
			cjrs = (jrs * 45);																									//Calcul du cout pour le nombre de jour.

			ce = ((kms * 0.076) * 1.25);																						//Calcul du coût pour l'essence.

			kmsp = (kms - (jrs * 250));																							//Calcul du nombre de kilomètres payants (qui ne font pas parti de 250kms gratuits par jours).
			if (kmsp > 0)																										//Calcul coût pour nombre kilomètres parcourus. Seulement si kilomètres payants supérieurs à 0.
				ckms = (kmsp * 0.05);
			else
				ckms = 0;

			ct = (cjrs + ce + ckms);																							//Calcul du coût total.

			std::cout << "Le coût total est de " << ct << " $.";																//Affiche le coût total à l'utilisateur
		}

	}
	return 0;
}