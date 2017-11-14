#include<string.h>
#include<iostream>

using namespace std;

int main()
{
	int k = 1,i;
	char s[100];
	cout<<"Sirul:";
	cin.get(s,100);
        for(i=0;i<strlen(s);i++)
            if(s[i]==' ')
                k++;
    cout<<"Nr de cuvinte:"<<k;


}
