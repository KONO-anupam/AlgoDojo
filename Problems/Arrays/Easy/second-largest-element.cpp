#include<bits/stdc++.h>
using namespace std;

//Brute force->sort the array
//T.C=o(nlogn) S.C=o(n)

//Better->traverse array twice, once to find the largest, second to find the second largest
//T.C=o(2n) S.C=o(1)

//Optimal->traversing the array once, using four variables

int secMax(vector<int>& arr,int n){
    int max=INT_MIN; 
    int secMax=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>max){
        secMax=max;
        max=arr[i];
    }

    else if(arr[i]>secMax && secMax!=max){
        secMax=arr[i];
    }
}

return (secMax==INT_MIN)?-1:secMax;
} 

int main(){
    vector<int> arr1={1,2,34,56,74,3,6};
    cout<<"the second largest element is:"<<secMax(arr1,arr1.size());

    return 0;
}