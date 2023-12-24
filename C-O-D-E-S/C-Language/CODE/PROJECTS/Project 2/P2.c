//---> PROJECT 2(SNAKE, WATER, GUN GAME)


//-> METHOD 1

/*
#include<stdio.h>
#include<stdlib.h>

int snakewatergun(char you, char comp);

int main(){
    char you, comp;
    comp = 's';

    printf("Enter 's' for snake, 'w' for water and 'g' for gun.");
    scanf("%c",&you);

    int result = snakewatergun(you, comp);

    printf("You choose %c and Computer choose %c.\n",you,comp);

    if(result==0)
    {
        printf("DRAW...\n");
    }

    else if(result==1)
    {
        printf("YOU WIN...\n");
    }

    else
    {
        printf("YOU LOSE...\n");
    }

    return 0;
}

int snakewatergun(char you, char comp){
    //-> returns 1 if you win and -1, if you lose and 0 if draw.

    //-> draw
    if(you == comp)
    {
        return 0;
    }

    //-> sw and ws
    if((you=='s') && (comp=='w'))
    {
        return 1;
    }
    else if((you=='w') && (comp=='s'))
    {
        return -1;
    }

    //-> sg and gs
    if((you=='s') && (comp=='g'))
    {
        return -1;
    }
    else if((you=='g') && (comp=='s'))
    {
        return 1;
    }

    //-> wg and gw
    if((you=='w') && (comp=='g'))
    {
        return 11;
    }
    else if((you=='g') && (comp=='w'))
    {
        return -1;
    }
}
*/



//-> METHOD 2(Usimg random number generator)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you, char comp);

int main(){
    int n;
    char you, comp;

    srand(time(0));   //-> random number generator
    n=rand()%100+1; 

    if(n<33)
    {
        comp='s';
    }
    else if(n<33 && n<66)
    {
        comp='w';
    }
    else
    {
        comp='g';
    }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun.");
    scanf("%c",&you);

    int result = snakewatergun(you, comp);

    printf("You choose %c and Computer choose %c.\n",you,comp);

    if(result==0)
    {
        printf("DRAW...\n");
    }

    else if(result==1)
    {
        printf("YOU WIN...\n");
    }

    else
    {
        printf("YOU LOSE...\n");
    }

    return 0;
}

int snakewatergun(char you, char comp){
    //-> returns 1 if you win and -1, if you lose and 0 if draw.

    //-> draw
    if(you == comp)
    {
        return 0;
    }

    //-> sw and ws
    if((you=='s') && (comp=='w'))
    {
        return 1;
    }
    else if((you=='w') && (comp=='s'))
    {
        return -1;
    }

    //-> sg and gs
    if((you=='s') && (comp=='g'))
    {
        return -1;
    }
    else if((you=='g') && (comp=='s'))
    {
        return 1;
    }

    //-> wg and gw
    if((you=='w') && (comp=='g'))
    {
        return 11;
    }
    else if((you=='g') && (comp=='w'))
    {
        return -1;
    }
}