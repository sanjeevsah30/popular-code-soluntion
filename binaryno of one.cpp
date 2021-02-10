#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n){
       int count=1;
       int left=0;
       int right=n;
       while(left<right){
         int mid=(left+right)/2;
           if(arr[mid]==1){
               count++;
           }
            if(arr[mid]<1){
               right=mid-1;;
           } if(arr[mid]==1){
               left=mid+1;
           }
       }
        return count;
    }
int main(){
	int n ;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int ans =BinarySearch(arr,n);
	cout<<ans;
	
	
	
	return 0;
}
