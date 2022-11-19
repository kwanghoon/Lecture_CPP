#include <iostream>
#include <vector>

void example1() {
  // (Example 1)
  // https://en.cppreference.com/w/cpp/container/vector
  
  // Create a vector containing integers
  std::vector<int> v = {7, 5, 16, 8};

  // Add two more integers to vector
  v.push_back(25);
  v.push_back(13);

  // Print out the vector
  for (int n : v)
      std::cout << n << " ";
  std::cout << std::endl;
}

void example2() {
  // (Example 2)
  // Absolute c++ (Display 19.1)
  std::vector<int> container;

  for (int i = 1; i<=4; i++)
    container .push_back (i);

  std::vector<int>::iterator p;

  for (p = container.begin(); p != container.end(); p++)
    std::cout << *p << " ";
  std::cout << std::endl;

  for (p = container.begin(); p != container.end(); p++)
    *p = 0;
    
  for (p = container.begin(); p != container.end(); p++)
    std::cout << *p << " ";
  
  std::cout << std::endl;
}

int main()
{
  example1();
  example2();

  return 0;
}
