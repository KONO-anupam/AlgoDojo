#include <bits/stdc++.h>
using namespace std;

vector<int> leftShift(vector<int> arr,int d){
    int n= arr.size();
    vector<int> temp(n);
    for (int i=0;i<n;i++){
        temp[i]=arr[(n-d+i)%n];
    }
    return temp;
}
int main(){
    vector<int> arr1={1,2,3,4,5,5,6};
    vector<int> ans=leftShift(arr1,3);
    for (int num : ans){
       cout << num<< " ";
    }
    cout << endl;
    return 0;

}