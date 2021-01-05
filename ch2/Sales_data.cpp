//
// Created by Dooooooooo21 on 2021/1/4.
//
#include<iostream>
#include "Sales_data.h"

// 命名空间
using namespace std;

namespace A {
    int x = 1;
    void fun() {
        cout << "A" << endl;
    }
}

namespace B {
    int x = 2;
    void fun() {
        cout << "B" << endl;
    }

    void fun2() {
        cout << "2B" << endl;
    }
}

using namespace B;

int main() {
    Sales_data data1, data2;
    data1.bookNo = "1001";
    cout << "sales" << endl;
    cout << data1.bookNo << endl;

    cout << A::x << endl;
    B::fun();
    fun2();
}
