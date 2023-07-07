#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    int swaps[n]; //Array to store the number of swaps for each index

    //Initialize the swaps array with 0
    for(i = 0; i < n; i++)
    {
        swaps[i] = 0;
    }

    //Iterate over the array
    for(i = 0; i < n-1; i++)
    {
        //Compare adjacent elemetns and swap if necessary
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j + 1]) 
            {
                //Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[j]++; //Increment the number of swaps for index j
            }
        }
    }

    //Output the number of swaps for each index
    for(i = 0; i < n; i++)
    {
        printf("Number of swaps for index %d: %d\n", i, swaps[i]);
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    return 0;
}