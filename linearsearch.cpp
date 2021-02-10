# include <iostream>
using namespace std;

void  linearsearch(int a[5],int n)
{ int temp=-1;

for(int i=0;i<5;i++){

	if(a[i]==n){
	cout<<"found"<<i;
	temp=0;
	}
}
	
	
	if(temp=-1){
			cout<<"not found";
	}

	
}



 
 int main()
 {
 	 int arr[5]={34,567,65,34,67};
     int num;
 	cin>>num;
 	
 	linearsearch(arr,num);
 	return 0;
 }


 
