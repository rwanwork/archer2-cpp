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
  else if (data.size () == 1) {
    output << "[ " << data[0] << "]";
  }
  else {
    output << "[ ";
    for (int x: data) {
      output << x;
      output << ", ";
    }
    output << "]";
  }
}
