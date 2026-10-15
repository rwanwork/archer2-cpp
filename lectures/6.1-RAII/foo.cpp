#include <iostream>

class my_array {
  unsigned size = 0;
  double* data = nullptr;
public:
  my_array() = default;
  explicit my_array(unsigned n) : size(n), data(new double[size]) {}
  ~my_array() {
    delete[] data;
  }
  double& operator[](unsigned i) {
    return data[i];
  }
};

int main () {
  std::cout << "hello" << std::endl;
  auto x = my_array{};
  std::cout << "x" << std::endl;
  auto y = my_array{10};
  std::cout << "y" << std::endl;
  {
    auto y_cp = y;
    std::cout << "y_cp" << std::endl;
  }
}

