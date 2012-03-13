char* replaceSpaces(char* string, int size) {
  // first pass, get the size of the final formatted string
  int formattedStringSize = 0;
  for (int i = 0; i < size; i++) {
    if (string[i] == ' ') {
      formattedStringSize += 3; //length of %20
    } else {
      formattedStringSize += 1; // length of a single character
    }
  }
  
  // second pass, fill the final formatting string, replacing ' ' for '%20'
  char* formattedString = new char[formattedStringSize];
  int formattedStringIndex = 0;
  
  for (int i = 0; i < size; i++) {
    if (string[i] == ' ') {
      strcpy(formattedString+formattedStringIndex, "%20");
      formattedStringIndex += 3;
    } else {
      formattedString[formattedStringIndex] = string[i];
      formattedStringIndex++;
    }
  }
  
  return formattedString;
}

int main() {
  {
    char string[4] = {'a', ' ', '1', '\0'};
    char* formattedString = replaceSpaces(string, 4);
    printf("%s\n", formattedString);
  }
  
  {
    char string[5] = {'a', ' ', ' ', '1', '\0'};
    char* formattedString = replaceSpaces(string, 5);
    printf("%s\n", formattedString);
  }
  
  {
    char string[5] = {' ', 'a', ' ', '1', '\0'};
    char* formattedString = replaceSpaces(string, 5);
    printf("%s\n", formattedString);
  }
  
  return 0;
}