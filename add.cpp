#include <iostream>

int add_numbers(int a, int b) {
    return a + b;  // Bug: Should be addition, but subtraction is used
}

int main() {
    int num1 = 5;
    int num2 = 3;

    int result = add_numbers(num1, num2);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
