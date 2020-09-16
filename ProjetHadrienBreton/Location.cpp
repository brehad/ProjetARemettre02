//But: Calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une automobile lou�e
//Auteur: Hadrien Breton
//Date: 2020-09-16

#include <iostream>																												
using namespace std;																											

int main()
{
	int jrs;																													//R�servation des variables. Nombre de jours de la location.
	int kms;																													//Nombre de kilom�tres parcourus durant la location.
	int cjrs;																													//Co�t pour le nombre de jours.
	int ce;																														//Co�t pour l'essence.
	int ckms;																													//Co�t pour la distance parcourue.
	int kmsp;																													//Nombres de kilom�tres parcourus payants (qui ne faont pas parti des 250 gratuits par jours).
	int ct;																														//Co�t total.

	setlocale(LC_ALL, "");																										//Pour afficher les accents correctement dans la console.

	std::cout << "Veuillez entrer le nombre de jours de la location: \n";														//Affiche le message entre guillemets � l'�cran.
	std::cin >> jrs;																											//Enregistre la valeur entr�e par l'utilisateur dans la variable jrs.

	if (jrs <= 0)																												//Si le nombre de jours entr� par l'utilisateur est �gal ou inf�rieur � 0
	{																															//le programme affiche un message d'erreur et s'arr�te.
		std::cout << "Vous n'avez pas entr� une valeur valide.";																
	}
	else																														//Si le nombre de jours est sup�rieur � 0, le programme continue.
	{
		std::cout << "Veuillez entrer la distance parcourue (en kilom�tres) durant la location: \n";							//Affiche un message demandant d'entrer la distance parcourue.
		std::cin >> kms;																										//Enregistre la valeur entr�e par l'utilisateur dans la variable kms.
		if (kms <= 0)																											//Si le nombre de Kilom�tres entr� par l'utilisateur est �gal ou inf�rieur � 0
			std::cout << "Vous n'avez pas entr� un valeur valide.";																//le programme affiche un message d'erreur et s'arr�te.
		else
		{
			cjrs = (jrs * 45);																									//Calcul du cout pour le nombre de jour.

			ce = ((kms * 0.076) * 1.25);																						//Calcul du co�t pour l'essence.

			kmsp = (kms - (jrs * 250));																							//Calcul du nombre de kilom�tres payants (qui ne font pas parti de 250kms gratuits par jours).
			if (kmsp > 0)																										//Calcul co�t pour nombre kilom�tres parcourus. Seulement si kilom�tres payants sup�rieurs � 0.
				ckms = (kmsp * 0.05);
			else
				ckms = 0;

			ct = (cjrs + ce + ckms);																							//Calcul du co�t total.

			std::cout << "Le co�t total est de " << ct << " $.";																//Affiche le co�t total � l'utilisateur
		}

	}
	return 0;
}