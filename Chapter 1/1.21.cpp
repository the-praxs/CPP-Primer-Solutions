/*
    Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std :: cout << "Enter details of 2 items: " << std :: endl;
    std :: cin >> item1 >> item2;
    std :: cout << "Sum of items 1 and 2 = " << item1 + item2 << std :: endl;
    return 0;
}