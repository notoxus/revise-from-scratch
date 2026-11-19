#include <iostream>
// https://marisaoj.com/problem/16
int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);
    // int a;
    // std::cin >> a;
    // for(int i = a+1; i > 0; i--)
    // {
    //     for(int j = i-1; j > 0; j--)
    //     {
    //         std::cout << "*";
    //     }
    //     std::cout << '\n';
    // }
    // That way reduce one for loop, so BigO complexity was reduced from O(n^2) to O(n)
    int n;
    std::cin >> n;
    char ch = '*';
    for(int i = n; i > 0; i--) {
        std::cout << std::string(i,ch) << '\n';
    }
    return 0;
}