//
// Created by Ayman Ougri on 3/12/23.
//

#include <iostream>
#include "Sales_item.hpp"

int main() {

    Sales_item item1, item2;
    std::cin >> item1 >>  item2;

    //First check that item 1 and item2 represent the same book
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0; // success!
    } else {
        std::cerr << "ISBNs don't match." << std::endl;
        return -1; // error :(
    }

}