#include<iostream>
using namespace std;

int main()
{
    char op;
    float a, b;
    cout<<"Enter the 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter the operator"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;

                case '-':
        cout<<a-b<<endl;
        break;

                case '*':
        cout<<a*b<<endl;
        break;

                case '/':
        cout<<float(a/b)<<endl;
        break;
        
    default:
    cout<<"You have enterd wrong operator!";
    break;

    }  
}