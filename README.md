
# Selection Sort

Selection sort is a simple sorting algorithm that works by repeatedly selecting the smallest element from the unsorted portion of an array and moving it to the front.

The step-by-step process for selection sort is given below:

1. Find the minimum element in the unsorted part of the array.
2. Swap the minimum element with the first element in the unsorted part of the array.
3. Move the boundary of the sorted part of the array one position to the right.
4. Repeat steps 1-3 until the entire array is sorted.

![selectionsortnew](https://user-images.githubusercontent.com/88421625/234419146-a05cc7ad-4951-4a22-95c7-22cec9a3227f.png)


Here is an implementation of selection sort in C:
```bash
#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, min_idx, temp;
    
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selection_sort(arr, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```
In this implementation, the 'selection_sort' function takes an integer array 'arr' and its length 'n' as inputs. It uses two nested loops to iterate over the elements of the array and find the minimum element in the unsorted portion of the array. It then swaps this element with the first element of the unsorted portion of the array. This process is repeated until the entire array is sorted.

In the main function, we create an integer array 'arr' and call the 'selection_sort' function to sort it. We then print the sorted array using a for loop.
## Key Points
Here are some important points about Selection Sort:

•	The algorithm consists of two nested loops. The outer loop iterates over the elements of the array, while the inner loop finds the smallest element in the unsorted portion of the array.

•	After finding the smallest element, the algorithm swaps it with the first element of the unsorted portion of the array. This effectively moves the smallest element to the front of the array.

•	This process is repeated until the entire array is sorted. At each iteration of the outer loop, the sorted portion of the array grows by one element.

•	Selection sort has a worst-case time complexity of O(n^2), where n is the size of the array. This means that the algorithm is not efficient for large arrays.

•	However, selection sort has some advantages over other sorting algorithms in certain situations. For example, it requires only a small amount of additional memory to sort an array in place, and it is relatively easy to implement and understand.

•	When implementing selection sort in C, it is important to be careful about array indexing and to use temporary variables for swapping elements. It is also a good practice to test the algorithm on a variety of input sizes and types to ensure that it works correctly.




# Code

```bash
// implementing selection sort

#include <stdio.h>

void SelectionSort(int a[], int n);

int main()
{
    int arr[5] = {50, 7, 19, 321, 1};
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
```
## Output

![Screenshot 2023-04-26 040453](https://user-images.githubusercontent.com/88421625/234419108-6544bebb-e280-4af0-aa5f-7f69449f9108.png)
