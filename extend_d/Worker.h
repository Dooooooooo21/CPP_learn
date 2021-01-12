//
// Created by Dooooooooo21 on 2021/1/12.
//

#ifndef C___LEARN_WORKER_H
#define C___LEARN_WORKER_H

#include <string>
#include "Person.h"

// 共有继承
class Worker : public Person {
public:
    Worker();

    ~Worker();

    void work();

protected:
    int m_salary;
};


#endif //C___LEARN_WORKER_H
