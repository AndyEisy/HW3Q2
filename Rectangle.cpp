#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : Polygon() {} // default

Rectangle::Rectangle(int newWidth, int newHeight) : Polygon (
	newWidth, newHeight) {}

int Rectangle::getArea() {
	return width * height; //area
}

void Rectangle::draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

