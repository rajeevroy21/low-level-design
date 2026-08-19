#include <bits/stdc++.h>
using namespace std;

class Car {
private:
    string engineType;
    int fuelLevel;

    void checkEngine() {
        cout << "Engine is in good condition." << endl;
    }

public:
    Car() {
        engineType = "Petrol";
        fuelLevel = 100;
    }

    void startCar() {
        checkEngine(); 
        cout << "Car started." << endl;
    }

    void drive() {
        if (fuelLevel > 0) {
            cout << "Driving the car..." << endl;
            fuelLevel -= 10;
        } else {
            cout << "Not enough fuel to drive." << endl;
        }
    }

    void refuel(int amount) {
        fuelLevel += amount;
        cout << "Car refueled. Current fuel level: " << fuelLevel << endl;
    }
};

int main() {
    Car myCar;
    myCar.startCar();
    myCar.drive();
    myCar.refuel(20);
    return 0;
}
