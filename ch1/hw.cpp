/******************************************************************************
 * @Author                : iustus<lindgreia@gmail.com>                       *
 * @CreatedDate           : 2023-03-11 16:34:43                               *
 * @LastEditors           : iustus<lindgreia@gmail.com>                       *
 * @LastEditDate          : 2023-03-11 18:27:19                               *
 * @FilePath              : cpp/ch1/hw.cpp                                    *
 * @CopyRight             : MerBleueAviation                                  *
 *****************************************************************************/

// Copyright 2023 waougri
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include <iostream>


int main() {
        
    std::cout << "Hello, World!" << std::endl;
    
    int a = 0, b = 0;
    
    std::cout << "Enter two numbers!" << std::endl;
    
    std::cin >> a >> b;
    
    std::cout << "The product of a and b is: " << a * b << std::endl;

    std::cout << "The sum of ";
    std::cout << a << " and ";
    std::cout << b << " is ";
    std::cout << a + b << std::endl;
    
    return 0;
}