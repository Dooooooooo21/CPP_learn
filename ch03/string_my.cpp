//
// Created by Dooooooooo21 on 2021/1/28.
//


#include <string>
#include <iostream>
#include <vector>

using namespace std;

/*
 * 字符串相加
 * */
void string_add() {
    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + ", " + "world";
    cout << s3 << endl;
}


/*
 * vector 创建
 * */
void vector_create() {
    vector<vector<int>> v1;

    vector<int> v2(10, -1);
    v2.push_back(2);

    vector<int> v3(v2);
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *begin = std::begin(a);
    int *end = std::end(a);

    string_add();
    return 0;
}
