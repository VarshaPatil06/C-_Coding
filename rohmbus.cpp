#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        for(int j=4; j>=0;j--)
        {
            cout<<'_';
            for(int k=1; k<=n; k++)
        {
            cout<<'*'<<' ';
        }
          
        }

        cout<<endl;
    }

}
       