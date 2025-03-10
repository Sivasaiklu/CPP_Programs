// prefix sum technique 

#include <bits/stdc++.h>
using namespace std;

int calcPrefixSum(int a[], int n){
    for(int i=0; i<n; i++){
        a[i] = a[i] + a[i-1];
    }
    return a[n-1];
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<calcPrefixSum(a, n);
    return 0;
}

// time complexity: O(n)

// logic

// for(int i=0; i<n; i++){
//     a[i] = a[i] + a[i-1];
// }