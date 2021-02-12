#include "coordinates.h"
#include "gtest/gtest.h"
#include <cmath>
#include <vector>
#include <string>

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
TEST(lab5, sig_figs) {
  Coordinate c1(2,std::make_pair(42.1858587,-122.6970897));
  Coordinate c2(2,std::make_pair(42.186357,-122.65485));
  double distance = Haversine(c1,c2);
  double expected = 3.48;
  double diff = fabs(distance - expected);
  EXPECT_LE(diff, 0.0001);
}
TEST(lab5, sigs) {
  Coordinate c1(2,std::make_pair(42.1858587, -122.6970897));
  Coordinate c2(2,std::make_pair(42.214501,-122.655287));
  double distance = Haversine(c1,c2);
  double expected = 4.69;
  double diff = fabs(distance - expected);
  EXPECT_LE(diff, 0.0001);
}
TEST(lab5, my_address) {
  Coordinate c1(2,std::make_pair(42.1858587, -122.6970897));
  Coordinate c2(2,std::make_pair(42.177818,-122.683708));
  double distance = Haversine(c1,c2);
  double expected = 1.42;
  double diff = fabs(distance - expected);
  EXPECT_LE(diff, 0.0001);
}