//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // code here
        int count1 = 0, count2 = 0, count0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count1++;
            else if (a[i] == 2)
                count2++;
            else
                count0++;
        }
        int index = 0;
        for (int i = 0; i < count0; i++)
        {
            a[index] = 0;
            index++;
        }
        for (int i = 0; i < count1; i++)
        {
            a[index] = 1;
            index++;
        }
        for (int i = 0; i < count2; i++)
        {
            a[index] = 2;
            index++;
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends




// Sort an array of 0s, 1s and 2s

// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


// Example 1:

// Input: 
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.
// Example 2:

// Input: 
// N = 3
// arr[] = {0 1 0}
// Output:
// 0 0 1
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 <= N <= 10^6
// 0 <= A[i] <= 2