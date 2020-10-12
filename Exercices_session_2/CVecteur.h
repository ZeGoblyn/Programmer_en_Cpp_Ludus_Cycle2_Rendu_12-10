#pragma once

#include<stdio.h>
#include<iostream>

class vecteur3d
{
private:
	float x, y, z;

public:
	
	//Constructeur
	vecteur3d();

	vecteur3d(float v1, float v2, float v3);
	
	//69 b.
	//vecteur3d(float x = 5.0f, float y = 5.0f, float z = 5.0f);

	//69 c.
	//vecteur3d(float x = 0.0f, float y = 0.0f, float z = 0.0f);

	//affichage
	void affichage();

	//-------------------------------------------------------------------------------------------------------------------------------------
	//Coincide
	//70 a
	void coincideVal(vecteur3d vect2);
	//70 b
	void coincidePt(vecteur3d *vect2);
	//70 c
	void coincideRef(vecteur3d &vect2);

	//-------------------------------------------------------------------------------------------------------------------------------------
	//Normax
	//71 a
	vecteur3d* normax(vecteur3d vect2);

	//71 b
	vecteur3d* normaxAd(vecteur3d *vect2);

	//71 c
	vecteur3d* normaxRef(vecteur3d &vect2);

	//-------------------------------------------------------------------------------------------------------------------------------------
	//72
	//72-1
	//vecteur3d(float x = 0.0f, float y = 0.0f, float z = 0.0f);

	//72-2
	void affichage72();

	//72-3
	void addition(vecteur3d vecteur2);

	//72-4
	void scalaire(vecteur3d vecteur2);


	//Get
	float getX();
	float getY();
	float getZ();

	//Set
	void setX(float n_val);
	void setY(float n_val);
	void setZ(float n_val);


};