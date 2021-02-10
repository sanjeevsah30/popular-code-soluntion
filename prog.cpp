#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r){
	int temp[r-l+1];
	int j=m+1;
	int k=0;
	int i=l;
	while(i<=m&&j<=r){
		if(arr[i]<arr[j])
		{
			temp[k]=arr[i];
				k++;
			i++;
		
		}
		else
		{
			temp[k]=arr[j];
				k++;
			j++;
		
		}
	}
	while(i<=m){
			temp[k]=arr[i];
			k++;
			i++;
			
	}
	while(j<=r){
			temp[k]=arr[j];
			j++;
			k++;
	}
	
for(int p=0;p<r-l+1;p++){

        arr[p+l]=temp[p];
    }
}


void mergesort(int arr[],int l,int r)
{
	int m;
	if(l<r)
	{
	m=(l+r)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
    }
}



int main(){
	int n ;
	cin>>n;
	int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout <<"before sorting";
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	mergesort(arr,0,n-1);
	
		cout<<endl<<"sorted data is:  ";
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		
	return 0;
}
