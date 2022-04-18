#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            std::cin >> n;
            if (n)
            {
                // print the sum of difference from the element index to [2, 2]
                std::cout << abs(2 - i) + abs(2 - j) << "\n";
                break;
            }
        }

    return 0;
}