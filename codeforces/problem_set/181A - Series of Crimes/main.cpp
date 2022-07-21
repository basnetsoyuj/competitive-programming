#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, m, x(0), y(0);
    char ch;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            std::cin >> ch;
            // Exclusive or because the collection of x coordinates & collection of y coordinates for rectangle
            // appear in pair e.g. (1, 1), (1, 2), (3, 1), (3, 2)
            // x-coordinates = (1, 1, 3, 3)
            // y-coordinates = (1, 2, 1, 2)
            // so we can use XOR to get the missing pair
            if (ch == '*')
            {
                x ^= i + 1;
                y ^= j + 1;
            }
        }

    std::cout << x << " " << y;
}