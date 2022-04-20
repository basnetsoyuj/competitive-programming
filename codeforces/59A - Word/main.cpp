#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string word;
    std::cin >> word;

    int counter(0);

    for (int i = 0; i < word.length(); i++)
    {
        // increment if char is lowercase ; decrement if uppercase
        if (word[i] == tolower(word[i]))
            counter++;
        else
            counter--;
        // if majority is found already, break
        if (abs(counter) >= word.length() - i)
            break;
    }

    // if equal or greater number of lowercase, print all lowercase
    if (counter >= 0)
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
    // else print uppercase
    else
        std::transform(word.begin(), word.end(), word.begin(), ::toupper);

    std::cout << word;
}