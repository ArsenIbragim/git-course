#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;

    int prev = 0;
    int curr = 1;

    for (int i = 2; i <= n; i++) {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
    }

    return curr;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << std::endl;

    return 0;
}