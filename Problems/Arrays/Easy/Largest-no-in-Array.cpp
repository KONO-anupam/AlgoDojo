#include<bits/stdc++.h>
using namespace std;


//Brute force->sort the Array and return last element
int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
//T.C=O(nlogn) S.C=O(n)

//Better->Recursive approach
int largestArr(vector <int>& array,int n){
    if(n==1){
        return array[0];
    }
    int max=largestArr(array,n-1);

    return (array[n-1]>max)?array[n-1]:max;

return largestArr(array,n-1);
}
//T.C=o(n), S.C=o(n)

//Optimal->Iterative approach
int largestArr(const vector<int>& array) {
    int maxElement = array[0];
    for (int i = 1; i < array.size(); ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    return maxElement;
}
//T.C=o(n), S.C=o(1)

int main(){
 vector<int> arr1={2,45,3,88,3,5,2,1,9,0};
 cout<<"The Largest Element in Array is:"<<largestArr(arr1, arr1.size());

 return 0;
}