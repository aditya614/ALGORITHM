Check the element of array put mallest at arr[0];
check again the element for mallest and put on arr[1]; and so on.


#include<iostream>
using namespace std;
// function to print an array
void printArray(int array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int n) {
  for (int step = 0; step < n - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < n; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(array[min_idx], array[step]);
  }
}




int main(){

int arr[]={5, 2, 7, 9, 5, 7, 3, 1, 6};
int n=sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,n);
printArray(arr,n);

return 0;
}
