#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long a, b, c;
    std::cin >> a >> b >> c;

    long long res = 1 % c; // avoid divided by 1
    a %= c;
    for (long long i = 0; i < b; i++)
    {
        // Take modulo at each step to prevent overflow 
        // without changing the final remainder
        res = (res * a) % c;
    }

    std::cout << res << '\n';
    return 0;
}