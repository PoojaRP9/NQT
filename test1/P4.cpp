#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        num*=i;
        
    }
    return num;
}

int main(){
    int n=5;
    cout<<fact(n);
}