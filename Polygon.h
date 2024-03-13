#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    virtual int getArea(); // pure virtual function
    virtual void draw() = 0; // pure virtual function

protected:
    int width = 0;
    int height = 0;

};

#endif // POLYGON_H

