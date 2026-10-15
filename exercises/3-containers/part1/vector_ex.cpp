#include "vector_ex.hpp"

// std::vector documentation:
// https://en.cppreference.com/w/cpp/container/vector

std::vector<int> GetEven(std::vector<int> const& source) {
  std::vector<int> result;
  for (int x: source) {
    if (x % 2 == 0) {
      result.push_back (x);
    }
  }

  return (result);
}


void PrintVectorOfInt(std::ostream& output, std::vector<int> const& data) {
  if (data.size () == 0) {
    output << "[ ]";
  }
  else {
    output << "[ " << data[0];
    for (int i = 1; i < data.size(); ++i) {
        output << ", " << data[i];
    }
    output << "]";
  }
}
