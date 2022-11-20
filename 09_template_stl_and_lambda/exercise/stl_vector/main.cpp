#include <iostream>
#include <vector>

void example1() {
  // (Example 1)
  // https://en.cppreference.com/w/cpp/container/vector
  
  // Create a vector containing integers
  std::vector<int> v =  /* 완성하시오 */ 7, 5, 16, 8 /* 완성하시오 */;

  // Add two more integers to vector
  v. /* 완성하시오 */ (25);
  v. /* 완성하시오 */ (13);

  // Print out the vector
  for (int n : v)
      std::cout << n << " ";
  std::cout << std::endl;
}

void example2() {
  // (Example 2)
  // Absolute c++ (Display 19.1)
  std:: /* 완성하시오 */ container;

  for (int i = 1; i<=4; i++)
    container .push_back (i);

  std::vector<int>::iterator p;

  for (p = container.begin(); p != container.end(); p++)
    std::cout << /* 완성하시오 */ << " ";
  std::cout << std::endl;

  for (p = container.begin(); p != container.end(); p++)
    /* 완성하시오 */ = 0;

  for (int j = 0; j<container.size(); j++)
    std::cout << container /* 완성하시오 */ j /* 완성하시오 */ << " ";
  
  std::cout << std::endl;
}

int main()
{
  example1();
  example2();

  return 0;
}
