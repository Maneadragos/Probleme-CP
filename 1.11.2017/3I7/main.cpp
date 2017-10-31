#include <iostream>

using namespace std;

int main()
{
int n,ok = 1;
cin>>n;
do
{
if(n>0&&n<=90)
{
     ok=0;
     cout<<"Bravo!!";
}
else
{
    cout<<"mai incearca :)"<<'\n';
    cin>>n;
}

}while(ok == 1);
    return 0;
}
