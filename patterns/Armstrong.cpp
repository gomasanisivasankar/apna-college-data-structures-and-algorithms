#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,count=0;
	cin>>n;
	int sum=0;
	m=n;
	int original=n;
	while(m>0){
		m/=10;
		count++;
	}
	//cout<<count;
	while(n>0){
		sum=sum+pow(n%10,count);
		n=n/10;
	}
	if(sum==original){
		cout<<"it is armstrong number";
	}
	else{
		cout<<"it is not a armstrong number";
	}
	
}
