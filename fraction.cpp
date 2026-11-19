#include <iostream>
// https://marisaoj.com/problem/315
int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);
    long long a, b;
    std::cin >> a >> b;
    long long x=a, y=b, r;
    // Euclid algorithm: gcd(a, b) <=> gcd(b, r)
    // base case y==0 cuz when the expression is perfectly divisible, 
    // the number b is the greatest common divisor.
    while(y!=0)
    {
        r = x%y;
        x=y;
        y=r;
    }
    a /= x;
    b /= x;
    std::cout << a << " " << b << '\n';
    return 0;
}