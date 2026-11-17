#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int i = n;
    while(i>0)
    {
        if(i%2==0){
            std::cout << i << " ";
        }
        i--;
    }
    std::cout << std::endl;
    return 0;
}