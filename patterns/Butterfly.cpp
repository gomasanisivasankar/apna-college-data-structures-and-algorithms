#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*"<<ends;
		}
		int space=2*n-2*i;
		for(int j=1;j<=space;j++){
			cout<<" "<<ends;
		}
		for(int j=1;j<=i;j++){
			cout<<"*"<<ends;
		}
		cout<<endl;
	}
	//reverse of above is
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*"<<ends;
		}
		int space=2*n-2*i;
		for(int j=1;j<=space;j++){
			cout<<" "<<ends;
		}
		for(int j=1;j<=i;j++){
			cout<<"*"<<ends;
		}
		cout<<endl;
	}
}
