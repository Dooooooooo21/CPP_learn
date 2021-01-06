//
// Created by Dooooooooo21 on 2021/1/6.
//

#include <iostream>
# include <stdlib.h>
using namespace std;

class Coordinate {
public:
    double x;
    double y;
    void printX() {
        cout << x << endl;
    }
    void printY() {
        cout << y << endl;
    }
};


int main() {
    // 栈
    Coordinate coordinate{};
    coordinate.x = 10;
    coordinate.y = 20;
    coordinate.printX();
    coordinate.printY();

    // 堆
    Coordinate *p = new Coordinate();
    if (nullptr == p) {
        return 0;
    }

    p ->x = 100;
    p ->y = 200;
    p ->printX();
    p ->printY();
    delete p;
    p = nullptr;

    return 0;
}

