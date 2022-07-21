#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int number, n;
    std::cin >> number >> n;

    int counter(0);

    for (int i = 0; i < n; i++)
        if (number % 10)
            number--;
        else
            number /= 10;

    std::cout << number;
}