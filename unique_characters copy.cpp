// check to see if an array of characters has all unique elements

#ifdef __GNUC__
#include <ext/hash_map>
#else
#include <hash_map>
#endif

namespace std {
 using namespace __gnu_cxx;
}

bool isUnique(const char* characters, unsigned int charSize) {
  std::hash_map<char, int> charactersHash;
  
  for (unsigned int i = 0; i < charSize; i++) {
    char character = characters[i];
    charactersHash[character] = charactersHash[character] + 1;
  }
  
  for (std::hash_map<char, int>::iterator i = charactersHash.begin(); i != charactersHash.end(); ++i) {
    if ((*i).second > 1) {
      return false;
    }
  }
  
  return true;
}

int main() {
  {
    char nonUniqueChars[6] = {'a', 'b', 'c', 'd', 'f', 'a'};
    printf("should be false %d\n", isUnique(nonUniqueChars, 6));
  }
  
  {
    char nonUniqueChars[8] = {'a', 'b', 'c', 'd', 'f', 'a', 'd', 'f'};
    printf("should be false %d\n", isUnique(nonUniqueChars, 8));
  }
    
  {
    char uniqueChars[6] = {'a', 'b', 'c', 'd', 'f', 'g'};
    printf("should be true %d\n", isUnique(uniqueChars, 6));
  }
  
  {
    char uniqueChars[8] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i'};
    printf("should be true %d\n", isUnique(uniqueChars, 8));
  }
  
  return 0;
}