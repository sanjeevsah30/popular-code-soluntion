#include<iostream>
using namespace std;
int main(){
  int n1=0,n2=1,n3,i,j,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 for(i=0;i<number;i++){
 	    
 for(j=2;j<i;++j) //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 } 
 cout<<endl;
 }
  
	return 0;
}
