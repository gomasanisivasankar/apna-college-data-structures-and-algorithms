#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cout<<"Enter the binary number:";
	cin>>n;
	int Decimal=0,i=0;
	while(n>0){
		int remainder=n%10;
		Decimal=Decimal+remainder*pow(2,i);
		n=n/10;
		i++;
						
	}
	cout<<"Decimal number:"<<Decimal;
	
	
}



