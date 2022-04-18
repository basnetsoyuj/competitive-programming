#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    // the watermelon can be split into two even weighing parts, only if the weight of the watermelon is even > 2
    if (n <= 2 || n % 2)
        std::cout << "NO" << std::endl;
    else
        std::cout << "YES" << std::endl;
    return 0;
}