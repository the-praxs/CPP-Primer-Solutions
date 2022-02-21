/*
    Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
*/

#include <iostream>

int main() {
    int sum = 0, val = 1;

    // keep executing the for loop as long as val is less than or equal to 10
    for (;val <= 10; val++) {
        sum += val;     // assigns sum + val to sum ++val; // add 1 to val
    }

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}