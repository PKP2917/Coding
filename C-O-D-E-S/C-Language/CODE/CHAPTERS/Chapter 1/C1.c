//---> VARIABLES, CONSTANTS AND KEYBOARD 
 
 
 
//---> DATA TYPES
 
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=7;
    float b=9.8;
    char c='b';
    int d=23;

    printf("%d\n",a);
    printf("%0.1f\n",b);
    printf("%c\n",c);
    printf("The sum of a and d is %d.\n",a+d); 

    return 0;
} 
*/

//---> TRY IT YOURSELF

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=3,b=4;
    int c;
    c=a+b;
    printf("%d",c); 

    return 0;
}
*/

//---> INPUT IN C
 
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;

    printf("Enter the value of a\n");
    scanf("%d",&a);                    //--->'&' is very important.

    printf("Enter the value of b\n");
    scanf("%d",&b); 

    printf("The sum of a and b is %d.",a+b);  

    return 0;
}
*/


//-> Practice Set

/*
Q.1(a)->

#include<stdio.h>
#include<stdlib.h>

int main(){
    int l=3,b=4;
    int a;
    a=l*b;
    printf("The Area of rectangle is %d.",a);
    
    return 0;
}
*/

/*
Q.1(b)->

#include<stdio.h>
#include<stdlib.h>

int main(){
    int l,b;
    int a;

    printf("enter the length: ");
    scanf("%d",&l);

    printf("enter the breadth: ");
    scanf("%d",&b);

    a=l*b; 

    printf("The Area of Rectangle is %d",a); 

    return 0;
}
*/


/*
Q.2->

#include<stdio.h>
#include<stdlib.h>

int main(){

    int r,h;
    float a,v;

    printf("enter the radius:");
    scanf("%d",&r);

    printf("enter the height:");
    scanf("%d",&h);

    a=3.14*r;
    v=(3.14)*r*r*h;

    printf("The Area of circle is %0.1f\n",a);
    printf("The volume of cylinder is %0.1f\n",v); 
    
    return 0;
}
*/


