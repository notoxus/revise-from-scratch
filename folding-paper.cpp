#include <iostream>
// https://marisaoj.com/problem/402
int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);
    long long n, count=0;
    std::cin >> n;
    for(long long i=1; i<n; i*=2)
    {
        count++;
    }
    std::cout << count << "\n";
    return 0;
}