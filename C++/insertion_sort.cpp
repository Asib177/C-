#include <iostream>
using namespace std;

void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
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
    int n;
    cout << "Input array size: ";
    cin >> n;
    int array[n];
    cout << "Input array element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    insertionSort(array, n);
    cout << "Sorted array: ";
    printArray(array, n);
    cout << endl;
    main();
    return 0;
}