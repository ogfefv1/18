//
//  Igra.hpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

#pragma once
#include "Base.hpp"
#include "Bus.hpp"
#include "Truck.hpp"

class Igra
{
public:
    void drawBase();
    void showMenu();

private:
    Bus bus{ 10, 20, 50, 100 };
    Truck truck{ 8, 15, 30, 100 };

    void busArrive();
    void truckArrive();
    void busLeave();
    void truckLeave();
    void waitForEnter();
};
