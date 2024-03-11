
#include <iostream>

void print() {
    int array[2][3] = {
        {1, 2, 5},
        {3, 4, 6}
    };
    std::cout << &array[0][0] << " " << &array[0][1] << std::endl;
    std::cout << &array[0][0] << " " << &array[0][1] << std::endl;
}

int main() {
    print();
}