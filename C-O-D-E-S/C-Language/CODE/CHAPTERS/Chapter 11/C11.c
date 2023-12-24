//---> DYNAMIC MEMORY ALLOCATION(DMA)


/*
    Dynamic Memory Allocation is a way  to allocate memory to a data structure during the runtime.

    FUNCTIONS FOR DMA
        1) malloc()
        2) calloc()
        3) free()
        4) realloc()
*/


/*
1) malloc() function
    malloc stands for memory allocation.
    It takes number of byter to be allocated as an input and returns a pointer of type void.
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    printf("The size of int on my PC is %d.\n",sizeof(int));
    printf("The size of float on my PC is %d.\n",sizeof(float));
    printf("The size of char on my PC is %d.\n",sizeof(char));

    p = (int *)malloc(9 * sizeof(int));      //-> SYNTAX

    for (int i = 0; i < 9; i++)
    {
        printf("Enter the value of %d element : \n",i+1);
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        printf("The value of %d element is %d.\n",i+1,p[i]);

    }

    return 0;
}
*/

/*
2) calloc() function
    calloc stands for continuos allocation.
    it initializes each memory block with a default value of 0.
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p = (int *)calloc(10,sizeof(int));   //-> SYNTAX ---> initializes with zero.

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the value of %d element : \n",i+1);
    //     scanf("%d",&p[i]);
    // }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d.\n",i+1,p[i]);
    }

    return 0;
}
*/

/*
3) free() function
    we can use free() function to de-allocate the memory.
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1;
    p1 = (int *)malloc(9 * sizeof(int));   
    
    for (int i = 0; i < 9; i++)
    {
        p2 = (int *)malloc(9 * sizeof(int));      //-> without free() function it will consume more memory.   
        printf("Enter the value of %d element : \n",i+1);
        scanf("%d",&p[i]);
        free(p2);                    //-> with the help of free() function we will optimize memory concumption.
    }

    for (int i = 0; i < 9; i++)
    {
        printf("The value of %d element is %d.\n",i+1,p[i]);

    }

    return 0;
}
*/

/*
4) realloc() function
    realloc() function is used to allocate memory of new size using the previous pointer and size.
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(3 * sizeof(int));   
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of %d element : \n",i+1);
        scanf("%d",&p[i]);                        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The value of %d element is %d.\n",i+1,p[i]);
    }

    //-> Reallocate p using realloc() function.

    p = (int *)realloc(p, 5*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element : \n",i+1);
        scanf("%d",&p[i]);                        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d.\n",i+1,p[i]);
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
    int *p;
    p=(int *)malloc(6*sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The Number : %d.\n",p[i]); 
    }
    
    return 0;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    int n;
    printf("Enter the number of integers to be stored : ");
    scanf("%d",&n);

    p=(int *)malloc(6*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The Number : %d.\n",p[i]); 
    }
    
    return 0;
}
*/

/*
Q.3)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p=(int *)calloc(6,sizeof(int));

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the Number : ");
    //     scanf("%d",&p[i]);
    // }

    for (int i = 0; i < 6; i++)
    {
        printf("The Number : %d.\n",p[i]); 
    }
    
    return 0;
}
*/

/*
Q.4)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p=(int *)malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The Number : %d.\n",p[i]); 
    }


    p=(int *)realloc(p, 10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The Number : %d.\n",p[i]); 
    }
    
    return 0;
}
*/