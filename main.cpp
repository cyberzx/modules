#include <stdio.h>
#include <string>

import math;

int main() {
  math::Vec3 x{1, 0, 0};
  math::Vec3 y{0, 1, 0};
  math::Vec3 z{0, 0, 1};

  math::Vec3 xy = add(x, y);
  math::Vec3 xz = x + z + math::v3zero;
  printf("%f %d\n", math::dot(xy, xz), math::random());
  printf("%s\n", to_string(xz).c_str());
  return 0;
}
