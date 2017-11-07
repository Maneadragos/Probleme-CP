#include <iostream>

using namespace std;
//nb=4672 b=8
int main()
{
    int nb,b,n1,pb;
    cin>>nb>>b;
    n1=0;
    pb=1;
    do
    {
        n1=n1+(nb%10)*pb;
        pb=pb*b;
        nb=nb/10;
    }while(nb!=0);
    cout<<n1;
    return 0;
}
