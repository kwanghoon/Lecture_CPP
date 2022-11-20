#include <iostream>
#include < /* 완성하시오 */ >
#include <cstdlib>
using namespace std;

int main() {
  int numSoldiers;

  cin >> numSoldiers;

  /* 완성하시오 */ soldiers(numSoldiers);

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

      if (current == soldiers. /* 완성하시오 */ )
	current = 0;

      // for (int j=0; j<soldiers.size(); j++)
      // cout << soldiers[j] << " ";
      // cout << endl;
      
      soldiers.erase( /* 완성하시오 */ );

      if (current == /* 완성하시오 */ )
	current = 0;
    }

    cout << soldiers[ /* 완성하시오 */ ] << endl;
    
  }
  
  return 0;
}
