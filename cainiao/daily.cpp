//
// Created by Dooooooooo21 on 2021/1/14.
//

#include <iostream>
#include <csignal>
#include <unistd.h>
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

// 信号处理程序
void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序

    exit(signum);

}

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

    int i = 0;
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);

    while(++i){
        cout << "Going to sleep...." << endl;
        if( i == 3 ){
            // 产生信号
            raise( SIGINT);
        }
        sleep(1);
    }

    return 0;
}
