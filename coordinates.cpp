#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <cmath>

#include "coordinates.h"

using namespace std;

double Haversine(Coordinate a, Coordinate b){
    double lat1 = a[0].first; 
    double lon1 = a[1].second;
    double lat2 = b[0].first;
    double lon2 = b[1].second;

    const double R = 6371e3;
    const double phi1 = lat1 * M_PI/180;
    const double phi2 = lat2 * M_PI/180;
    const double deltaphi = (lat2-lat1) * M_PI/180;
    const double deltalamda = (lon2-lon1) * M_PI/180;

    //a = sin²(Δφ/2) + cos φ1 ⋅ cos φ2 ⋅ sin²(Δλ/2)
    const double aH = pow(sin(deltaphi/2.0),2.0)+cos(phi1)*cos(phi2)*pow(sin(deltalamda/2),2);
    //c = 2 ⋅ atan2( √a, √(1−a) )
    const double c = 2 * atan2(sqrt(aH),sqrt(1.0-aH)); 
    const double d = (R * c)/1000;

    return d;}

//target is 42.1858587, -122.6970897
Coordinate SortByDistanceTo(Coordinate target){
    Coordinate distance;
    return distance;}