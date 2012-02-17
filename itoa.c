void reverse(char* array, int b) {
  int a = 0;
  for (; a < --b ; a++) {
    char temp = array[a];
    array[a] = array[b];
    array[b] = temp;
  }
}

void itoa(int number, char* output) {
  int index = 0;
  while(number != 0) {
    char n = number % 10;
    char c = n + 48;
    number /= 10;
    output[index++] = c;
  }
  reverse(output, index);
}

int main() {
  char output[6] = {0};
  itoa(12345, output);
  printf("%s\n", output);
  return 0;	
}