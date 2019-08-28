#include <iostream>
#include <array>
int main()
{
  std::array<int, 3> arr = { 3, 4, 2 };
  for(auto it = arr.begin(); it != arr.end(); ++it) std::cout << *it << ", ";
  return 0;
}
