#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle() : Polygon() {} // default

Triangle::Triangle(int newWidth, int newHeight) : Polygon (
    newWidth, newHeight) {}


int Triangle::getArea(){
    return 0.5 * width * height; // area
}

void Triangle::draw() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
