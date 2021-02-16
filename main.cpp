#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include "coordinates.h"

using namespace std;
int main() {
  string c;
  Coordinate vect;

  double a;
  double b;
 //double distance;
  Coordinate c1(2, std::make_pair(42.1858587, -122.6970897));
  while (getline(cin, c)) {
    int length = c.size();
    for (int i = 0; i < length; ++i) {
      if (c.at(i) == ',') {
        a = atof(c.substr(2, i - 2).c_str());
        b = atof(c.substr(i + 1).c_str());
      }
    }
    vect.push_back(make_pair(a, b));
  }
  //  cout << a <<endl;
  // cout<< b <<endl;

  for (unsigned int i = 0; i < vect.size(); i++) {
    cout << vect[i].first << " " << vect[i].second << endl;
  }
  // int len = vect.size();
  // for(int i = 0; i < len; ++i){
  //    distance = Haversine(c1, vect);}

  // for (int k = 0; k< vect.size(); k++){
  // cout << vect[k].first <<" "<< vect[k].second <<endl;
  //}

  return 0;
} 