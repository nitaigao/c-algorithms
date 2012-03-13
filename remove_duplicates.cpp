void removeDuplicates(char* string, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (string[i] == string[j]) {
        for (int h = j + 1; h < size; h++) {
          string[h - 1] = string[h];
        }
      }
    }
  } 
}

int main() {
  {
    char string[3] = {'a', 'a', '\0'};
    removeDuplicates(string, 3);
    printf("%s\n", string);
  }
  
  {
    char string[4] = {'a', 'a', 'b', '\0'};
    removeDuplicates(string, 4);
    printf("%s\n", string);
  }
  
  {
    char string[7] = {'a', 'a', 'b', 'c', 'a', 'b', '\0'};
    removeDuplicates(string, 7);
    printf("%s\n", string);
  }
  
  return 0;
}