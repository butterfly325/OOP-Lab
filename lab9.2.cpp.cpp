#include<bits/stdc++.h>

using namespace std;

class Furniture
{
private:
    /* data */
    float regularPrice;
    float discountedPrice;
    string material;

public:
    Furniture(float a, float b, string s)
    {
        this->regularPrice = a;
        this->discountedPrice = b;
        this->material = s;
    }

    Furniture()
    {
    }

    ~Furniture()
    {
    }

    void setRegularPrice(float r)
    {
        this->regularPrice = r;
    }

    float getRegularPrice()
    {
        return regularPrice;
    }

    void setDiscountedPrice(float d)
    {
        this->discountedPrice = d;
    }

    float getDiscountedPrice()
    {
        return discountedPrice;
    }

    void setMaterial(string m)
    {
        this->material = m;
    }

    string getMaterial()
    {
        return material;
    }

    void display() const
    {
        cout<< "Regular Price: "<< regularPrice<< endl;
        cout<< "Discounted Price: "<< discountedPrice<< endl;
        cout<< "Material: "<< material<< endl;
    }
};

class Bed : public Furniture
{
private:
    /* data */
    string bedSize;

public:
    Bed(string bedSize = "", float regularPrice = 0.0f, float discountedPrice = 0.0f, string material = ""):Furniture(regularPrice, discountedPrice, material )
    {
        this->bedSize = bedSize;
    }

    ~Bed()
    {
    }

    void display() const
    {
        Furniture::display();
        cout << "Bed size: "<< bedSize<< endl;
    }
};

class Sofa : public Furniture
{
private:
    /* data */
    int seatNumber;

public:
    Sofa(int seatNumber, float regularPrice = 0.0f, float discountedPrice = 0.0f, string material = ""):Furniture(regularPrice, discountedPrice, material)
    {
        this->seatNumber = seatNumber;
    }
    ~Sofa()
    {
    }

    void display() const
    {
        Furniture::display();
        cout << "Seat number: "<< seatNumber<< endl;
    }
};

class DiningTable : public Furniture
{
private:
    int chairCount;

public:
    DiningTable(int chairCount,  float regularPrice = 0.0f, float discountedPrice = 0.0f, string material = ""): Furniture(regularPrice, discountedPrice, material )
    {
        this->chairCount = chairCount;
    }

    ~DiningTable()
    {
    }

    void display() const
    {
        Furniture::display();
        cout << "Chair count: "<< chairCount<< endl;
    }
};

int main()
{
   Bed a("Single", 10000, 9877, "wood");

   a.display();

   return 0;
}

