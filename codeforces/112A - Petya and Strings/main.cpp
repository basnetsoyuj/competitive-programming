#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string word1, word2;
    std::cin >> word1 >> word2;

    int comparison = 0;
    char c1, c2;

    for (int i = 0; i < word1.length(); i++)
    {
        c1 = tolower(word1[i]);
        c2 = tolower(word2[i]);

        if (c1 == c2)
            continue;
        else if (c1 < c2)
            comparison = -1;
        else
            comparison = 1;
        break;
    }

    std::cout << comparison;
    return 0;
}