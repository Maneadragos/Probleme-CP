#include <iostream>

using namespace std;

int main()
{
int v[25], i, n, ok, aux;
    cout<<"n=";
    cin>>n;
for(i=1;i<=n;i++)
{
    cout<<"v["<<i<<"]=";
    cin>>v[i];
}
do
{
    ok=1;
for(i=1;i<=n-1;i++)
if(v[i]>v[i+1])
{
    aux=v[i];
    v[i]=v[i+1];
    v[i+1]=aux;
    ok=0;
}
}while(ok!=1);
    cout<<endl;
for(i=1;i<=n;i++)
    cout<<v[i]<<" ";

    return 0;
}
