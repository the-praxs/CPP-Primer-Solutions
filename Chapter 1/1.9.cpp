/*
    Write a program that uses a while to sum the numbers from
    50 to 100.
*/

#include <iostream>

int main() {
    int number = 50, sum = 0;

    while(number <= 100) {
        sum += number;
        number++;
    }

    std :: cout << "Sum of numbers from 50 to 100 = " << sum;
    return 0;
}
