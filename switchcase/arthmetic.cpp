#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the number:";
    cin>>n1>>n2;
    char op;
    cout<<"enter the operator:";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"sum of numbers:"<<n1+n2;
        break;
    case '-':
        cout<<"subtration of numbers:"<<n1-n2;
    default:
        cout<<"The Given input is not an operator";
        break;
    }

}