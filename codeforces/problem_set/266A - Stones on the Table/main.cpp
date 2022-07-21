#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, count(0);
    std::cin >> n;

    std::string word;
    std::cin >> word;

    for (int i = 1; i < n; i++)
        if (word[i - 1] == word[i])
            count++;

    std::cout << count;
}
