// Power C++, Chapter 19

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  stack<string> stk;
  string word;

  while (cin >> word)
    stk.push (word);

  while (stk.empty() == false) {
    word = stk.top();
    stk.pop();
    cout << word << " ";
  }
  cout << endl;
  
  return 0;
}
