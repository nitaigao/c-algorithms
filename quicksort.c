/*
  QuickSort: Useful for incredibly large datasets
*/

void quicksort(int* array) {
  // todo
}

int main() {
  const int NUMBERS_SIZE = 20;
  int numbers[] = {9, 6, 5, 4, 3, 2, 1, 4, 9, 10, 100, 67, 43, 213, 1, 23, 5, 3, 0, 12};
  
  quicksort(numbers);
  
  int i = 0;
  for (; i < NUMBERS_SIZE; i++) {
    printf("%d", numbers[i]);
    if (i+1 < NUMBERS_SIZE) { printf(","); }
  }
  return 0;
}