#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	 int pos;
        if(k>arr[n-1]){
            pos=n-1;
        }
        if(k<arr[0]){
            pos=-1;
        }
        for(int i = 0; i<n; i++){
          if(arr[i]>k){
              pos=i-1;
              break;
               }
           }
         
	cout<<pos;
	
return 0;
}
