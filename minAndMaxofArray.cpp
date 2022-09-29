// Find minimum and maximum element in an array
// Given an array A of size N of integers. 
// Your task is to find the minimum and maximum elements in the array.

 

// Example 1:

// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output:
// min = 1, max =  10000
 

// Example 2:

// Input:
// N = 5
// A[]  = {1, 345, 234, 21, 56789}
// Output:
// min = 1, max = 56789
 

// Your Task:  
// You don't need to read input or print anything. 
// Your task is to complete the function getMinMax() which takes the array A[] and its size N as 
// inputs and returns the minimum and maximum element of the array.

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n);
    pair<long long, long long> p1;
    p1.first=a[0];
    p1.second=a[n-1];
    return p1;
}

// tc o(nlogn)