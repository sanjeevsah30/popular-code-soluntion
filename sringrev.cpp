#include<iostream>
#include<cstring>
using namespace std;

string sort(string str,int size){
	
	char temp;
	for(int i=0;i<size;i++){
	for(int j=i+1;j<size;j++){
		if(str[i]>str[j]){
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
		}
	}
}
return str;
}

int main(){
	
string str;
string str1;
int size;
cin>>size;
int size1;
cin>>size1;

for(int i=0;i<size;i++){
	cin>>str[i];
}
for(int i=0;i<size1;i++){
	cin>>str1[i];
}
if(size1!=size){
	cout<<"not a anagram";
}
int flag=0;
sort(str,size);
sort(str1,size1);
cout<<"after sorting";
for(int i=0;i<size;i++){
	if(str[i]!=str1[i]){
		flag=1;
		break;
	}
	else
	continue;
	
}
if(flag==0){
	cout<<"its a anagram";
}
else
cout<<"not a anagram";

	return 0;
}
