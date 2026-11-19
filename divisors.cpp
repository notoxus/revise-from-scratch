#include <iostream>
#include <vector>
// https://marisaoj.com/problem/316
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long n;
    std::cin >> n;
    // O(n) solution
    // for(long long i = 1; i <= n; i++)
    // {
    //     if(n%i==0)
    //     {
    //         std::cout << i << " ";
    //     }
    // }
    // O(square n) solution
    std::vector<long long> r;
    for(long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << " ";
            if (i != (n/i))
            {
                r.push_back(n/i);
            }
        }
    }
 
    for(int i = (int)r.size() - 1; i >= 0; i--)
    {
        std::cout << r[i] << " ";
    }
    std::cout << '\n';
    return 0;
}