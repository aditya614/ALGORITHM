C++

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int LinearSearch(vector<int>&arr,int n){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==n){
            return true;
            break;
            }
            else{
                continue;
            }
        }
        return false;
    }
};
int main()
{
    solution obj;
    int n=8;
    vector<int> arr{2,5,3,7,9};
    cout<<obj.LinearSearch(arr,n)<<endl;

    return 0;
}
