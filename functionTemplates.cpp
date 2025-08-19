#include <iostream>

template <typename T>
T add(T a, T b) {
  return a + b;
}

int main() {
  std::cout << add<int>(5, 3) << "\n";
  std::cout << add<double>(2.5, 1.5) << "\n";
  return 0;
}