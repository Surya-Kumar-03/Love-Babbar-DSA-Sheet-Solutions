//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void segregateElements(int arr[], int n)
    {
        // Your code goes here
        int a[n] = {0}, aIndex = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                a[aIndex] = arr[i];
                aIndex++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                a[aIndex] = arr[i];
                aIndex++;
            }
        }
        //use this as well memcpy(arr,a,sizeof(a));
        for (int i = 0; i < n; i++)
        {
            arr[i] = a[i];
        }
    }
};

//{ Driver Code Starts.
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        ob.segregateElements(a, n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

// } Driver Code Ends

// Move all negative elements to end
// EasyAccuracy: 50.06%Submissions: 51393Points: 2
// Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

 

// Example 1:

// Input : 
// N = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output : 
// 1  3  2  11  6  -1  -7  -5

// Example 2:

// Input : 
// N=8
// arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
// Output :
// 7  9  10  11  -5  -3  -4  -1
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function segregateElements() which takes the array arr[] and its size N as inputs and store the answer in the array arr[] itself.

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)