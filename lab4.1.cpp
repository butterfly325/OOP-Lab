#include <iostream>
using namespace std;

class Calculator
{
private:
    int value;

public:
    Calculator()
    {
        value=0;
    }

    Calculator(int value)
    {
        this->value = value;
    }

    ~Calculator()
    {
        cout<<"Calculator object is destroyed.\n";
    }

    int getValue()
    {
        return value;
    }

    void setValue(int newValue)
    {
        this->value = newValue;
    }

    void add(int newValue)
    {
        this->value += newValue;
    }

    void subtract(int newValue)
    {
        this->value -= newValue;
    }

    void multiply(int newValue)
    {
        this->value *= newValue;
    }

    void divideBy( int newValue )
    {
        if(newValue)
        {
            this->value/=newValue;
        }
        else
        {
            cout<<"Error : divide by 0 is undefined.\n";
        }
    }

    void clear()
    {
        this->value = 0;
    }

    void display()
    {
        cout<<"Calculator display: "<<value<<endl;
    }
};

int main()
{
    string operation;

    Calculator myCalcu;

    while(1)
    {
        cin>>operation;
        if(operation == "clear")
        {
            myCalcu.clear();
            myCalcu.display();
            break;
        }

        int value;
        cin>>value;
        if(operation == "add")
        {
            myCalcu.add(value);
        }
        else if(operation == "subtract")
        {
            myCalcu.subtract(value);
        }
        else if(operation == "multiply")
        {
            myCalcu.multiply(value);
        }
        else if(operation == "divideby")
        {
            myCalcu.divideBy(value);
        }
         myCalcu.display();
    }

    return 0;
}
