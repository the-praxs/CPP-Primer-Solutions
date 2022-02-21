/*
    Write a program that reads several transactions 
    and counts how many transactions occur for each ISBN.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item currentItem, item;

    std :: cout << "Enter transaction details: " << std :: endl;

    if(std::cin >> currentItem) {
        int count = 1;
        while(std :: cin >> item) {
            if(item.isbn() == currentItem.isbn())
                count++;
            else {
                std :: cout << currentItem.isbn() << " occurs " << count << " times." << std :: endl;
                currentItem = item;
                count = 1;  
            }
        }
        std :: cout << currentItem.isbn() << " occurs " << count << " times." << std :: endl;
    }

    return 0;
}