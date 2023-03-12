/******************************************************************************
 * @Author                : iustus<lindgreia@gmail.com>                       *
 * @CreatedDate           : 2023-03-11 18:44:52                               *
 * @LastEditors           : iustus<lindgreia@gmail.com>                       *
 * @LastEditDate          : 2023-03-11 19:04:41                               *
 * @FilePath              : cpp/ch1/cf.cpp                                    *
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
  int sum = 0, val = 50;

  while (val <= 100) {
    sum += val;
    val++;
  }

 sum = 0, val = 50;
	
  for (int i = 0; i <= 100 ; i++) {
	sum+= val;
	val++;
  }

  std::cout << sum << std::endl;

  int s = 1000;
  while (s >= 0) {
    std::cout << s << std::endl;
    s--;
  }

  s = 1000;
  
  for (int i = s; i >= 0; i--) {
	std::cout << i << std::endl;
  }
  std::cout << "\n";

  std::cout << "Enter two nums: " << std::endl;
  int a = 0, b = 0;
  std::cin >> a >> b;

  while (a <= b) {
    std::cout << a << std::endl;
    a++;
  }

	for (int i = a; i <= b; i++) {
		std::cout << i << std::endl;
	}
	






  return 0;
}