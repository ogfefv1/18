//
//  main.cpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

#include "Igra.hpp"
#include <ctime>

using namespace std;

int main()
{
    system("цвет 3");
    srand(static_cast<unsigned int>(time(nullptr)));

    Base::people_on_base = rand() % 100;
    Base::vehicles_on_base = rand() % 50;
    Base::petrol_on_base = rand() % 1000;
    Base::goods_on_base = rand() % 200;

    Igra igra;
    igra.showMenu();

    return 0;
}
