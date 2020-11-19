#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

long queueTime(std::vector<int> customers, int n)
{
    std::vector<long> cashiers(n,0);

    for(int customerCount = 0; customerCount < customers.size(); customerCount++)
    {
        std::sort(cashiers.begin(), cashiers.end());
        cashiers[0] += customers[customerCount];
    }

    std::sort(cashiers.begin(), cashiers.end(), std::greater<>());
    return cashiers.front();
}

int main()
{
    long waitingTime = queueTime(std::vector<int>{2,3,10}, 2);
    std::cout << "Waiting time:"<< waitingTime << std::endl;
    return 0;
}
