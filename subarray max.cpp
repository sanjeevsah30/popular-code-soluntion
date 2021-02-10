#include <bits/stdc++.h>
using namespace std;
 
// Method to find the maximum for each 
// and every contiguous subarray of size k.
void printKMax(int arr[], int n, int k) 
{ 
    int j, max; 
 
    for (int i = 0; i <= n - k; i++) 
    { 
        max = arr[i]; 
 
        for (j = 1; j < k; j++) 
        { 
            if (arr[i + j] > max) 
                max = arr[i + j]; 
        } 
        cout << max << " "; 
    } 
} 
 
// Driver code
int main() 
{ int n,k;
cin>>n;
    int arr[n];  
    cin>>k; 
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    printKMax(arr, n, k); 
    return 0; 
}
