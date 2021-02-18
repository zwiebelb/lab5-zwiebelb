#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>

#include "coordinates.h"

using namespace std;

int main() {

  Coordinate target(42.1858587, -122.6970897);  // CS building
  vector<Coordinate> coords;
  Coordinate coord;
  int x;
  char comma;

  while (cin >> x >> comma >> coord.first >> comma >> coord.second) {
    coords.push_back(coord);
  }
  // for(unsigned int i = 0; i < coords.size(); i++){
  //  cout<< coords[i].first<<coords[i].second<<endl;
  //}

  SortByDistanceTo(target, coords);

  cout << "\nThe closest coordinate to the SOU CS building is: " << fixed
       << setprecision(7) << coords[0].first << ", " << coords[0].second
       << endl;

  return 0;
}