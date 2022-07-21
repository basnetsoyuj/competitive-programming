#include <iostream>

int main()
{
    int i, n, k, num, k_th_num(0);

    std::cin >> n >> k;

    for (i = 0; i < n; i++)
    {
        std::cin >> num;

        // set k_th_num when i reaches kth place
        if (i + 1 == k)
            k_th_num = num;

        // if num is a non-positive number or (kth_value has been set and num has read past that value, break)
        if (num == 0 || (k_th_num && num != k_th_num))
            break;
    }

    std::cout << i << std::endl;

    return 0;
}