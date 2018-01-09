#include<iostream>
using namespace std;
void average(int a[32][3],int &avgmax,int &avgmin)
{
    int i,k=0,sum=0;
    for(i=1;i<=31;i++){
        sum=sum+a[i][1];
        k++;
        }
    avgmax=sum/k;
    k=0;sum=0;
    for(i=1;i<=31;i++)
    {
        sum=sum+a[i][2];
        k++;
    }
    avgmin=sum/k;
}
void maxmin(int a[32][3],int &min,int &max)
{
    int i,j;
    min=10000000000;
    max=-10000000000;
    for(i=1;i<=31;i++)
        for(j=1;j<=2;j++){
            if(a[i][j]<min)
                min=a[i][j];
            if(a[i][j]>max)
                max=a[i][j];}
}
int main()
{
    int i,j,a[32][3],x,y;
    for(i=1;i<=31;i++)
        for(j=1;j<=2;j++)
            cin>>a[i][j];
    average(a,x,y);
    cout<<"Avg max temp:"<<x<<endl;
    cout<<"Avg min temp:"<<y<<endl;
    maxmin(a,x,y);
    cout<<"Max temp:"<<y<<endl;
    cout<<"Min temp:"<<x<<endl;
}
