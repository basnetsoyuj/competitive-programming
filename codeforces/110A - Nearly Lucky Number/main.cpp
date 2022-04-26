#include <bits/stdc++.h>

bool is_lucky_num(std::string num)
{
    for (char const &c : num)
        if (c != '4' && c != '7')
            return false;
    return true;
}

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string input;
    std::cin >> input;

    int number_of_lucky_digits = 0;

    for (char const &c : input)
        if (c == '4' || c == '7')
            number_of_lucky_digits++;

    if (is_lucky_num(std::to_string(number_of_lucky_digits)))
        std::cout << "YES";
    else
        std::cout << "NO";
}