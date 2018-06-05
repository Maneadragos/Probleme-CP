#include <stdio.h>

using namespace std;

void ChangeMaking(int amount){
    int iterator = 0;
    int numberofcoins;
    int coin[4]= {50, 10, 5 ,1};
    printf("we change %d in  ",amount);
    while(iterator<4){
        if(coin[iterator] <= amount)
        {
            numberofcoins=amount/coin[iterator];
            if(coin[iterator] == 50){
                printf("%d x50 de bani  \n",numberofcoins);
            }
            if(coin[iterator] == 10){
                printf("%d x10 bani  \n",numberofcoins);
            }
            if(coin[iterator] == 5){
                printf("%d x5 bani  \n",numberofcoins);
            }
            if(coin[iterator] == 1){
                printf("%d x1 ban  \n",numberofcoins);
            }
            amount=amount-numberofcoins*coin[iterator];
        }
        iterator++;
    }
}


int main()
{
  int amount;
   printf("How mutch do you want to change = ");
   scanf("%d",&amount);
    ChangeMaking(amount);
    return 0;
}
