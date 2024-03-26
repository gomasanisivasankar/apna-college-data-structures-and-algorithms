#include<iostream>
using namespace std;
int main()
{
	int n,reverse;
	cin>>n;
	while(n>0){
		int remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
		
	}
	cout<<"reverse of the number:"<<reverse;
}
