#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string input;
    std::cin >> input;

    input[0] = toupper(input[0]);

    std::cout << input;
}