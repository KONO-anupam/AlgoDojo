#include<bits/stdc++.h>
using namespace std;

//Worst force->sort given array, make a copy of it, check each element with original array
bool isSortedByCopying(vector<int>& arr) {
    vector<int> sortedArr = arr;        
    sort(sortedArr.begin(), sortedArr.end());  

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != sortedArr[i]) {
            return false;  
        }
    }

    return true;  
}
//T.C=o(nlogn+n) S.C=o(n)

//Brute Force->start with 0th index, then iterate through future element to check if any element is smaller or equal  using nested traversal
bool isSorted(vector<int>& arr, int n){
    int flag=1;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]>arr[j]){
                flag=0;
            }
        }
    }

    return (flag==1)?true:false;
}
//T.C=0(n^2) S.C=o(1)

//Optimal->Same logic but single traversal through the array
bool thisSorted(vector<int>& arr, int n){
    int flag=1;
    for(int i=1;i<n;i++){
     if(arr[i-1]>arr[i]){
        flag=0;
     }
    }

    return (flag==1)?true:false;
}
int main(){
    vector<int> arr1={1,2,3};

    cout<<thisSorted(arr1,arr1.size());
}
//T.C=o(n) S.C=o(1)