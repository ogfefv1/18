//
//  Truck.cpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

#include "Truck.hpp"

using namespace std;

Truck::Truck(double load, double max_load, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol), load(load), max_load(max_load) {}

double Truck::getCurrentLoad() const
{
    return load;
}

double Truck::getMaxLoad() const
{
    return max_load;
}

void Truck::arrive()
{
    Base::goods_on_base += load;
    Base::vehicles_on_base++;
    Base::people_on_base++; // ‚Ó‰ËÚÂÎ¸
    cout << "грузовик прибыл, товары на базе.: " << Base::goods_on_base << " тонны\n";
}

bool Truck::leave()
{
    if (Base::people_on_base < 1 || Base::petrol_on_base < (tank_volume - petrol_amount))
    {
        cout << "недостаточно ресурсов, чтобы уйти\n";
        return false;
    }
    refuel();
    double goods_to_take = min(Base::goods_on_base, max_load);
    Base::goods_on_base -= goods_to_take;
    Base::vehicles_on_base--;
    Base::people_on_base--;
    cout << "грузовик уехал с " << goods_to_take << " тоннами товаров\n";
    return true;
}
