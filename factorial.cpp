#include "iostream"
// https://marisaoj.com/problem/542
int main()
{
    long n;
    std::cin >> n;
    if(n<0) return 0;
    if(n == 0 || n==1)
    {
        std::cout << 1 << "\n";
        return 0;
    }
    long i = n-1;
    while(i>0)
    {
        n *= i;
        i--;
    }
    std::cout << n << "\n";
    return 0;
}