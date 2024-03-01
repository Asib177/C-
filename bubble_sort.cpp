#include <iostream>
using namespace std;

void bubbleSort(int array[], int n)
{
    int count = 0;
    int loop = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int found = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                found = 1;
                count++;
            }
        }
        if (found == 0)
        {
            break;
        }
        loop++;
    }
    cout << "The number of swaping: " << count << endl;
    cout << "The number of loop running: " << loop << endl;
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    // int arr[] = {-2, 45, 0, 11, -9};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int n = sizeof(arr) / sizeof(int);
    int n;
    cout << "Input array size: ";
    cin >> n;
    int array[n];
    cout << "Input array element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    bubbleSort(array, n);
    cout << "Sorted Array: ";
    printArray(array, n);
    return 0;
}
