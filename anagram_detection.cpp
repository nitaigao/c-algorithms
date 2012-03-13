
#ifdef __GNUC__
#include <ext/hash_map>
#else
#include <hash_map>
#endif

namespace std {
  using namespace __gnu_cxx;
}

bool isAnagram(char* a, int aSize, char* b, int bSize) {
  std::hash_map<char, int> charAMap;
  
  for (int i = 0; i < aSize; i++) {
    char character = a[i];
    charAMap[character] += 1;
  }
  
  std::hash_map<char, int> charBMap;
  
  for (int i = 0; i < bSize; i++) {
    char character = b[i];
    charBMap[character] += 1;
  }
  
  for (std::hash_map<char, int>::iterator i = charAMap.begin(); i != charAMap.end(); ++i) {
    char character = (*i).first;
    if ((*i).second != charBMap[character]) {
      return false;
    }
  }
  
  
  return true;  
}

int main() {  
  {
    char stringA[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char stringB[6] = {'e', 'h', 'l', 'o', 'l', '\0'};
    
    bool result = isAnagram(stringA, 6, stringB, 6);
    printf("should be true %d\n", result);
  }
  
  {
    char stringA[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char stringB[5] = {'h', 'l', 'o', 'l', '\0'};
    
    bool result = isAnagram(stringA, 6, stringB, 5);
    printf("should be false %d\n", result);
  }
  
  {
    char stringA[6] = {'n', 'o', 'r', 's', ' ', '\0'};
    char stringB[6] = {'s', ' ', 'r', 'n', 'o', '\0'};
    
    bool result = isAnagram(stringA, 6, stringB, 6);
    printf("should be true %d\n", result);
  }
  
  return 0;
}