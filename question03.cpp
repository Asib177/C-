#include <iostream>
using namespace std;

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

    int count = 0, k = 0;
    int assd[n];
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            count++;
            assd[k] = array[i];
            k++;
        }
    }
    int found = 0, l = 0;
    int diss[n];
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            found++;
            diss[l] = array[i];
            l++;
        }
    }

    for (int i = 0; i < count - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < count; j++)
        {
            if (assd[j] < assd[min])
            {
                min = j;
            }
            if (min != i)
            {
                swap(assd[i], assd[min]);
                // int temp = assd[min];
                // assd[min] = assd[i];
                // assd[i] = temp;
            }
        }
    }

    for (int i = 0; i < found - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < found; j++)
        {
            if (diss[j] > diss[min])
            {
                min = j;
            }
            if (min != i)
            {
                swap(diss[i], diss[min]);
                // int temp = assd[min];
                // assd[min] = assd[i];
                // assd[i] = temp;
            }
        }
    }

    cout << "Assending Array is: ";
    for (int i = 0; i < count; i++)
    {
        cout << assd[i] << " ";
    }
    cout << endl;
    cout << "Dissending Array is: ";
    for (int i = 0; i < found; i++)
    {
        cout << diss[i] << " ";
    }
    // cout << count;
    // cout << found;
    cout << endl;
    int farr[count + found];
    for (int i = 0; i < count; i++)
    {
        farr[i] = assd[i];
    }
    for (int i = 0; i < found; i++)
    {
        farr[i + count] = diss[i];
    }
    cout << "Finall Array is: ";
    for (int i = 0; i < (count + found); i++)
    {
        cout << farr[i] << " ";
    }
    cout << endl;
    main();
}