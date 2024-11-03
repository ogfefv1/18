//
//  Bus.cpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

//#include "Bus.hpp"
//
//using namespace std;
//
//Bus::Bus(int people, int max_people, double petrol, double max_petrol)
//    : Vehicle(petrol, max_petrol), people(people), max_people(max_people) {}
//
//int Bus::getPeopleCount() const {
//    return people;
//}
//
//int Bus::getMaxPeople() const {
//    return max_people;
//}
//
//void Bus::arrive() {
//    Base::people_on_base += (people + 1); // +1 �� ��������
//    Base::vehicles_on_base++;
//    cout << "Bus arrived. People on base: " << Base::people_on_base << "\n";
//}
//
//bool Bus::leave() {
//    if (Base::people_on_base < 1 || Base::petrol_on_base < (tank_volume - petrol_amount)) {
//        cout << "Not enough resources to leave\n";
//        return false;
//    }
//    refuel();
//    int people_to_take = min(Base::people_on_base - 1, max_people); // ��������� ��������
//    Base::people_on_base -= people_to_take + 1;
//    Base::vehicles_on_base--;
//    cout << "Bus left with " << people_to_take << " passengers\n";
//    return true;
//}


#include "Bus.hpp"

using namespace std;

Bus::Bus(int people, int max_people, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol), people(people), max_people(max_people) {}

int Bus::getPeopleCount() const
{
    return people;
}

int Bus::getMaxPeople() const
{
    return max_people;
}

void Bus::arrive()
{
    Base::people_on_base += (people + 1); // +1 Á‡ ‚Ó‰ËÚÂÎˇ
    Base::vehicles_on_base++;
    cout << "автобус прибыл, люди на базе.: " << Base::people_on_base << "\n";
}

bool Bus::leave()
{
    if (Base::people_on_base < 1 || Base::petrol_on_base < (tank_volume - petrol_amount))
    {
        cout << "недостаточно ресурсов, чтобы уйти\n";
        return false;
    }
    refuel();
    int people_to_take = min(Base::people_on_base - 1, max_people); // ÓÒÚ‡‚ÎˇÂÏ ‚Ó‰ËÚÂÎˇ
    Base::people_on_base -= people_to_take + 1;
    Base::vehicles_on_base--;
    cout << "автобус уехал с " << people_to_take << " пассажиры\n";
    return true;
}
