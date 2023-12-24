//-> RANDOM NUMBER GUESSING GAME


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int n,guess,ng=1;
    srand(time(0));
    n=rand()%100+1;     //generates a random number between 1 to 100.
    printf("\nThe Number is %d",n);

    do{
        printf("\nGuess the number between 1 to 100.");
        scanf("%d",&guess);

        if(guess>n)
        {
            printf("\nLower number please!!!");
        }

        else if(guess<n)
        {
            printf("\nHigher number please!!!");
        }

        else
        {
            printf("\nYou guessed it in %d attempts.\n",ng);
        }

        ng++;

    }while(guess!=n);

    return 0;
}