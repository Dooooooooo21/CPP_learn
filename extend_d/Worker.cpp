//
// Created by Dooooooooo21 on 2021/1/12.
//

#include <iostream>
#include "Worker.h"

using namespace std;

Worker::Worker() {
    cout << "Worker()" << endl;
}

Worker::~Worker() {
    cout << "~Worker()" << endl;
}

void Worker::work() {
    cout << "work()" << endl;
}