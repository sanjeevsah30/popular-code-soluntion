#include<iostream>
using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
} 
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}

void quicksort(int arr[],int low,int high){
	if(low<high){
	
	int p=partition(arr,low,high);
	quicksort(arr,low,p-1);
	quicksort(arr,p+1,high);
}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	quicksort(arr,0,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}

	return 0;
}
