//
// Created by Dooooooooo21 on 2021/1/4.
//

#ifndef C___LEARN_SALES_DATA_H
#define C___LEARN_SALES_DATA_H


#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    bool flag = false;
};


#endif //C___LEARN_SALES_DATA_H
