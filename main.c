// Srujan Borkar 21070123073 DSC Expert Lecture Day 2 Searching and Sorting Methods

#include <stdio.h>

void BubbleSort(int array[], int n) {
    int passes, comp, i, j, w;
    passes = n - 1;
    comp = n - 1;
    for (i = 0; i < passes; i++) {
        for (j = 0; j < comp - i; j++) {
            if (array[j] > array[j + 1]) {
                w = array[j];
                array[j] = array[j + 1];
                array[j + 1] = w;


            }
        }
    }
    printf("Elements of sorted array are:%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
}
void InsertionSort(int array[], int n) // We consider an index to be i, then i-1 to be j. 
{
    int i, j, small;
    for(i=1; i<n; i++)
    {
        small = array[i];
                for (j =i-1;j>=0 && small<array[j]; j--)
                {
                        array[j+1]=array[j];
                }
                array[j+1]= small;
    }printf("Elements of sorted array are:%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
}

void SelectionSort(int array[], int n) // We assume one position to have the smallest value, then compare with the rest through the loop. If a smaller number is encountered, it becomes the smallest. It will loop through until i is smallest.
{
    int i, j, smallest, temp;
    for (i = 0; i< n-1; i++)
    {
        smallest = i;
        for(j=i+1; j<n; j++ )
        {
            if (array[smallest]>array[j])
            smallest = j;
        }
        if(i != smallest){
            temp = array[i];
            array[i]= array[smallest];
            array[smallest]= temp;
        }
    }printf("Elements of sorted array are:%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
}
int BinSearch(int array[],int n, int x) {
    int lower=0 , upper=n-1 , mid;
    while (lower <= upper){
        mid = (lower+upper)/2;
        if (array[mid] == x)
            return mid;
        if (array[mid]<x)
            lower = mid+1;
        else
            upper = mid+1;
    }
    printf("found at:  %d", mid);
}
int main() {
    int arr[5]={34,21,14,15,54};
    BubbleSort(arr, 5);
    SelectionSort(arr, 5);
    InsertionSort(arr, 5);
    BinSearch(arr, 5, 34);
    return 0;
}
