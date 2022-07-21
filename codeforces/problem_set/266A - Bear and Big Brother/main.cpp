#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int i(0), n1, n2;

    std::cin >> n1 >> n2;

    while (n1 <= n2)
    {
        i++;
        n1 *= 3;
        n2 *= 2;
    }

    std::cout << i;
    return 0;
}