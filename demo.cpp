//
// Created by Dooooooooo21 on 2021/1/12.
//

#include <iostream>
# include "extend_d/Worker.h"

using namespace std;

int main() {
    Worker *worker = new Worker;
    delete worker;
    worker = nullptr;

    system("pause");

    return 0;
}
