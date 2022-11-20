// Power C++, Chapter 19

#include <iostream>
#include <cstdlib>
#include < /* 완성하시오 */ >
#include <set>
#include <cmath>
#include <iterator>
#include <sstream>

using namespace std;

void InputKeywords(set<string>& setKeywords) {
  string s;
  do {
    getline(cin, s);
    if (s != string("")) {
      istringstream iss(s);
      
      string word;
      while (iss >> word)
	setKeywords. /* 완성하시오 */ (word);
    }
  } while (s != string(""));
}

int main() {
  set<string> doc;
  set<string> query;

  InputKeywords( doc );
  InputKeywords( query );

  /* 완성하시오 */ intersection_result;

  insert_iterator<set<string> > intersectionIter(intersection_result, intersection_result.begin());

  set_intersection(doc.begin(), doc.end(),
		   query.begin(), query.end(),
   	           /* 완성하시오 */ );

  double similarity = intersection_result.size() / ( sqrt (doc.size()) * sqrt (query.size()) );
  cout << "The similarity is " << similarity << endl;
  cout << "the intesection set size is " << intersection_result.size() << endl;
  cout << "the doc set size is " << doc.size() << endl;
  cout << "the query set size is " << query.size() << endl;
  
  return 0;
}
