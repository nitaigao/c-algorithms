#include <string>
#include <sstream>

bool isRotated(const std::string& s1, const std::string& s2) {
  std::stringstream concatenatedStream;
  concatenatedStream << s2 << s2;
  bool result = concatenatedStream.str().find(s1) != std::string::npos;
  return result;
}

int main() {
  {
    bool result = isRotated("waterbottle", "erbottlewat");
    std::clog << "should be true " << result << std::endl;
  }
  
  {
    bool result = isRotated("bah", "humbug");
    std::clog << "should be false " << result << std::endl;
  }
  
  {
    bool result = isRotated("bahmya", "humbug");
    std::clog << "should be false " << result << std::endl;
  }

  return 0;
}