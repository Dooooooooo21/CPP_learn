//
// Created by Dooooooooo21 on 2021/1/14.
//

#include <iostream>

using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

// 自定义异常
struct MyException : public exception {
    const char *what() const noexcept override {
        return "c++ exception";
    }
};

int main() {

    try {
        throw MyException();
    } catch (MyException &exception) {
        cout << exception.what() << endl;
    }

    const int l = 10;
    const int w = 5;
    const char newline = '\n';

    cout << LENGTH * WIDTH;
    cout << NEWLINE;

    return 0;
}
