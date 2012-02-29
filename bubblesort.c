/*
  BubbleSort: Useful for small datasets and already sorted 
  datasets with small numbers of unsorted elements
*/

void bubblesort(int* array, int arraySize) {
  int i = 0;
  for (; i < arraySize; i++) {
    int j = i + 1;
    for (; j < arraySize; j++) {
      // if the this element is smaller than the next, switch them
      int item = array[i];
      int nextItem = array[j];
      if (item > nextItem) {
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }
}

int main() {
  const int NUMBERS_SIZE = 21;
  int numbers[] = {9, 6, 5, 4, 3, 2, 1, 4, 9, 10, 100, 67, 43, 213, 1, 23, 5, 3, 0, 12, -1};
  
  bubblesort(numbers, NUMBERS_SIZE);
  
  int i = 0;
  for (; i < NUMBERS_SIZE; i++) {
    printf("%d", numbers[i]);
    if (i + 1 < NUMBERS_SIZE) { printf(","); }
  }
  return 0;
}