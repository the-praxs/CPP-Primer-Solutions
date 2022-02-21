/*
    Write a program that reads several transactions for the same
    ISBN. Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item, total;
    
    std :: cout << "Enter transaction details: " << std :: endl;
    while(std :: cin >> item) {
        total += item;
    }

    std :: cout << "Sum of all transactions = " << total;
    return 0;
}