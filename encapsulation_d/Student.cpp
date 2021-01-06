//
// Created by Dooooooooo21 on 2021/1/6.
//

#include <iostream>
#include <string>

using namespace std;

/**
 * 定义类：Student
 * 数据成员：m_strName
 * 无参构造函数：Student()
 * 有参构造函数：Student(string _name)
 * 拷贝构造函数：Student(const Student& stu)
 * 析构函数：~Student()
 * 数据成员函数：setName(string _name)、getName()
 */

class Student {
public:
    // 构造函数
    Student();

    Student(string _name);

    // 拷贝构造函数
    Student(const Student &stu);

    // 析构函数
    ~Student();

    void setName(string _name);

    string getName();

private:
    string m_strName;
};

void Student::setName(string _name) {
    m_strName = _name;
}

string Student::getName() {
    return m_strName;
}



Student::Student() {

}

Student::~Student() {

}

Student::Student(string _name) {

}

Student::Student(const Student &stu) {

}


int main(void) {
    // 通过new方式实例化对象*stu
    Student *stu = new Student();
    // 更改对象的数据成员为“慕课网”
    stu->setName("imooc");
    // 打印对象的数据成员
    cout << stu->getName() << endl;

    return 0;
}

