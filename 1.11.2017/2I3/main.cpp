#include <iostream>

using namespace std;

int main()
{
    int v[100],min,max,i,n;
        cout<<"nr de elemente:";
        cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
        min=999;
        max=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]<=min)
           min=v[i];
        if(v[i]>=max)
            max=v[i];
    }
    cout<<min<<" / "<<max;
    return 0;
}
