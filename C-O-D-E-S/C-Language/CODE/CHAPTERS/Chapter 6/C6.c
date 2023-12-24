//---> POINTERS


/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=8;
    int *j;
    j=&i;

    printf("The value of i is %d.\n",i);
    printf("The value of i is %d.\n",*j);

    printf("The address of i is %d.\n",&i);
    printf("The address of i is %u.\n",j);

    printf("The address of j is %u.\n",&j);
    printf("The valus of j is %u.\n",*(&j));
    
    return 0;
}
*/


//--> POINTER TO POINTER

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=9;
    int *b=&a;
    int **c=&b;

    printf("The value of a is %d.\n",a);
    printf("The value of a is %d.\n",*b);

    printf("The address of a is %d.\n",&a);
    printf("The address of a is %u.\n",b);

    printf("The value of b is %u.\n",*c);
    printf("The value of b is %u.\n",*(&b));

    printf("The address of b is %u.\n",&b);
    printf("The address of b is %u.\n",c);

    return 0;
}
*/


//--> FUNCTION CALLS

/*
    1. CALL BY VALUE :-
                    Sending the values of arguements.
    2. CALL BY REFERENCE :-
                    Sending the address of arguements.
*/

//-> CALL BY VALUE

/*
#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b);

int main(){
    int a=4,b=7;
    printf("The value of 4+7 is %d.\n",sum(4,7));

    return 0;
}

int sum(int a,int b){

    return a+b;
}
*/

//-> CALL BY REFERENCE

/*
This will not work because this is call-by-value.

#include<stdio.h>
#include<stdlib.h>

int wrongswap(int a, int b);

int main(){
    int a=3,b=4;
    printf("The value of a and b before swap is %d and %d.\n",a,b);
    wrongswap(a,b);
    printf("The value of a and b after swap is %d and %d.\n",a,b);

    return 0;
}

int wrongswap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
*/

/*
This will work

#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);

int main(){
    int x=3,y=4;
    printf("The value of a and b before swap is %d and %d.\n",x,y);
    swap(&x,&y);
    printf("The value of a and b after swap is %d and %d.\n",x,y);

    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
*/


//-> PRACTICE SET


/*
Q.1) 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=10;
    int *b=&a;
    int **c=&b;

    printf("The value of a is %d.\n",a);
    printf("The value of a is %d.\n",*b);

    printf("The address of a is %d.\n",&a);
    printf("The address of a is %d.\n",b);

    printf("The value of b is %d.\n",b);
    printf("The value of b is %d.\n",*c);

    printf("The address of b is %d.\n",&b);
    printf("The address of b is %d.\n",c);

    return 0;
}
*/

/*
Q.2)-> the addresses are different...

#include<stdio.h>
#include<stdlib.h>

void ptr(int a);

int main(){
    int i=10;
    int *j=&i;

    printf("The value of i is %d.\n",i);
    printf("The value of i is %d.\n",*j);

    printf("The address of i is %d.\n",&i);
    printf("The address of i is %d.\n",j);

    ptr(i);

    return 0;
}

void ptr(int a){
    int i=10;
    printf("The address of i is %d.\n",&i);
}
*/

/*
Q.3)

#include<stdio.h>
#include<stdlib.h>

int ten(int a);

int main(){
    int i=10,r;
    printf("The value of i is %d.\n",i);
    r=ten(i);
    
    printf("The value of i is %d.\n",r);

    return 0;
}

int ten(int a){
    int i=10,r;
    r=i*10;

    return r;
}
*/