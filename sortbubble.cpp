#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int flag=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				flag=1;
			}
			if(flag==0)
		}
		
		
	}
	
	for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
	}	
	return 0;
}
