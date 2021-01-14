#include <iostream> 
using namespace std; 
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
int main()  
{  

    cout << "\nItem Array :\n{10, 3, 2, 9, 1, 6, 18}\n";
    int arr[] = {10, 3, 2, 9, 1, 6, 18};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"\nSetelah di Sorted: \n";  
    printArray(arr, n);  
    return 0;  
}  