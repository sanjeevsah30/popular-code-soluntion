#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	string res;
	int i=0;
	while(s[i]){
		if(s[i]!=s[i+1])
		res+=s[i];
		i++;
		if(s[i+1]&&s[i]==s[i+1]){
			while(s[i+1]&&s[i]==s[i+1])
			i++;
			i++;
		}
		
		
		
	}
	cout<<res;
	return 0;
	
}
