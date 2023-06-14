PUT THE LARGEST ELEMENT AT THE END OF THE ARRAY
1. 2--45  0  11  9       2. 2--0  11  9  45     SORTED  
   2  45--0  11  9          0  2--11  9  45
   2  0  45--11  9          0  2  11--9  45
   2  0  11  45--9          0  2  9  11  45
   2  0  11  9  45



#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
for(int i=0;i<n;i++){
for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
}}}
}
// print array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}

int main(){
int arr[]={6,7,8,4,5,2,3,9};
int n=sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,n);
 printArray(arr, n);
 return 0;
}
