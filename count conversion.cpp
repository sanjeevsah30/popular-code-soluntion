#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int count=0;
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-1-i;j++ ){
			if(arr[j]>arr[j+1]){
			
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				count++;
				flag=1;
				 
			}
		}
		if(flag==0){
			break;
		}
		
	}
	cout<<count;
	return 0;
}
