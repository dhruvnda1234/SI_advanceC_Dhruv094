#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int player,computer,countp=0,countc=0,countt=0,round;
    const char game[]={' ','R','P','S'};
    printf("               ___________________________\n");
    printf("\n");
    printf("                  ROCK\tPAPER\tSCISSOR\n");
    printf("               ___________________________\n");
    printf("\nThe numbers for rock, paper and scissors are given below:\n");
    printf("-Rock(R)     =1\n-Paper(P)    =2\n-Scissor(S)  =3\n");
    printf("\nEnter the number of rounds you want to play against computer = ");
    if(scanf("%d",&round)!=1||round<=0)
    {
        printf("Invalid number of round\n");
        return 1;
    }
    srand(time(NULL));
    for(int i=1;i<=round;i++)
    {
        printf(" \n                      ||| ROUND %d |||    \n     ",i);
        printf("\nPlayer Chose =\t");
        if(scanf("%d",&player)!=1||player<=0||player>3)
        {
            printf("Invalid Input\n");
            return 1;
        }
        computer=(rand()%3)+1;
        printf(" \n             ||Player=%c|| \tVS\t ||Computer%c||\n",game[player],game[computer]);
        printf("\n");
        if(player==computer)
        {
            printf("                         !!!TIE!!!\n");
            countt++;
             printf("_________________________________________________________________________\n");
        }
        else if(((player-computer)+3)%3==1)
        { 
            printf("                    !!!Player WINS!!!\n");
            countp++;
            printf("_________________________________________________________________________\n");
        }
        else
        {
            printf("                   !!!COMPUTER WINS!!!\n");
            countc++;
             printf("_________________________________________________________________________\n");
        }
    }
    printf(" \n                      ||| RESULT |||\n                                   ");
printf("\n|||      Total Wins of Player = %d      |||\n",countp);
printf("|||      Total Wins of Computer = %d    |||\n",countc);
printf("|||      Total Draws = %d               |||\n",countt);
    return 0;
}
