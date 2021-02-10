#include<iostream>
using namespace std;

int main(){
		int count =0;
	int arr[10];
	for(int i =0;i<10;i++){
		cin>>arr[i];
	}
	for(int i =0;i<9;i++)
{
	for(int j =i+1;j<10;j++){
		if(arr[i]>arr[j]){
			int temp;
			temp =arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	
	}
	for(int i =0;i<10;i++){
while(i<10){

	if(arr[i]==arr[i+1]){
		
		 count++;
		
	}
	
}
}
	cout<<count;
  
	return 0;
	
}
