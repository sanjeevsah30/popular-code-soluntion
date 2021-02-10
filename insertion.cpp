#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
	int i=l;
	int j=m+1;
	int k=1;
	int temp[5];
	while(i<=m&&j<=r){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
             i++;
			 k++;
			 			
		}
			else
			{
			temp[k]=arr[j];
             j++;
			 k++;
			 			
		}
	}
	while(i<=m){
		temp[k]=arr[i];
			i++;
		k++;
	
	}
	while(j<=r){
		temp[k]=arr[j];
		j++;
		k++;
	
	}
	for(int p=1;p<=r;p++){
		arr[p]=temp[p];
	}
}
void mergesort(int arr[],int l,int r){
if(l<r){
		int m =(l+r)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
}
}

int main(){
	
int size=5;

	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		
	}
		
		mergesort(arr,0,(size-1));
			for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		
	}
		
	
	return 0;
	 
}
