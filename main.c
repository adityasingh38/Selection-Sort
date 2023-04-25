// implementing selection sort

#include <stdio.h>

void SelectionSort(int a[], int n);

int main()
{
    int arr[5] = {56, 17, 9, 32, 7};
    int i;

    printf("Available array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    // sorting the given array
    SelectionSort(arr, 5);

    printf("Sorted array (Selection Sort):\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// selection sort
void SelectionSort(int a[], int n)
{
    int smallest_index;
    int temp;
    int i, j;

    for(i = 0; i < n - 1; i++)
    {
        // storing the smallest index in the variable named 'smallest' (assumed to be 1)
        smallest_index = i;

        for(j = i + 1; j < n; j++)
        {
            // checking the element at the index after i; if smaller than smallest then smallest index = index of next element
            if(a[smallest_index] > a[j])
            {
                smallest_index = j;
            }
        }

        // if the smallest element is not at index i, switching the two index values
        if(i != smallest_index)
        {
            temp = a[i];
            a[i] = a[smallest_index];
            a[smallest_index] = temp;
        }
    }
}
