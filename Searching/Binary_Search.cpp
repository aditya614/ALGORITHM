C++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int start,int k,int end){

while(start<=end){
int mid=start+ (end-start)/2;
if(k==arr[mid])
return mid;


 if(arr[mid]<k)
start=mid+1;

else
end=mid-1;

}

return -1;
}

int main(){


int arr[]={1,2,3,4,5,6,7,8,9};
int k=7;
int n=sizeof(arr)/sizeof(arr[0]);
int result=binarySearch(arr,0,k,n-1);
(result==-1) ? cout<<"element is not preent"  :  cout<<"element is present"<<result;

return 0;
}
