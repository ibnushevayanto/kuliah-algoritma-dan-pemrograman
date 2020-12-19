#include <iostream> 
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void sortingKebawah(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] < arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++) cout << arr[i] << " "; 
}  
  
int main()  
{  
    int arr[] = {10, 40, 20, 60, 15, 4, 8, 100, 200, 25};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    
    cout<<"Before : {10, 40, 20, 60, 15, 4, 8, 100, 200, 25}"<<endl;;
    
    sortingKebawah(arr, n);  
    
    cout<<"After : {";  
    printArray(arr, n);
	cout<<"}";  
    return 0;  
}  
