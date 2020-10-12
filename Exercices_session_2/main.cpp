#include<stdio.h>
#include<iostream>
#include<math.h>
#include"CVecteur.h"
#include "main.h"
#include"Point.h"

int main()
{
	float v1, v2, v3;
	
	//-------------------------------------------------------------------------------------------------------------------------------------
	//69
	std::cout << "Programme exercice 69" << std::endl;
	std::cout << "" << std::endl;

	vecteur3d vecteur;

	vecteur.affichage();

	std::cout << "Entrer la coordonne X du point" << std::endl;
	std::cin >> v1;
	std::cout << "Entrer la coordonne Y du point" << std::endl;
	std::cin >> v2;
	std::cout << "Entrer la coordonne Z du point" << std::endl;
	std::cin >> v3;

	vecteur3d vecteur1(v1, v2, v3);

	vecteur1.affichage();

	/*69 b.
	vecteur3d vecteur(10, 10, 10);

	vecteur.affichage();
	*/

	//-------------------------------------------------------------------------------------------------------------------------------------
	//70
	std::cout << "" << std::endl;
	std::cout << "programme exercice 70" << std::endl;
	std::cout << "" << std::endl;

	vecteur.coincideVal(vecteur1);

	vecteur.coincidePt(&vecteur1);

	vecteur.coincideRef(vecteur1);

	//-------------------------------------------------------------------------------------------------------------------------------------
	//71
	std::cout << "" << std::endl;
	std::cout << "programme exercice 71" << std::endl;
	std::cout << "" << std::endl;

	vecteur.normax(vecteur1);

	vecteur.normaxAd(&vecteur1);

	vecteur.normaxRef(vecteur1);

	vecteur3d vecteur3;

	//-------------------------------------------------------------------------------------------------------------------------------------
	//72
	std::cout << "" << std::endl;
	std::cout << "Programme exercice 72" << std::endl;
	std::cout << "" << std::endl;

	vecteur3d vecteur5;

	vecteur5.affichage72();

	std::cout << "Entrer la coordonne X du point" << std::endl;
	std::cin >> v1;
	std::cout << "Entrer la coordonne Y du point" << std::endl;
	std::cin >> v2;
	std::cout << "Entrer la coordonne Z du point" << std::endl;
	std::cin >> v3;

	vecteur3d vecteur6(v1, v2, v3);

	vecteur6.addition(vecteur6);

	vecteur6.scalaire(vecteur6);

	//-------------------------------------------------------------------------------------------------------------------------------------
	//73
	std::cout << "" << std::endl;
	std::cout << "Programme exercice 73" << std::endl;
	std::cout << "" << std::endl;

	Point pt1(2, 12);

	pt1.affichagePt();

	pt1.~Point();

	pt1.affichagePt();



	return 0;
}