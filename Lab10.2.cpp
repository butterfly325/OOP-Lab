#include<iostream>
#include<stdio.h>

using namespace std;

class Test
{
public:
    Test()
    {
    }

private:
    Test(const Test& t)
    {
        cout<<"Copy constructor called "<<endl;
    }

    Test& operator = (const Test& t)
    {
        cout<<"Assignment operator called "<<endl;
        return *this;
    }
};

int main()
{
    Test t1, t2;
    t2 = t1;

    ///Test t3(t1);  //default copy constructor

    Test t3 = t1;

    getchar();

    return 0;
}


/// default copy constructor -- if programmer don't define a copy constructor then complier will create its own

/// default assignment operator -- if programmer don't define an assignment operator then complier will create its own
