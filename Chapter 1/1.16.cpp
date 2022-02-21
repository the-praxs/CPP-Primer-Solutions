/*
    Write your own version of a program that prints 
    the sum of a set of integers read from cin.
*/

#include <iostream>

int main() {
    int sum = 0;
    std :: cout << "Enter numbers: " << std :: endl;
    for(int number = 0; std :: cin >> number, number != 0; sum += number);
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}