// https://en.cppreference.com/w/cpp/algorithm/all_any_none_of

#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
 
int main()
{
    std::vector<int> v(10, 2);
    std:: /*완성하시오*/ (v.begin(), v.end(), v.begin());
    std::cout << "Among the numbers: ";
    std:: /*완성하시오*/ (v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
 
    if (std::all_of(/*완성하시오*/, /*완성하시오*/, [](int i){ return i % 2 == 0; })) {
        std::cout << "All numbers are even\n";
    }
    if (std::none_of(v.begin(), v.end(), /*완성하시오*/ )) {
        std::cout << "None of them are odd\n";
    }
    struct DivisibleBy
    {
        const int d;
        DivisibleBy(int n) : d(n) {}
        bool operator()(int n) const { return n % d == 0; }
    };
 
    if (std::any_of(v.begin(), v.end(), /*완성하시오*/ )) {
        std::cout << "At least one number is divisible by 7\n";
    }
}
