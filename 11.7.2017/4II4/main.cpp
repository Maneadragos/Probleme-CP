#include <iostream>

using namespace std;
void FindMinMax(int v[100],int min,int max)
{
    int i,n;
     cout<<"dati n ";
     cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
        min=101;
        max=1;
    for(i=1;i<=n;i++)
    {
        if(v[i]<=min)
            min=v[i];
        if(v[i]>=max)
            max=v[i];

    }
    cout<<min;
    cout<<max;
}

int main()
{
    return 0;
}
