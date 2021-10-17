module;
#include <stdlib.h>
#include <string>
export module math;
export namespace math
{

template <typename A, typename B>
auto add(A a, B b) -> decltype(a + b)
{
  return a + b;
}

struct Vec3
{
  float x, y, z;
};

Vec3 operator+(Vec3 const &l, Vec3 const &r)
{
  return {l.x + r.x, l.y + r.y, l.z + r.z};
}

float dot(Vec3 const &l, Vec3 const &r)
{
  return l.x * r.x + l.y * r.y + l.z * r.z;
}

int random()
{
  return ::rand();
}

Vec3 v3zero{0, 0, 0};

std::string to_string(Vec3 const &v)
{
  return "x = " + std::to_string(v.x) + ", y = " + std::to_string(v.y) +
         ", z = " + std::to_string(v.z);
}

} // namespace math
