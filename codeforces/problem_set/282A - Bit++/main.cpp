#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, x(0);
    std::string input;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        // since every statement has either + or - & x can come in any order
        if (input[0] == '+' || input[1] == '+')
            x++;
        else
            x--;
    }

    std::cout << x << "\n";

    return 0;
}