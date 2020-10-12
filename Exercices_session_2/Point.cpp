#include<stdio.h>
#include<iostream>
#include<string>
#include"Point.h"


int Point::comptP = 0;

//73
Point::Point(float val_x, float val_y)
//BUT Créer un point
//ENTREE Une valeur X et Y
//SORTIE Un point et un compteur mis à jour
{
	this->X = val_x;
	this->Y = val_y;

	comptP++;
}

Point::~Point()
//BUT Supprimer un point
//ENTREE Unpoint existant
//SORTIE Un compteur réduit de 1
{
	comptP--;
}

void Point::affichagePt()
//BUT Afficher le nombre de points nregistrer
//ENTREE Un compteur
//SORTIE L'affichage du compteur
{
	std::cout << "Le nombre de d'objet de type 'point' est de" << comptP << std::endl;
}

//Assesseurs
float Point::getX()
{
	return this->X;
}

float Point::getY()
{
	return this->Y;
}

//Mutateurs
void Point::setX(float X)
{
	this->X = X;
}

void Point::setY(float Y)
{
	this->Y = Y;
}