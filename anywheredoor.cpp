#include<iostream>
using namespace std;
int main()
{
	int N,K;
	cin>>N;
	cin>>K;
	int time[N];
	for(int i=0;i<N;i++){
		cin>>time[i];
	}
	int ans=time[N-1];
	if(K+1<N){
		int gold=N-K;
	int sum=0;
	for(int i=0;i<gold;i++){
		sum=sum+time[i];
	}
	ans =max(ans,sum);
	}
	cout<<ans;
	return 0;
}
