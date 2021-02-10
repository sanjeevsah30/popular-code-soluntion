#include<iostream>


using namespace std;
int findmin(int arr[],int left,int right){
if(arr[right]>arr[left])
	return arr[0];
	if(left==right)
		return arr[left];
	
			int mid=left+(right-left)/2;
			
			if(mid>left&&arr[mid]<arr[mid-1])
			return arr[mid];
			else if(arr[left]<=arr[mid]&&arr[mid]>arr[right]){
				return arr[mid+1];
			}
		
			
		if(arr[right]>mid){
			return findmin(arr,left,mid-1);
		}
		else
		return findmin(arr,mid+1,right);
	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int ans =findmin(arr,0,n-1);
	cout<<ans;
	return 0;
	
}
