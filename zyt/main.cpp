// #include<iostream>
// int main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }

#include <iostream>

class Parent {
public:
    Parent() {
        std::cout << "Parent constructor called." << std::endl;
    }
};

class Child : public Parent {
public:
    Child() {
        std::cout << "Child constructor called." << std::endl;
    }
};

int main() {
    Child child; // 创建子类对象
    return 0;
}
