/******************************************************************************
 * @Author                : iustus<lindgreia@gmail.com>                       *
 * @CreatedDate           : 2023-03-10 12:25:23                               *
 * @LastEditors           : iustus<lindgreia@gmail.com>                       *
 * @LastEditDate          : 2023-03-11 15:17:51                               *
 * @FilePath              : cpp/ch1/ch1.cpp                                   *
 * @CopyRight             : MerBleueAviation                                  *
 *****************************************************************************/

#include <chrono>
#include <iostream>
#include <ostream>
#include <string>

int main() {
    
  std::cout << "Enter two numbers: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
            << std::endl;


    // the << operator is called the output operator

  return 0;
}
