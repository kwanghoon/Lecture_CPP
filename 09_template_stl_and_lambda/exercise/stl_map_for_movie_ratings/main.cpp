// Power C++, Chapter 19

#include <string>
#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main() {
  map<string, int> mapNumReviewers;
  /* 완성하시오 */ mapSumReviews;

  // Input
  int numRatings;
  cin >> numRatings;
  cin.ignore(2, '\n');
  
    //cout << numRatings << endl;  // for debug

  for (int i=0; i<numRatings; i++) {
    string title;
    getline(cin, title);

    // cout << "->" << title << "<-" << endl;  // for debug
  
    int rating;
    cin >> rating;
    cin.ignore(2, '\n');

    // cout << rating << endl;  // for debug

    if ( mapNumReviewers.find(title) == mapNumReviewers.end() )
      mapNumReviewers[title] = 1;
    else
      mapNumReviewers[title]++;

    if ( mapSumReviews.find(title) == /* 완성하시오 */ )
      mapSumReviews[title]  /* 완성하시오 */ rating;
    else
      mapSumReviews[title] /* 완성하시오 */ rating;
  }

  // Output
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  
  map<string, int>::const_iterator iter;

  for (iter = mapNumReviewers.begin();
       iter != mapNumReviewers.end();
       /* 완성하시오 */ )
    {
      string title = iter->first;
      int numReviewers = iter-> /* 완성하시오 */ ;
      int sumRatings = mapSumReviews[ /* 완성하시오 */ ];

      cout << title << ": " << numReviewers << " reviewers. " <<
	"Average of " << static_cast<double>(sumRatings) / numReviewers << "/5" << endl;
    }

  return 0;
}
