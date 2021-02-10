
using namespace std;


int main()

{
	char ch='A';
	int i,j,k,l;
	for(i=1;i<=5;i++){
		
		for(j=5;j>=i;j--)
		 cout<<" ";
			
		
		
				for(l=1;l<=i;l++)
					cout<<ch++;
					ch--;
				
				for(l=i-1;l>=1;l--)
					cout<<ch--;
					
				ch ='A';	
					
				
				
			
		
			
	cout<<endl;	
	}
return 0;

}
