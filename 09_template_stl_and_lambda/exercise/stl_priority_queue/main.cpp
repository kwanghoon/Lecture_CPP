// https://en.cppreference.com/w/cpp/container/priority_queue

#include <functional>
#include <queue>
#include <vector>
#include <iostream>
#include <string_view>
 
template<typename T>
void print(std::string_view name, T const& q) {
    std::cout << name << ": \t";
    for (auto const& n : q)
        std::cout << n << ' ';
    std::cout << '\n';
}
 
template<typename Q>
void print_queue(std::string_view name, Q q) {
    // NB: q is passed by value because there is no way to traverse
    // priority_queue's content without erasing the queue.
    for (std::cout << name << ": \t"; /* 완성하시오 */ ; /* 완성하시오 */)
        std::cout << /* 완성하시오 */ << ' ';
    std::cout << '\n';
}
 
int main() {
    const auto data = {1,8,5,6,3,4,0,9,7,2};
    print("data", data);
 
    std::priority_queue<int> q1; // Max priority queue
    for(int n : data)
        q1.push(n);
 
    print_queue("q1", q1);
 
    // Min priority queue
    // std::greater<int> makes the max priority queue act as a min priority queue
    std::priority_queue<int, std::vector<int>, std::greater<int>>
        minq1(data.begin(), data.end());
 
    print_queue("minq1", minq1);
 
    // Second way to define a min priority queue
    std::priority_queue minq2(data.begin(), data.end(), /* 완성하시오 */ );
 
    print_queue("minq2", minq2);
 
    // Using a custom function object to compare elements.
    struct {
        bool operator() (const int l, const int r) const { return l > r; }
    } customLess;
    std::priority_queue minq3(data.begin(), data.end(), /* 완성하시오 */ );
 
    print_queue("minq3", minq3);
 
    // Using lambda to compare elements.
    auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
    std::priority_queue<int, /* 완성하시오 */, decltype(cmp)> q5( /* 완성하시오 */ );
 
    for(int n : data)
        q5.push(n);
 
    print_queue("q5", q5);
}
