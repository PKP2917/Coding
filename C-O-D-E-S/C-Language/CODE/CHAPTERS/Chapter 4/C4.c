//---> LOOP CONTROL INSTRUCTIONS



//-> 1) WHILE LOOP

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=0;

    while(i<10)
    {
        printf("\n%d",i);
        i++;
    }

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=5;

    printf("\nThe value of i is %d",i);
    printf("\nThe value of i++ is %d",i++);     // prints first and then increment.
    printf("\nThe value of ++i is %d",++i);     // increments first and then print.
    printf("\nThe value of i-- is %d",i--);
    printf("\nThe value of --i is %d",--i);

    i+=10;                                      //-> increment by 10.
    printf("\nThe value of i is %d.",i);

    return 0;
}
*/


//-> 2) DO-WHILE LOOP

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=0;

    do
    {
        printf("\n%d",i);
        i++;
    }while(i<=10);
    
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=1;
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    do
    {
        printf("\n%d",i);
        i++;
    }while(i<=n);

    return 0;
}
*/


//-> 3) FOR LOOP

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;

    for(int i=0;i<10;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        printf("\n%d",i);
    }

    return 0;
}
*/


//-> BREAK STATEMENT

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=0;
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\n%d",i);
        if(i==4){
            break;
        }
    }
    return 0;
}
*/


//-> CONTINUE STATEMENT         //-> runs until the only condition must be executed , only one given

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    for(int i=0;i<10;i++)
    {
        if(i!=5)
        {
            continue;
        }

        else
        {
        printf("%d",i);
        }
    }
    
    return 0;
}
*/


//-> PRACTICE SET

/*
Q.1)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n;
    printf("Enter the number n: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("\n%d",i*n);
    }
    return 0;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=10;i>=1;i--)
    {
        printf("\n%d",i*n);
    }    
    return 0;
}
*/

/*
Q.3)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n;
    int s=0;
    printf("enter the number: ");
    scanf("%d",&n);

    for(i=1;i<10;i++)
    {
        s=s+i;
    }

    printf("\n%d",s);
    
    return 0;
}
*/

/*
Q.4)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=0,n;
    int s=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    do
    {
        s=s+i;
        i++;
    }while(i<n);
    printf("%d",s);

    return 0;
}
*/

/*
Q.5)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=0,n;
    int s=0;

    printf("Enter any number: ");
    scanf("%d",&n);

    while(i<10)
    {
        s=s+i;
        i++;
    }

    printf("%d",s);
    return 0;
}
*/

/*
Q.6)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n;
    int s=0;
    int r=0;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        s=s+i*n;
    }

    printf("%d",s);

    return 0;
}
*/

/*
Q.7)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n;
    int f=1;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
}
*/

/*
Q.8)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n;
    int p=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0){
            p=0;
            break;
        }
    }

    if(p==0 && n!=2)
    {
        printf("the number is not prime");       
    }

    else
    {
        printf("The number is prime.");
    }

    return 0;
}
*/
