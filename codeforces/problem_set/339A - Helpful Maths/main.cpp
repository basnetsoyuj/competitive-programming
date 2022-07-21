#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string input;
    std::cin >> input;

    int j(0), one(0), two(0), three(0);

    for (int i = 0; i < input.length(); i++)
        if (input[i] == '1')
            one++;
        else if (input[i] == '2')
            two++;
        else if (input[i] == '3')
            three++;

    // modify the input string
    for (; j < one; j++)
        input[j * 2] = '1';

    for (; j < one + two; j++)
        input[j * 2] = '2';

    for (; j < one + two + three; j++)
        input[j * 2] = '3';

    std::cout << input;
}