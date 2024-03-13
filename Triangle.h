#pragma once
#include "Polygon.h"
using namespace std;

class Triangle : public Polygon
{
public:
	Triangle(); //default
	Triangle(int newWidth, int newHeight);

	int getArea() override; // overriding our pure virtual function
	void draw() override; // overriding our pure virtual function
};

