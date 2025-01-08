// 
#include <iostream>

int main() {
    int a = 10;
    decltype(a) b = 20; // b sẽ có cùng kiểu dữ liệu với a
    std::cout << "Kiểu dữ liệu của b: " << typeid(b).name() << std::endl;
    return 0;
}