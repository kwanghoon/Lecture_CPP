#include <iostream>
#include <map>
#include <string>
#include <string_view>

// string_view (after c++17) <=== const std::string& 
void print_map(std::string_view comment, const std::map<std::string, int>& m)
{
    std::cout << comment;
    // iterate using C++17 facilities
    for (const auto& [key, value] : m)
        std::cout << '[' << key << "] = " << value << "; ";
 
// C++11 alternative:
//  for (const auto& n : m)
//      std::cout << n.first << " = " << n.second << "; ";
//
// C++98 alternative
//  for (std::map<std::string, int>::const_iterator it = m.begin(); it != m.end(); it++)
//      std::cout << it->first << " = " << it->second << "; ";
 
    std::cout << '\n';
}
 
int main()
{
    // https://en.cppreference.com/w/cpp/container/map
  
    // Create a map of three (string, int) pairs
    std:: /* 완성하시오 */  m{ /* 완성하시오 */ };
 
    print_map("1) Initial map: ", m);
 
    m /* 완성하시오 */ "CPU" /* 완성하시오 */ = 25; // update an existing value
    m["SSD"] = 30; // insert a new value
    print_map("2) Updated map: ", m);
 
    // using operator[] with non-existent key always performs an insert
    std::cout << "3) m[UPS] = " << m["UPS"] << '\n';
    print_map("4) Updated map: ", m);
 
    m.erase("GPU");
    print_map("5) After erase: ", m);

    // C++20
    std:: /* 완성하시오 */ (m, [](const auto& pair){ return pair.second > 25; });
    // for (const auto& [key, value] : m)
    //   if ( value > 25 )	m.erase(key);
    
    print_map("6) After erase: ", m);
    std::cout << "7) m.size() = " << m.size() << '\n';
 
    m.clear();
    std::cout << std::boolalpha << "8) Map is empty: " << m.empty() << '\n';
}
