#include<bits/stdc++.h>
using namespace std;

void mergeArray(int a[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Left array copy
    for(int i = 0; i < n1; i++)
    {
        L[i] = a[left + i];
    }

    // Right array copy
    for(int i = 0; i < n2; i++)
    {
        R[i] = a[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    // Merge
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Remaining elements
    while(i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        mergeArray(a, left, mid, right);
    }
}

int main()
{
    int a[] = {5, 2, 4, 1, 3};

    int size = 5;

    cout << "Before sorting: ";

    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    mergeSort(a, 0, size - 1);

    cout << endl;

    cout << "After sorting: ";

    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
