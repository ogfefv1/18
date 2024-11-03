//
//  Base.cpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

#include "Base.hpp"

using namespace std;

int Base::people_on_base = 0;
int Base::vehicles_on_base = 0;
double Base::petrol_on_base = 0.0;
double Base::goods_on_base = 0.0;

void Base::Init(int people, int vehicles, double petrol, double goods)
{
    people_on_base = people;
    vehicles_on_base = vehicles;
    petrol_on_base = petrol;
    goods_on_base = goods;
}

void Base::PrintStatus()
{
    cout << "люди на базе: " << people_on_base << "\n";
    cout << "транспортные средства на базе: " << vehicles_on_base << "\n";
    cout << "бензин на базе: " << petrol_on_base << " литры\n";
    cout << "товары на базе: " << goods_on_base << " тонны\n";
}
