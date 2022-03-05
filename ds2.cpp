#include<iostream>
using namespace std;
void printbinary(long long int n)
{
    long long int a=1,binary=0;
    long long int rem;
    while(n>0)
    {
        rem=n%2;
        binary=binary+rem*a;
        a=a*10;
        n=n/2;
    }
    cout<<binary;
}
int main()
{
	  long long int i,num;
        cin>>num;
        for(i=1;i<=num;i++)
        {
            printbinary(i);
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
