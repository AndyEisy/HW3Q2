#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;


int main()
{
    Rectangle rect1(5, 3);
    Triangle tri1(4, 6);

    cout << "Rectangle Area: " << rect1.getArea() << endl;
    rect1.draw();

    cout << endl;

    cout << "Triangle Area: " << tri1.getArea() << endl;
    tri1.draw();

    rect1.setWidth(7);
    rect1.setHeight(4);
    cout << endl;

    cout << "New Rectangle Area: " << rect1.getArea() << endl;

    tri1.setWidth(5);
    tri1.setHeight(7);
    cout << endl;

    cout << "New Triangle Area: " << tri1.getArea() << endl;

    // Polygon poly1;

    //Question 1
    // We get an error because we are tyring to create an object from an 
    // abstract class (Polygon).
    // Objects can only be created from classes that provide implementation for
    // all of their pure virtual functions.

   // Polygon poly1(5, 7);

    //Question 2
    // Tyring to create an object of the abstract class Polygon still 
    // results in a compiler error, even though the getArea() function is changed
    // to a normal function.
    // This is because the class still contains the pure virtual function draw().
    // As long as a class has at least one pure virtual function, the class itself
    // is considered abstract, and objects cannot be created from it.

}

