#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, t;
    std::string queue;
    std::cin >> n >> t >> queue;

    for (int i = 0; i < t; i++)
        for (int j = 0; j < n - 1; j++)
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                std::swap(queue[j], queue[j + 1]);
                j++;
            }

    std::cout << queue;
}