#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, counter(0);
    std::cin >> n;

    int steps[] = {1, 2, 3, 4, 5};

    for (int i = 4; i >= 0; i--)
        if (n >= steps[i])
        {
            counter += n / steps[i];
            n %= steps[i];
        }

    std::cout << counter;
}