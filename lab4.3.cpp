#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle()
    {
        length = 1.0;
        width  = 1.0;
    }

    Rectangle(float newLength, float newWidth)
    {
        if(1.0<=newLength && newLength <20.0)
        {
            this->length = newLength;
        }
        else
        {
            cout<<"Invalid Length value\n";
        }

        if(1.0<=newWidth && newWidth <20.0)
        {
            this->width = newWidth;
        }
        else
        {
            cout<<"Invalid width value\n";
        }

    }

    ~Rectangle()
    {
        cout<<"Rectangle object is destroyed.\n";
    }

    float getLength()
    {
        return length;
    }

    float getWidth()
    {
        return width;
    }

    void setLength(float newLength)
    {
        if(1.0<=newLength && newLength <20.0)
        {
            this->length = newLength;
        }
        else
        {
            cout<<"Invalid Length value\n";
        }
    }

    void setWidth(float newWidth)
    {
        if(1.0<=newWidth && newWidth <20.0)
        {
            this->width = newWidth;
        }
        else
        {
            cout<<"Invalid width value\n";
        }
    }

    float area()
    {
        return length*width;
    }

    float perimeter()
    {
        return 2*(length+width);
    }
};

int main()
{
    Rectangle myRect; ///rec object

    cout<<"Area: "<<myRect.area()<<"\n";
    cout<<"Perimeter: "<<myRect.perimeter()<<"\n";
    cout<<"Length: "<<myRect.getLength()<<"\n";
    cout<<"Width: "<<myRect.getWidth()<<"\n\n";

    myRect.setLength(15.9);
    cout<<"Area: "<<myRect.area()<<"\n";
    cout<<"Perimeter: "<<myRect.perimeter()<<"\n";
    cout<<"Length: "<<myRect.getLength()<<"\n";
    cout<<"Width: "<<myRect.getWidth()<<"\n\n";

    myRect.setWidth(7.2);
    cout<<"Area: "<<myRect.area()<<"\n";
    cout<<"Perimeter: "<<myRect.perimeter()<<"\n";
    cout<<"Length: "<<myRect.getLength()<<"\n";
    cout<<"Width: "<<myRect.getWidth()<<"\n\n";
}
