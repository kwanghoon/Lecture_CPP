#include <algorithm>
#include <iostream>
#include <list>
 
int main()
{
    // https://en.cppreference.com/w/cpp/container/list
    // Create a list containing integers
    std:: /* 완성하시오*/ l = {7, 5, 16, 8};
 
    // Add an integer to the front of the list
    l.push_front(25);
    // Add an integer to the back of the list
    l.push_back(13);
 
    // Insert an integer before 16 by searching
    auto it = std::  /* 완성하시오*/ (l.begin(), l.end(), 16);
    if (it != /* 완성하시오*/ )
        l. /* 완성하시오*/ (it, 42);
 
    // Print out the list
    for (int n : l)
        std::cout << n << " ";
}
