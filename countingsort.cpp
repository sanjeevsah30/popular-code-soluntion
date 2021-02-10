#include<iostream>
using namespace std;


 int partition(int array[],int s,int e)
 {
	
	int pivot =array[e];
	int pindex =s;
	for(int i=s;i<e;i++)
	{
		if(array[i]<pivot)
		{
			int temp;
			temp =array[i];
			array[i]=array[pindex];
			array[pindex]=temp;
			pindex++;
			
			
			
		}
	}
	int temp1;
			temp1 =array[e];
			array[e]=array[pindex];
			array[pindex]=temp1;
			
			return pindex;
	
}


void quickSort(int array[],int s,int e)
{ 
	
	if(s<e)
	{
		int p = partition(array,s,e);
				quickSort(array,s,(p-1));

  quickSort(array,(p+1),e);	
		
	}
}

     	

int main()
{
 
 int size=0;
 cout<<"Enter Size of array: "<<endl;
 cin>>size;
 int myarray[size];
 
 cout<<"Enter "<<size<<" integers in any order: "<<endl;
 for(int i=0;i<size;i++)
 {
 cin>>myarray[i];
 }
 cout<<"Before Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 cout<<endl;
 
 quickSort(myarray,0,(size-1));  // quick sort called
 
 cout<<"After Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 
 return 0;
}



