//
// Created by Dooooooooo21 on 2021/1/4.
//
#include<iostream>
#include<string.h>
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

int getMax(const int *arr, int count, bool isMax) {
    int tmp = arr[0];

    for (int i = 1; i < count; i++) {
        if ((arr[i] > tmp and isMax) or (arr[i] < tmp and !isMax)) {
            tmp = arr[i];
        }
    }

    return tmp;
}

// 内存管理
void memory_deal() {
    // new
    int *p = new int(20);
    if (nullptr == p) {
        *p = 10;
    }
    cout << *p << endl;
    delete p;
    p = nullptr;

    // 申请块内存
    int * arr = new int[10];

    // delete
    delete[] arr;
}

void memory_test() {
    char *str = new char[100];
    strcpy(str, "hello world");
    cout << str << endl;
    delete[] str;
    str = nullptr;
}

int main() {
    Sales_data data1, data2;
    data1.bookNo = "1001";
    cout << "sales" << endl;
    cout << data1.bookNo << endl;

    cout << A::x << endl;
    B::fun();
    fun2();

    int arr[4] = {1, 3, 5, 6};
    int res = getMax(arr, 4, true);
    cout << res << endl;

    // 引用
    int a;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    b = 10;
    cout << a << endl;
    cout << b << endl;

    // 指针
    int aa = 111;

    // 存储地址
    cout << &aa << endl;

    int *bb = &aa;
    cout << aa << endl;
    cout << *bb << endl;
    *bb = 222;
    cout << aa << endl;
    cout << *bb << endl;

    int x = 3;
    const int *p = &x;

    memory_test();
}
