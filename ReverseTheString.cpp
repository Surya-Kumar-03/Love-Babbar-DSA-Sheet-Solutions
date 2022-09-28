string reverseWord(string str)
{
    // Your code here
    int size = str.length(); //  using .length() function or run a loop till '\0'
    for (int i = size - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}

//TC o(n), SC o(1) use swap to change in original string 