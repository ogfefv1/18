//
//  Truck.hpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

//#pragma once
//#include "Vehicle.hpp"
//
//class Truck : public Vehicle {
//private:
//    double load;
//    double max_load;
//
//public:
//    Truck(double load, double max_load, double petrol, double max_petrol);
//
//    double getCurrentLoad() const;
//    double getMaxLoad() const;
//
//    void arrive() override;
//    bool leave() override;
//};


#pragma once
#include "Vehicle.hpp"

class Truck : public Vehicle {
private:
    double load;
    double max_load;

public:
    Truck(double load, double max_load, double petrol, double max_petrol);

    double getCurrentLoad() const;
    double getMaxLoad() const;

    void arrive() override;
    bool leave() override;
};
