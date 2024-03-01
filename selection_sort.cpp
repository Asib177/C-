#include <iostream>
using namespace std;

void selectionSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
            if (min != i)
            {
                swap(array[i], array[min]);
                // int temp = array[min];
                // array[min] = array[i];
                // array[i] = temp;
            }
        }
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
    selectionSort(array, n);
    cout << "Sorted array: ";
    printArray(array, n);
    cout << endl;
    main();

    return 0;
}