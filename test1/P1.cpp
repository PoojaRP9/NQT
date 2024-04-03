#include<bits/stdc++.h>
using namespace std;

int sortarr( vector<int> & arr){

    sort(arr.begin(),arr.end());
    return arr[0];
}

int main(){
    vector<int> arr={7, 4, 9, 2, 5};
   
   cout<<"The smallest number in this array is "<<sortarr(arr);
}