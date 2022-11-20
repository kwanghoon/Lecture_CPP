#include <vector>
#include <algorithm>
#include <iostream>
 
struct Sum
{
    void /* 완성하시오 */ (int n) { sum += n; }
    int sum{0};
};
 
int main()
{
    std::vector<int> nums /* 완성하시오 */;
 
    auto print = [](const int& n) { std::cout << " " << n; };
 
    std::cout << "before:";
    std::for_each(nums.begin(), nums.end(), /* 완성하시오 */ );
    std::cout << '\n';
 
    std::for_each(nums.begin(), nums.end(),  /* 완성하시오 */ );
 
    // calls Sum::operator() for each number
    Sum s = std::for_each(nums.begin(), nums.end(),  /* 완성하시오 */ );
 
    std::cout << "after: ";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';
    std::cout << "sum: " << s.sum << '\n';
}
