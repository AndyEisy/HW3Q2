#pragma once
#include "Polygon.h"
using namespace std;

class Rectangle : public Polygon
{
public:
	Rectangle(); // default
	Rectangle(int newWidth, int newHeight); 

	int getArea() override; // overiding our pure virtual function
	void draw() override; // overriding our pure virtual function

};

