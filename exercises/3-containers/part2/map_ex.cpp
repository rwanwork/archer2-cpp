// Part 2
//
//
//
// Implement, in a new header/implementation pair of files (map_ex.hpp/.cpp), a function (AddWord) that adds words to a std::map. The map should have string keys and integer values, where the integer value is the length of the key. The function should return true if the word was added, or false if the word was already present in the map.
//
//
//
// For example:
//
//
//
// bool wordAdded = AddWord(wlen_map, "Implement")
//
//
//
// would add "Implement" to wlen_map as a key, with the value set to 9.


std::map<int> AddWord (std::vector<int> const& source) {
  std::vector<int> result;
  for (int x: source) {
    if (x % 2 == 0) {
      result.push_back (x);
    }
  }

  return (result);
}
