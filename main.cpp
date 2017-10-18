#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1,n2,b=0;
        cout<<"dati valori variabilelor:";
        cin>>n1>>n2;
        cout<<"radacina patrata a lui n1:"<<n1*n1<<'\n';
        cout<<"radacina patrata a lui n2:"<<n2*n2<<'\n';
        cout<<"n1 la puterea n2:"<<pow(n1,n2)<<'\n';
        cout<<"inversul lui n1:";
    while (n1!=0)
        {
         b=b*10+n1%10;
         n1=n1/10;
        }
        cout<<b<<'\n';
        b=0;
        cout<<"inversul lui n2:";
    while (n2!=0)
      {
        b=b*10+n2%10;
        n2=n2/10;
      }
        cout<<b<<'\n';
    return 0;
}
