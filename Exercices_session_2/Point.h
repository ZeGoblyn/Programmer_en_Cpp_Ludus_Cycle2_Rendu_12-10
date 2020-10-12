#pragma once

#include<stdio.h>
#include<iostream>
#include<string>

class Point
{

private:
	float X;
	float Y;

	static int comptP;

public:
	//73
	//Constructeur
	Point(float val_x, float val_y);


	//Destructeur
	~Point();

	//Affichage
	void affichagePt();

	//Get
	float getX();
	float getY();

	//Set
	void setX(float n_val);
	void setY(float n_val);
};