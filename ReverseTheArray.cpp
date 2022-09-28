#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int n;
        cin >> n;
        int *array = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Time Complexity= o(n), Space Complexity = o(1)
// if expected to return in same array, use swapping