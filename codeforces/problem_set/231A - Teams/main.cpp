#include <iostream>

int main()
{
    int n, a, b, c, counter(0);
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;

        if (a + b + c > 1)
            counter++;
    }

    std::cout << counter << std::endl;

    return 0;
}