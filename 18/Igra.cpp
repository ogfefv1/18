//
//  Igra.cpp
//  18
//
//  Created by Егор Джемлиханов on 02.11.2024.
//

#include "Igra.hpp"
using namespace std;

void Igra::drawBase() {
    system("cls");

//    cout << "+------------------------+\n";
    cout << "        БАЗА            \n";
//    cout << "+------------------------+\n";
    cout << "| Люди:   " << Base::people_on_base << "\n";
    cout << "| Транспортные средства: " << Base::vehicles_on_base << "\n";
    cout << "| Бензин:   " << Base::petrol_on_base << " л\n";
    cout << "| Товары:    " << Base::goods_on_base << " тонны\n";
//    cout << "+------------------------+\n";
}

void Igra::showMenu() {
    while (true) {
        drawBase();
        cout << "\nMENU \n";
        cout << "1. прибытие автобуса\n";
        cout << "2. прибытие грузовика\n";
        cout << "3. автобусный выезд\n";
        cout << "4. грузовик оставить\n";
        cout << "5. выход\n";
        cout << "================\n";
        cout << "выберите вариант: ";
        string choice;
        cin >> choice;
        if (choice == "1") {
            busArrive();
        }
        else if (choice == "2") {
            truckArrive();
        }
        else if (choice == "3") {
            busLeave();
        }
        else if (choice == "4") {
            truckLeave();
        }
        else if (choice == "5") {
            cout << "выход из игры...\n";
            return;
        }
        else {
            cout << "неверный выбор! Введите правильный вариант (1-5)\n";
            waitForEnter();
        }
    }
}

void Igra::busArrive() {
    cout << "прибытие автобуса...\n";
    bus.arrive();
    waitForEnter();
}

void Igra::truckArrive() {
    cout << "прибывает грузовик...\n";
    truck.arrive();
    waitForEnter();
}

void Igra::busLeave() {
    cout << "автобус отправляется...\n";
    if (!bus.leave()) {
        cout << "автобус не уехал.\n";
    }
    waitForEnter();
}

void Igra::truckLeave() {
    cout << "грузовик уезжает...\n";
    if (!truck.leave()) {
        cout << "грузовик не смог выехать.\n";
    }
    waitForEnter();
}

void Igra::waitForEnter() {
    cout << "\nнажмите Enter, чтобы продолжить...";
    cin.ignore();
    cin.get();
}

