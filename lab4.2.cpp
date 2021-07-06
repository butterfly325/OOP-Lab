#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Flight
{
private:
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;
    float fuelNeed;

    float CalFuel()
    {
        if(distance<=1000.0)
        {
            return 500.0;
        }
        else if(1000.0 <distance && distance <=2000.0)
        {
            return 1100.0;
        }
        else
        {
            return 2200.0;
        }
    }

public:
    Flight()
    {
        flightNumber=0;
        destination="";
        distance=0.0;
        maxFuelCapacity=0.0;
        fuelNeed=0.0;
    }
    ~Flight()
    {
        cout<<"\nDestroyed\n";
    }

    void FeedInfo()
    {
        cin>>flightNumber;
        cin>>destination;
        cin>>distance;
        cin>>maxFuelCapacity;

        if(CalFuel()<=maxFuelCapacity)
        {
            fuelNeed = CalFuel();
            cout<<"Fuel Capacity is fit for this flight\n";
        }
        else
        {
            fuelNeed = CalFuel();
            cout<<"Not sufficient Fuel Capacity for this flight\n";
        }
    }

    void ShowInfo()
    {
        cout<<"\n"
            <<flightNumber<<" "
            <<destination<<" "
            <<distance<<" "
            <<fuelNeed<<" "
            <<maxFuelCapacity<<"\n";
    }
};

int main()
{
    Flight myFlight;

    myFlight.FeedInfo();
    myFlight.ShowInfo();

    return 0;
}
