//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++

void rotate(int arr[], int n)
{
    // two pointers
    for (int j = 0, k = n - 1; j < n - 1; j++)
    {
        // swap
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    }
}


// Cyclically rotate an array by one
// BasicAccuracy: 64.05%Submissions: 100k+Points: 1
// Given an array, rotate the array by one position in clock-wise direction.
 

// Example 1:

// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4
 

// Example 2:

// Input:
// N = 8
// A[] = {9, 8, 7, 6, 4, 2, 1, 3}
// Output:
// 3 9 8 7 6 4 2 1
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function rotate() which takes the array A[] and its size N as inputs and modify the array in place.

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1<=N<=105
// 0<=a[i]<=105