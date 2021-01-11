//
// Created by Dooooooooo21 on 2021/1/6.
//

#include <iostream>
#include <string>
# include <stdlib.h>

using namespace std;

// 类
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

class Line {
public:
    // 对象成员指针
    Coordinate *A;
    Coordinate *B;
};

// 数据封装
class Student {
public:
    string getName() {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getGender() {
        return this->gender;
    }

    void setGender(string gender) {
        this->gender = gender;
    }

    int getScore() const {
        return this->score;
    }

private:
    string name;
    string gender;
    int score;
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

    p->x = 100;
    p->y = 200;
    p->printX();
    p->printY();
    delete p;
    p = nullptr;

    // 对象指针
    Coordinate *p2 = new Coordinate();
    (*p2).x = 11;
    (*p2).y = 22;
    (*p2).printX();
    (*p2).printY();
    delete p2;
    p2 = nullptr;

    return 0;
}

