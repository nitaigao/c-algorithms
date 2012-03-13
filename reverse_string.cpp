void reverse(char* string, int size) {
  for (int i = 0; i < size; i++) {
    int j = size - 2 - i;
    if (j < i) break;
    char temp = string[j];
    string[j] = string[i];
    string[i] = temp;
  }
}

int main() {  
  {
    char string[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    reverse(string, 6);
    printf("%s\n", string);
  }
  
  {
    char string[11] = {'r', 'e', 'v', 'e', 'r', 's', 'e', ' ', 'm', 'e', '\0'};
    reverse(string, 11);
    printf("%s\n", string);
  }

  return 0;
}