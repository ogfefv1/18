//
//  Vehicle.cpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

//#include "Vehicle.hpp"
//
//using namespace std;
//
//Vehicle::Vehicle(double petrol_amount, double tank_volume)
//    : petrol_amount(petrol_amount), tank_volume(tank_volume) {}
//
//double Vehicle::getPetrolAmount() const {
//    return petrol_amount;
//}
//
//double Vehicle::getTankVolume() const {
//    return tank_volume;
//}
//
//void Vehicle::refuel() {
//    double needed_fuel = tank_volume - petrol_amount;
//    if (Base::petrol_on_base >= needed_fuel) {
//        Base::petrol_on_base -= needed_fuel;
//        petrol_amount = tank_volume;
//        cout << "Vehicle refueled.\n";
//    }
//    else {
//        cout << "Not enough petrol on base.\n";
//    }
//}

#include "Vehicle.hpp"

using namespace std;

Vehicle::Vehicle(double petrol_amount, double tank_volume)
    : petrol_amount(petrol_amount), tank_volume(tank_volume) {}

double Vehicle::getPetrolAmount() const
{
    return petrol_amount;
}

double Vehicle::getTankVolume() const
{
    return tank_volume;
}

void Vehicle::refuel()
{
    double needed_fuel = tank_volume - petrol_amount;
    if (Base::petrol_on_base >= needed_fuel)
    {
        Base::petrol_on_base -= needed_fuel;
        petrol_amount = tank_volume;
        cout << "автомобиль заправлен.\n";
    }
    else
    {
        cout << "недостаточно бензина на базе.\n";
    }
}
