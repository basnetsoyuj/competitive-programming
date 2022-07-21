#include <iostream>
#define uli unsigned long int

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n_test_cases, n_customers;

    std::cin >> n_test_cases;

    for (int i = 0; i < n_test_cases; i++)
    {
        std::cin >> n_customers;

        uli *coins = new uli[n_customers];
        for (int j = 0; j < n_customers; j++)
            std::cin >> coins[j];

        uli maximum(0);

        // try every coin
        for (int j = 0; j < n_customers; j++)
        {
            uli sum(0);
            for (int k = 0; k < n_customers; k++)
                if (coins[k] >= coins[j])
                    sum += coins[j];
            if (maximum < sum)
                maximum = sum;
        }

        delete[] coins;
        std::cout << maximum << "\n";
    }
}