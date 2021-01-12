//
// Created by Dooooooooo21 on 2021/1/12.
//

#include <iostream>
#include "Person.h"

using namespace std;

Person::Person() {
    cout << "Person()" << endl;
}

Person::~Person() {
    cout << "~Person()" << endl;
}

void Person::eat() {
    cout << "eat()" << endl;
}