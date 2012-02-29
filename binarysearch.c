/*
  Binary Search: Very fast search if list is sorted
*/

#include <math.h>

int binarysearch(int searchNumber, int* array, int startIndex, int count) {
  int midpoint = startIndex + count;
  // if the number is equal to the item at the midpoint then we found it
  if (searchNumber == array[midpoint]) { return 1; }
 
  // if there is no where to go from here ie. top of the array, we didnt find it
  if (count == 0) return 0;
  
  // if the number is less than the item at the midpoint then search again from the beginning to the midpoint
  if (searchNumber < array[midpoint]) {
    return binarysearch(searchNumber, array, 0, floor(count / 2.0f));
  }
  
  // if the number is greater than the item at the midpoint then search again starting from the midpoint
  if (searchNumber > array[midpoint]) {
    return binarysearch(searchNumber, array, midpoint, ceil(count / 2.0f));
  }
  
  return 0;
}

void findsLargest() {
  const int NUMBERS_SIZE = 9;
  int numbers[] = {1, 2, 4, 8, 200, 500, 501, 1001, 1002};
  int searchNumber = 1002;
  
  int result = binarysearch(searchNumber, numbers, 0, ceil(NUMBERS_SIZE/2.0f));
  
  printf("%d", result == 1);  
}

void notfindLarger() {
  const int NUMBERS_SIZE = 9;
  int numbers[] = {1, 2, 4, 8, 200, 500, 501, 1001, 1002};
  int searchNumber = 1004;
  
  int result = binarysearch(searchNumber, numbers, 0, ceil(NUMBERS_SIZE/2.0f));
  
  printf("%d", result == 0);  
}

void findsSmallest() {
  const int NUMBERS_SIZE = 9;
  int numbers[] = {1, 2, 4, 8, 200, 500, 501, 1001, 1002};
  int searchNumber = 1;
  
  int result = binarysearch(searchNumber, numbers, 0, ceil(NUMBERS_SIZE/2.0f));
  
  printf("%d", result == 1);  
}

void notfindSmaller() {
  const int NUMBERS_SIZE = 9;
  int numbers[] = {1, 2, 4, 8, 200, 500, 501, 1001, 1002};
  int searchNumber = 0;
  
  int result = binarysearch(searchNumber, numbers, 0, ceil(NUMBERS_SIZE/2.0f));
  
  printf("%d", result == 0);    
}

void findMiddle() {
  const int NUMBERS_SIZE = 9;
  int numbers[] = {1, 2, 4, 8, 200, 500, 501, 1001, 1002};
  int searchNumber = 8;
  
  int result = binarysearch(searchNumber, numbers, 0, ceil(NUMBERS_SIZE/2.0f));
  
  printf("%d", result == 1);      
}

void findNotMiddle() {
  const int NUMBERS_SIZE = 9;
  int numbers[] = {1, 2, 4, 8, 200, 500, 501, 1001, 1002};
  int searchNumber = 7;
  
  int result = binarysearch(searchNumber, numbers, 0, ceil(NUMBERS_SIZE/2.0f));
  
  printf("%d", result == 0);      
}

int main() {
  findsLargest();
  notfindLarger();
  findsSmallest();
  notfindSmaller();
  findMiddle();
  findNotMiddle();
  
  return 0;
}