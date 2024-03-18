#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int data)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (data == arr[mid])
            return mid;
        else if (data < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}

int main()
{
    int n;
    cout << "Input array size: ";
    cin >> n;
    int arr[n];
    // Input array
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cout << "Input search data: ";
    cin >> data;
    int flag = binarySearch(arr, n, data);
    // cout << flag << endl;
    if (flag == -1)
        cout << "Deta is not present!" << endl;
    else
        cout << "Data is present in index: " << flag << endl;
    main();
    return 0;
}
