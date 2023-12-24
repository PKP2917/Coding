//---> FUNCTION AND RECURSION



//-> FUNCTIONS

/*
#include<stdio.h>
#include<stdlib.h>

void sport();                                         //function prototype

int main(){
    int a;
    printf("Initialising sport function.\n");
    sport();                                          //function call
    printf("Sport function finished its work.\n");

    return 0;
}

void sport(){                                         //function definition
    printf("Messi\n");
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
    GoodMorning();
    GoodAfternoon();
    GoodNight();

    return 0;
}

void GoodMorning(){
    printf("Good Morning!!!\n");
}

void GoodAfternoon(){
    printf("Good Afternoon!!!\n");
}

void GoodNight(){
    printf("Good Night!!!\n");
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
    GoodMorning();
    
    return 0;
}

void GoodMorning(){
    printf("Good Morning!!!\n");
    GoodAfternoon();
    
}

void GoodAfternoon(){
    printf("Good Afternoon!!!\n");
    GoodNight();
}

void GoodNight(){
    printf("Good Night!!!\n");
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b);

int main(){
    int a,b;
    printf("Enter any numbers: ");
    scanf("%d%d",&a,&b);
    sum(a,b);

    return 0;
}

int sum(int a,int b){
    
    int s;
    s=a+b;
    printf("The sum is %d.",s);
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b);

int main(){
    int s;
    int a,b;
    printf("Enter any numbers: ");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("The sum is %d.",s);

    return 0;
}

int sum(int a,int b){
    int s;
    s=a+b;

    return s;   
}
*/

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
#include<stdio.h>
#include<stdlib.h>

int area();

int main(){
    int a;
    a=area();
    printf("The area of square is %d.",a);
    
    
    return 0;
}

int area(){
    int n,a;
    printf("Enter the side of Square: ");
    scanf("%d",&n);
    a=n*n;

    return a;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int area(int n);

int main(){
    int n,a;
    printf("Enter the number: ");
    scanf("%d",&n);

    a=area(n);
    printf("The Area of Square is %d.",a);
    

    return 0;
}
int area(int n){
    int a;
    a=n*n;

    return a;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

void area(int a);

int main(){
    int n,a;
    printf("Enter any Number: ");
    scanf("%d",&n);
    area(n);

    return 0;
}

void area(int n){
    int a;
    a=n*n;

    printf("The Area of Square is %d.",a);

}
*/

/*
#include<stdio.h>
#include<stdlib.h>

void area();

int main(){
    area();
    
    return 0;
}

void area(){
    int a,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    a=n*n;

    printf("The Area of square is %d",a);
}
*/

//--------------------------------------------------------------------------------------------------------------------------------------------------

/*
->WHA & WHRT

#include<stdio.h>
#include<stdlib.h>

void ca();

int main(){
    ca();
    
    return 0;
}

void ca(){
    int r;
    float a;
    printf("Enter the radius: ");
    scanf("%d",&r);
    a=3.14*r*r;

    printf("The Area of Circle is %0.2f.",a);
}
*/

/*
-> WA & WHRT

#include<stdio.h>
#include<stdlib.h>

void ca(int r);

int main(){
    int r;
    float a;
    printf("Enter the radius: ");
    scanf("%d",&r);
    ca(r);

    return 0;
}

void ca(int r){
    float a;
    a=3.14*r*r;

    printf("The area of circle is %0.2f.",a);
}
*/

/*
->WHA & WRT

#include<stdio.h>
#include<stdlib.h>

float ca();

int main(){
    float a;
    a=ca();
    printf("The area of circle is %0.2f",a);

    return 0;
}

float ca(){
    int r;
    float a;
    printf("Enter the radius: ");
    scanf("%d",&r);
    a=3.14*r*r;

    return a;
}
*/

/*
-> WA & WRT

#include<stdio.h>
#include<stdlib.h>

float ca(int r);

int main(){
    int r;
    float a;

    printf("Enter the radius: ");
    scanf("%d",&r);

    a=ca(r);
    printf("The area of circle is %0.2f",a);
    

    return 0;
}

float ca(int r){
    float a;
    a=3.14*r*r;

    return a;
}
*/

//----------------------------------------------------------------------------------------------------------------------

/*
->Factorial 

#include<stdio.h>
#include<stdlib.h>

int fac(int n);

int main(){
    int f,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    f=fac(n);
    printf("The factorial of %d is %d.",n,f);

    return 0;
}

int fac(int n){
    int f=1;

    for (int i = n; i > 0; i--)
    {
        f=f*i;
    }
    
    return f;
}
*/


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//-> RECURSION 
/*Recursion means same function in one function.*/


/*
#include<stdio.h>
#include<stdlib.h>

int fac(int x);

int main(){
    int a=3;
    printf("The value of factorial of %d is %d.",a,fac(a));
    
    return 0;
}

int fac(int x){

    if((x==1) || (x==0))
    {
        return 1;
    }
    
    else
    {
        return x*fac(x-1);
    }
}
*/


//--> PRACTICE SET

/*
Q.1)

#include<stdio.h>
#include<stdlib.h>

int avg(int n1,int n2,int n3);

int main(){
    int n1,n2,n3,a;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    a=avg(n1,n2,n3);
    printf("The average of %d, %d and %d is %d.",n1,n2,n3,a);
    
    return 0;
}

int avg(int n1,int n2,int n3){
    int a;
    a=(n1+n2+n3)/3;

    return a;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

void tc(float c,float f);

int main(){
    float c,f;
    printf("Enter the temperature.");
    scanf("%f",&c);
    tc(c,f);

    return 0;
}

void tc(float c,float f){
    f=(c*9/5)+32;
    printf("\t%0.2f Celsius\t=\t%0.2f Farenheit\t",c,f);

}
*/

