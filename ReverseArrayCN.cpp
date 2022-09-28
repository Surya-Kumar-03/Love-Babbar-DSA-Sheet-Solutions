#include <iostream>
using namespace std;
int main()
{
    // Write your code here.

    int size, index;
    cin >> size >> index;
    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = index, j = size - 1; i < j; i++)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}

// Reverse Array from a Certain Index