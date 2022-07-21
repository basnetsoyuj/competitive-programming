#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int cost, amount, n, total(0);
    std::cin >> cost >> amount >> n;

    total = cost * n * (n + 1) / 2;
    if (total > amount)
        std::cout << total - amount;
    else
        std::cout << 0;
}