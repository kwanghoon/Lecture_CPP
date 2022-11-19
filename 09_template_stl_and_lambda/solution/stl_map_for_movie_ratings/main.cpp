#include <string>
#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main() {
  map<string, int> mapNumReviewers;
  map<string, int> mapSumReviews;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  
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

    if ( mapSumReviews.find(title) == mapSumReviews.end() )
      mapSumReviews[title] = rating;
    else
      mapSumReviews[title] += rating;
  }

  map<string, int>::const_iterator iter;

  for (iter = mapNumReviewers.begin();
       iter != mapNumReviewers.end();
       iter ++)
    {
      string title = iter->first;
      int numReviewers = iter->second;
      int sumRatings = mapSumReviews[iter->first];

      cout << title << ": " << numReviewers << " reviewers. " <<
	"Average of " << static_cast<double>(sumRatings) / numReviewers << "/5" << endl;
    }

  return 0;
}
