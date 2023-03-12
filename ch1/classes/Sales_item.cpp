#include <iostream>
#include "Sales_item.hpp"

//int main()
//{
//    Sales_item item, sum;
//
//    // read the first transaction
//    std::cin >> item;
//    sum = item;
//
//    // read the rest of the transactions
//    while (std::cin >> item)
//    {
//        // check if the ISBNs match
//        if (item.isbn() == sum.isbn())
//        {
//            sum += item; // add the transaction to the sum
//        }
//        else
//        {
//            std::cerr << "ISBNs do not match!" << std::endl;
//            return -1;
//        }
//    }
//
//    // print the sum of all transactions
//    std::cout << "Total sales for ISBN " << sum.isbn() << " is " << sum << std::endl;
//
//    return 0;
//}
