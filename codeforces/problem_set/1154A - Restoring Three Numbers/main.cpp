#include <iostream>
#define SIZE 4

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    unsigned long int nums[SIZE], sum(0);
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> nums[i];
        sum += nums[i];
    }
    sum /= SIZE - 1;

    for (int i = 0; i < SIZE; i++)
        if (sum - nums[i])
            std::cout << sum - nums[i] << " ";
}