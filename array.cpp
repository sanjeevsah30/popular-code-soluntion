#include<iostream>
using namespace std;

structure stack {
	private:int arr[5];
	int top;
	
	public:
		stack()
		{top=-1;
		
		for(int i=0;i++;i<5)
		{
			arr[i]=0;
		}
		}
		
		bool isempty()
		{
			if(top==-1)
			return true;
		else 
		return false;	
		}
		
		bool isfull(){
			if(top==4)
			return true;
			else 
			return false;
		}
		
		void push(int val)
		{
		
		if(isfull())
		cout<<"stack is full";
		else
		{
		
			top++;
			arr[top]=val;
	
		}
	}
	
  int pop()
  {
  	if(isempty())
  	cout<<"stack is empty";
  	else
  	int pop value = arr top;
  	top--;
  	
}


void display(){
	cout<<"all value of stack is:"<<endl;
	for(int i ;i++;i<5){
		
		cout<<arr[i]<<endl;
	}
}

int count()
{
	return(top+1);
	
}

void change(int val,int pos)
{
	arr[pos]= val;
	cout<<"value is changed ";
	 
}
};

int main()
{
	stack s1;
	int option,pos ,val;
	
	cin>>option;
	
	do{
		switch(option){
			case 1:s1.push(val)<<endl;
			break;
			case 2:s1.pop()<<endl;
			case 3:s1.display()<<endl;
		}
		
		
	}
	
	while(option!=0)
	

	
}
