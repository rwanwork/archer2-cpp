#ifndef CPPEX_ARRAY_HPP
#define CPPEX_ARRAY_HPP

// TODO: Add template parameters to set the data type and array size at compile time
template<typename T, unsigned int N>
class FixedSizeArray {

private:
    T data[N];

public:
  // using value_type = T;
  // using reference = T&;
  // using const_reference = T const&;

  FixedSizeArray() {
    for (int i = 0; i < N; ++i) {
      data[i] = T();  // Does this work for all data types?
    }
  }

    // TODO: Overload the [] operator to provide access to the array elements
  T& operator[](int index) {
    return data[index];
  }

  const T& operator[](int index) const {
    return data[index];
  }

    // TODO: Create function size() that returns the size of the array
  unsigned int size () const {
    return (N);
  }

  // TODO: Create function reduce() that sums all elements of the array
  T reduce () const {
    T result = data[0];
    for (int i = 1; i < N; ++i) {
      result += data[i];
    }

    return (result);
  }

  // TODO: Create function doubleInPlace() that doubles each element of the array
  void doubleInPlace () {
    if constexpr (std::is_arithmetic<T>::value) {
      for (int i = 0; i < N; ++i) {
        data[i] *= 2;
      }
    }
    else {
      std::cout << "type not supported" << std::endl;
    }
  }
};

#endif
