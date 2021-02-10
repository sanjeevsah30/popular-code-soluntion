#include<iostream>
#include<math.h>
using namespace std;
int sum_arr(float arr[], int n, int i)
        {   int sum=0;
            for(int j=0;j <n;j++){
                sum+=ceil(arr[j]/ i);
            }
            return sum;
        }
int main()

{
	int n,k;
	cin>>n>>k;
	float arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	  
	  }
	 
        
        
			
			 for(int i = 0; i<n; i++){
          if(sum_arr(arr,n,i)<=k){
              cout<<i;
          }
        } 
        
    
	return 0;
}
