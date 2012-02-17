void reverse(int* array, int b) {
  int a = 0;
  for (; a < --b ; a++) {
    char temp = array[a];
    array[a] = array[b];
    array[b] = temp;
  }
}

int main() {
  int numbers[] = {7, 5, 6, 4, 6, 5};
  reverse(numbers, 6);
  int i = 0;
  for (;i < 6;) {
    printf("%d", numbers[i++]);  
  }
  return 0;	
}