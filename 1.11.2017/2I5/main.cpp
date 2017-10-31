#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n,c = 0,s = 0,prim = 1,i;
    cin>>n;
while(n)
{
if(n % 2 == 1)
    s = s + pow(10,c);
    c++;
    n = n / 2;
}
    cout << s<<endl;
for(i=1;i<=n;i++)
{
while ( i <=n / 2)
{
if ( n % i == 0)
    prim = 0;

}
if(prim == 0)
cout<<i;
}

    return 0;
}
