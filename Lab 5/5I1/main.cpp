#include <iostream>

using namespace std;

int main()
{
    int v[100],i,n,k=0;
        cin>>n;
    for(i = 1;i <= n;i ++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(i = 1; i <= n;i ++)
    {
        if(v[i] ==( (v[i-1]+v[i+1])/2))
        k++;
    }
    cout<<k;
    return 0;
}
