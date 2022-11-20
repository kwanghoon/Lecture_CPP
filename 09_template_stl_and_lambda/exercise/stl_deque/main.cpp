#include <iostream>
#include < /* 완성하시오*/ >
 
int main()
{
    // https://en.cppreference.com/w/cpp/container/deque
  
    // Create a deque containing integers
    std::deque<int> d = {7, 5, 16, 8};
 
    // Add an integer to the beginning and end of the deque
    d. /* 완성하시오*/ (13);
    d. /* 완성하시오*/ (25);
 
    // Iterate and print values of deque
    for(int n : d)
        std::cout << n << ' ';
}
