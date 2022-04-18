#include <iostream>
#define N_ALPHABETS 26

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string input;
    std::cin >> input;

    bool arr[N_ALPHABETS];
    for (int i = 0; i < N_ALPHABETS; i++)
        arr[i] = false;

    int distinct(0);

    for (int i = 0; i < input.length(); i++)
        arr[input[i] - 'a'] = true;

    for (int i = 0; i < N_ALPHABETS; i++)
        if (arr[i])
            distinct++;

    if (distinct % 2)
        std::cout << "IGNORE HIM!";
    else
        std::cout << "CHAT WITH HER!";
}