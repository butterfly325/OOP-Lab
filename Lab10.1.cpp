/*

virtual function vs Pure Virtual Function --

1. A virtual function is a member function in a base class that can be redefined in a derived class.
   A pure virtual function is a member function in a base class whose declaration is provided in a base class and implemented in a derived class.

2. Virtual function has a body but pure virtual function has not.

3. Abstract classes have pure virtual function but don't have any virtual function.

*/

#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    Polygon (int a, int b) : width(a), height(b)
    {
    }

    virtual string info()
    {
        return string("I am a Polygon");
    }

    void getInfo()
    {
        cout << this->info() << endl;
    }

    virtual int area (void) = 0;

    void printarea()
    {
        cout << this->area() << '\n';
    }
};

class Rectangle: public Polygon
{
public:
    Rectangle(int a,int b) : Polygon(a,b)
    {
    }

    string info()
    {
        return string("I am a Rectangle");
    }

    int area()
    {
        return width*height;
    }
};

class Triangle: public Polygon
{
public:
    Triangle(int a,int b) : Polygon(a,b)
    {
    }

    string info()
    {
        return string("I am a Triangle");
    }

    int area()
    {
        return width*height/2;
    }
};

int main ()
{
    Polygon * ppoly1 = new Rectangle (4,5);
    Polygon * ppoly2 = new Triangle (4,5);

    ppoly1->printarea();
    ppoly2->printarea();

    ppoly1->getInfo();
    ppoly2->getInfo();

    delete ppoly1;
    delete ppoly2;

    return 0;
}
