#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int data)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            return i;
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        return -1;
    }

    return 0;
}

int main()
{
    int n;
    // Input Array size
    cout << "Input array size: ";
    cin >> n;
    int arr[n];
    // Array Input
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    // Input searching value
    cout << "Input data value: ";
    cin >> data;
    // call linear search function
    int flag = linearSearch(arr, n, data);
    if (flag == -1)
        cout << "Not Found!" << endl;
    else
        cout << "Element found at index: " << flag << endl;
    main();
    return 0;
}
