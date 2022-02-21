/*
    Write a program that prompts the user for two integers. 
    Print each number in the range specified by those two integers.
*/

#include <iostream>

int main() {
    int lowerLimit, upperLimit;

    std :: cout << "Enter 2 integers: ";
    std :: cin >> lowerLimit >> upperLimit;

    while(lowerLimit <= upperLimit) {
        std :: cout << lowerLimit++ << std :: endl;
    }

    return 0;
}