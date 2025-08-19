#include <iostream>

template <typename T>
class Box {
  public:
    T value;
    Box(T v) {
      value = v;
    }
    void show() {
      cout << "Value: " << value << "\n";
    }
};

int main() {
  Box<int> intBox(50);
  Box<std::string> strBox("Hello");

  intBox.show();
  strBox.show();
  return 0;
}