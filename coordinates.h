#ifndef COORDINATES_H

#include <utility>  // For pair
#include <vector>

typedef std::vector<std::pair<double, double> > Coordinate;

double Haversine(Coordinate a, Coordinate b);
Coordinate SortByDistanceTo(Coordinate target);

#endif