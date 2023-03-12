#include <iostream>
 
int main() {

    // int sum  = 0, value = 0;

    // while (std::cin >> value)
    // {
    //     sum += value;
    // }

    // std::cout << sum << std::endl;

    // return 0;


    int currVal = 0, val = 0;

    if(std::cin >> currVal) {
        int cnt = 1;

        while(std::cin >> val) {
            if (val == currVal) { ++ cnt;} 
            else {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;

                currVal = val;
                cnt = 1;
            }
        }

        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
}