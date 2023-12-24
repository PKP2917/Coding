//---> ARRAY

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int marks[5];

    printf("Enter the marks for student 1: ");
    scanf("%d",&marks[0]);
    printf("Enter the marks for student 2: ");
    scanf("%d",&marks[1]);
    printf("Enter the marks for student 3: ");
    scanf("%d",&marks[2]);
    printf("Enter the marks for student 4: ");
    scanf("%d",&marks[3]);
    printf("Enter the marks for student 5: ");
    scanf("%d",&marks[4]);

    printf("MARKS : %d,%d,%d,%d,%d.",marks[0],marks[1],marks[2],marks[3],marks[4]);
    
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int marks[5];

    printf("enter the marks: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }

    for (int  i = 0; i < 5; i++)
    {
        printf("Mark%d = %d.\n",i,marks[i]);
    }
    
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[]={12,34,56,78,90};

    printf("The value of a[0] is %d.\n",a[0]);
    printf("The value of a[1] is %d.\n",a[1]);
    printf("The value of a[2] is %d.\n",a[2]);
    printf("The value of a[3] is %d.\n",a[3]);
    printf("The value of a[4] is %d.\n",a[4]);

    return 0;
}
*/


//--> POINTER ARITHMETIC

/*
integer = 4 bytes
char    = 1 byte
float   = 4 bytes
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=30;
    int *p=&i;
    printf("The value of p is %u.\n",p);
    p++;        //-> increment in value of 'p' by 4 units according to architecture of our pc.
    printf("The value of p is %u.\n",p);
    p=p+1;      //-> increment in value of 'p' by (4*n) units according to architecture of our pc.
    printf("The value of p is %u.\n",p);
    p--;        //-> decrement in value of 'p' by 4 units according to architecture of our pc.
    printf("The value of p is %u.\n",p);
    p=p-1;      //-> decrement in value of 'p' by (4*n) units according to architecture of our pc.
    printf("The value of p is %u.\n",p);

    char c=23;
    char *pt=&c;
    printf("The value of pt is %u.\n",pt);
    pt++;        //-> increment in value of 'pt' by 1 units according to architecture of our pc.
    printf("The value of pt is %u.\n",pt);
    pt=pt+1;      //-> increment in value of 'pt' by (1*n) units according to architecture of our pc.
    printf("The value of pt is %u.\n",pt);
    pt--;        //-> decrement in value of 'pt' by 1 units according to architecture of our pc.
    printf("The value of pt is %u.\n",pt);
    pt=pt-1;      //-> decrement in value of 'pt' by (1*n) units according to architecture of our pc.
    printf("The value of pt is %u.\n",pt);

    return 0;
}
*/


//--> ARRAY WITH POINTER

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int marks[4];
    int *p;
    p = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks of student %d: \n",i+1);
        scanf("%d",p);
        p++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks of student %d is %d.\n",i+1,marks[i]);
    }

    return 0;
}
*/


//--> ARRAY TO FUNCTION

/*
#include<stdio.h>
#include<stdlib.h>

void parray(int *p,int n);

int main(){
    int arr[]={1,2,3,4,5};
    parray(arr,5);

    return 0;
}

void parray(int *p,int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d.\n",i+1,*(p+i));
    }
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

void parray(int p[],int n);

int main(){
    int arr[]={1,2,3,4,5};
    parray(arr,5);

    return 0;
}

void parray(int p[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d.\n",i+1,*(p+i));
    }
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

void parray(int p[],int n);

int main(){
    int arr[]={1,2,3,4,5};
    parray(arr,5);

    return 0;
}

void parray(int p[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d.\n",i+1,p[i]);
    }
}
*/


//--> MULTIDIMENSIONAL ARRAY

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int nstud;
    int nsub;

    printf("Enter the number of student: ");
    scanf("%d",&nstud);
    printf("Enter the number of subjects: ");
    scanf("%d",&nsub);

    int marks[nstud][nsub];

    for (int i = 0; i < nstud; i++)
    {
        for (int j = 0; j < nsub; j++)
        {
            printf("Enter the marks of student %d in subject %d.\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        } 
    }
    
    for (int i = 0; i < nstud; i++)
    {
        for (int j = 0; j < nsub; j++)
        {
            printf("The marks of student %d in subject %d is %d.\n",i+1,j+1,marks[i][j]);  
        } 
    }   

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);

    int m[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value of a and b : \n");
            scanf("%d",&m[i][j]);
        } 
    }

    printf("Matrix :- \n"); 

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%5d",m[i][j]);  
        } 
        printf("\n");
    }

    return 0;
}
*/

/*
ADDITION OF MATRIX :-

#include<stdio.h>
#include<stdlib.h>

int main(){
    int m1[3][3],m2[3][3],m3[3][3];
    int i,j;

    printf("Enter the numbers in matrix 1: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter the numbers in matrix 2: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }

    }

    printf("The Addition of matrices is: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",m3[i][j]);
        }

        printf("\n");
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
    int a[10];
    int *p=&a[0];

    p=p+2;

    if(p == &a[2])
    {
        printf("These point to the same location in memory.\n");
    }

    else
    {
        printf("These do not point to the same location in memory.\n");
    }

    return 0;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10];
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 0; i < 10; i++)
    {
        a[i]=n*(i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",n,i+1,a[i]);
    }
        
    return 0;
}
*/

/*
Q.3)

#include<stdio.h>
#include<stdlib.h>

void reverse(int *a,int n){
    int temp;

    for (int i = 0; i < (n/2); i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    reverse(a,10);

    for (int i = 0; i <10; i++)
    {
        printf("The value of %d element is %d.\n",i+1,a[i]);
    }
    return 0;
}
*/

/*
Q.4)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[4][4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The address of a[%d][%d][%d] is %u.\n",i,j,k,&a[i][j][k]);
            }  
        }    
    }
    
    return 0;
}
*/

