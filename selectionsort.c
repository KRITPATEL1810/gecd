#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n) {
  int i, j, min_idx;

  // One by one move boundary of unsorted subarray
  for (i = 0; i < n-1; i++) {
    // Find the minimum element in unsorted subarray
    min_idx = i;
    for (j = i+1; j < n; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    // Swap the found minimum element with the first element
    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }
}

// Driver code to test above
int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  selectionSort(arr, n);
  printf("Sorted array: ");
  for (int i=0; i<n; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}