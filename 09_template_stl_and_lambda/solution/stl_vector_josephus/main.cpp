#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  int numSoldiers;

  cin >> numSoldiers;

  vector<int> soldiers(numSoldiers);

  for (int i=0; i<numSoldiers; i++) soldiers[i] = i+1;

  if (numSoldiers < 1)
    cout << 0 << endl;
  else if (numSoldiers == 1)
    cout << 1 << endl;
  else {
    int current;

    current = 0;

    while (soldiers.size() >  1) {
      current++;

      if (current == soldiers.size())
	current = 0;

      // for (int j=0; j<soldiers.size(); j++)
      // cout << soldiers[j] << " ";
      // cout << endl;
      
      soldiers.erase(soldiers.begin() + current);

      if (current ==soldiers.size())
	current = 0;
    }

    cout << soldiers[0] << endl;
    
  }
  
  return 0;
}
