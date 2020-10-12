#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include"CVecteur.h"

vecteur3d::vecteur3d()
//BUT Construire un vecteur
//ENTREE Aucune
//SORTIE Un vecteur initialisé à 0,0,0
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

vecteur3d::vecteur3d(float v1, float v2, float v3)
//BUT Construire un vecteur dynamiquement
//ENTREE Des valeures données par l'utilisateur
//SORTIE Un vecteur initialisé aux valeures données
{
	this->x = v1;
	this->y = v2;
	this->z = v3;
}
/*
vecteur3d::vecteur3d(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
*/

//69 c.
/*
//BUT Construire un vecteur en fonction inline
//ENTREE Des valeures données par l'utilisateur
//SORTIE Un vecteur initialisé aux valeures données
vecteur3d::vecteur3d(float x, float y, float z) : x(x), y(y), z(z)
*/

void vecteur3d::affichage()
{
	std::cout << "Les coordonnees X du point" << std::endl;
	std::cout << getX() << std::endl;
	std::cout << "Les coordonnees Y du point" << std::endl;
	std::cout << getY() << std::endl;
	std::cout << "Les coordonnees Z du point" << std::endl;
	std::cout << getZ() << std::endl;
}

//-------------------------------------------------------------------------------------------------------------------------------------
//70 a
//BUT Vérifier si les composantes de deux vecteurs coincide par transmission de valeur
//ENTREE Les valeures des vecteurs voulus
//SORTIE Confirmation ou infirmation que les vecteurs coincides
void vecteur3d::coincideVal(vecteur3d vect2)
{
	if (this-> x == vect2.getX() && this->y == vect2.getY() && this->z == vect2.getZ()) std::cout << "Vecteur et vecteur1 sont egaux" << std::endl;
	if (this->x != vect2.getX() && this->y != vect2.getY() && this->z != vect2.getZ()) std::cout << "Vecteur et vecteur1 sont inegaux" << std::endl;
}

//70 b
//BUT Vérifier si les composantes de deux vecteurs coincide par transmission d'adresse
//ENTREE Les valeures des vecteurs voulus
//SORTIE Confirmation ou infirmation que les vecteurs coincides
void vecteur3d::coincidePt(vecteur3d *vect2)
{
	if (this->x == vect2 -> getX() && this->y == vect2-> getY() && this->z == vect2-> getZ()) std::cout << "Vecteur et vecteur1 sont egaux" << std::endl;
	if (this->x != vect2-> getX() && this->y != vect2-> getY() && this->z != vect2-> getZ()) std::cout << "Vecteur et vecteur1 sont inegaux" << std::endl;
}

//70 c
//BUT Vérifier si les composantes de deux vecteurs coincide par transmission de référence
//ENTREE Les valeures des vecteurs voulus
//SORTIE Confirmation ou infirmation que les vecteurs coincides
void vecteur3d::coincideRef(vecteur3d &vect2)
{
	if (this->x == vect2.getX() && this->y == vect2.getY() && this->z == vect2.getZ()) std::cout << "Vecteur et vecteur1 sont egaux" << std::endl;
	if (this->x != vect2.getX() && this->y != vect2.getY() && this->z != vect2.getZ()) std::cout << "Vecteur et vecteur1 sont inegaux" << std::endl;
}

//-------------------------------------------------------------------------------------------------------------------------------------
//Normax
//71 a
//BUT Vérifier quel vecteur parmis deux disposent de la plus grande norme
//ENTREE Les valeures des vecteurs voulus
//SORTIE renvois la plus haute valeur
vecteur3d* vecteur3d::normax(vecteur3d vect2)
{
	float valeur;
	float valeur2;

	valeur = sqrt((this->x * x) + (this->y * y) + (this->z * z));
	valeur2 = sqrt((vect2.getX() * vect2.getX()) + (vect2.getY() * vect2.getY()) + (vect2.getZ() * vect2.getZ()));

	if (valeur < valeur2)
	{
		std::cout << "Le vecteur avec la norme la plus haute est" << (vect2.getX()) << "," << (vect2.getY()) << "," << (vect2.getZ()) << std::endl;
		return &vect2;
	}
	else
	{
		std::cout << "Le vecteur avec la norme la plus haute est" << this->x << "," << this->y << "," << this->z << std::endl;
		return this;
	}
}

//71 b
//BUT Vérifier quel vecteur parmis deux disposent de la plus grande norme
//ENTREE Les valeures des vecteurs voulus
//SORTIE Renvois l'adresse de la plus haute valeur
vecteur3d* vecteur3d::normaxAd(vecteur3d *vect2)
{
	float valeur;
	float valeur2;

	valeur = sqrt((this->x * x) + (this->y * y) + (this->z * z));
	valeur2 = sqrt((vect2 -> getX() * vect2 -> getX()) + (vect2 -> getY() * vect2 -> getY()) + (vect2-> getZ() * vect2-> getZ()));

	if (valeur < valeur2)
	{
		std::cout << "Le vecteur avec la norme la plus haute est" << (vect2 -> getX()) << "," << (vect2 -> getY()) << "," << (vect2 -> getZ()) << std::endl;
		return vect2;
	}
	else
	{
		std::cout << "Le vecteur avec la norme la plus haute est" << this->x << "," << this->y << "," << this->z << std::endl;
		return this;
	}
}

//71 c
//BUT Vérifier quel vecteur parmis deux disposent de la plus grande norme
//ENTREE Les valeures des vecteurs voulus
//SORTIE Renvois la référence de la plus haute valeur
vecteur3d* vecteur3d::normaxRef(vecteur3d &vect2)
{
	float valeur;
	float valeur2;

	valeur = sqrt((this->x * x) + (this->y * y) + (this->z * z));
	valeur2 = sqrt((vect2.getX() * vect2.getX()) + (vect2.getY() * vect2.getY()) + (vect2.getZ() * vect2.getZ()));

	if (valeur < valeur2)
	{
		std::cout << "Le vecteur avec la norme la plus haute est" << (vect2.getX()) << "," << (vect2.getY()) << "," << (vect2.getZ()) << std::endl;
		return &vect2;
	}
	else
	{
		std::cout << "Le vecteur avec la norme la plus haute est" << this->x << "," << this->y << "," << this->z << std::endl;
		return this;
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------
//72
//72-1
/*vecteur3d::vecteur3d()
//BUT Construire un vecteur
//ENTREE Aucune
//SORTIE Un vecteur initialisé à 0,0,0
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}*/
//vecteur3d::vecteur3d(float x, float y, float z) : x(x), y(y), z(z)

//72-2
//BUT Afficher les valeures du vecteur construit
//ENTREE Les valeures du vecteur construit
//SORTIE Print des valeures
void vecteur3d::affichage72()
{
	std::cout << "Les coordonnees du point sont" << "<" << getX() << "," << getY() << "," << getZ() << ">" << std::endl;
}

//72-3
//BUT Additioner deux vecteurs
//ENTREE Les valeures des vecteurs voulus
//SORTIE Addition et affichage d'un nouveau vecteur obtenus par addition
void vecteur3d::addition(vecteur3d vecteur2)
{
	float x4, y4, z4;

	x4 = this->x + vecteur2.getX();
	y4 = this->y + vecteur2.getY();
	z4 = this->z + vecteur2.getZ();

	vecteur3d vecteur4(x4, y4, z4);

	vecteur4.affichage72();
}

//72-4
//BUT Calculer le produit scalaire de deux vecteurs
//ENTREE Les valeures des vecteurs voulus
//SORTIE Addition et affichage du produit scalire des vecteurs
void vecteur3d::scalaire(vecteur3d vecteur2)
{
	float x4, y4, z4, p_scal;

	x4 = this->x * vecteur2.getX();
	y4 = this->y * vecteur2.getY();
	z4 = this->z * vecteur2.getZ();

	p_scal = x4 + y4 + z4;

	std::cout << "Le produit scalaire des deux vecteurs est de" << p_scal <<std::endl;
}

//Get
float vecteur3d::getX()
{
	return this->x;
}
float vecteur3d::getY()
{
	return this->y;
}
float vecteur3d::getZ()
{
	return this->z;
}

//Set
void vecteur3d::setX(float x)
{
	this -> x;
}
void vecteur3d::setY(float y)
{
	this -> y;
}

void vecteur3d::setZ(float z)
{
	this -> z;
}