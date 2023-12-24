//---> STRUCTURES


/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>    //-> is important for 'strcpy' for declaration of string as an array in structure.

struct student
{
    int rollno;
    float marks;
    char name[100];
};

int main(){
    struct student s1;
    s1.rollno = 1;
    s1.marks = 98;
    strcpy(s1.name,"Pranav");

    printf("%d",s1.rollno);    

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>    

struct student
{
    int rollno;
    float marks;
    char name[100];
};

int main(){
    struct student s1;
    s1.rollno = 1;
    s1.marks = 17;
    strcpy(s1.name,"Pranav");
    printf("%d\n",s1.rollno);
    printf("%0.2f\n",s1.marks);
    printf("%s\n",s1.name);

    struct student s2;
    s2.rollno = 2;
    s2.marks = 100;
    strcpy(s2.name,"Sanjana");
    printf("%d\n",s2.rollno);
    printf("%0.2f\n",s2.marks);
    printf("%s\n",s2.name);

    struct student s3;
    s3.rollno = 3;
    s3.marks = 99;
    strcpy(s3.name,"Kumar");
    printf("%d\n",s3.rollno);
    printf("%0.2f\n",s3.marks);
    printf("%s\n",s3.name);

    struct student s4;
    s4.rollno = 4;
    s4.marks = 98;
    strcpy(s4.name,"Kususm");
    printf("%d\n",s4.rollno);
    printf("%0.2f\n",s4.marks);
    printf("%s\n",s4.name);

    struct student s5;
    s5.rollno = 5;
    s5.marks = 102;
    strcpy(s5.name,"Shravanee");
    printf("%d\n",s5.rollno);
    printf("%0.2f\n",s5.marks);
    printf("%s\n",s5.name);

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

struct player
{
    char name[50];
    int jno;
    char team[30];
};

int main(){
    struct player p1 = {"Messi",10,"FCB"};

    printf("Name : %s\n",p1.name);   
    printf("Jersey Number : %d\n",p1.jno); 
    printf("Team : %s\n",p1.team);  

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct sport
{
    int n;
    char name[50];
};

int main(){
    struct sport s[100];

    s[0].n = 1;
    strcpy(s[0].name , "Football");
    printf("Number : %d\n",s[0].n);
    printf("Name : %s\n",s[0].name);

    s[1].n = 2;
    strcpy(s[1].name , "Cricket");
    printf("Number : %d\n",s[1].n);
    printf("Name : %s\n",s[1].name);

    s[2].n = 3;
    strcpy(s[2].name , "Basketball");
    printf("Number : %d\n",s[2].n);
    printf("Name : %s\n",s[2].name);    

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
    int id;
    char name[100];
    float salary;
};

int main(){
    struct emp e[100];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the Id of Employee%d : ",i+1);
        scanf("%d",&e[i].id);

        printf("Enter the Name of Employee%d : ",i+1);
        scanf("%s",e[i].name);

        printf("Enter the Salary of Employee%d : ",i+1);
        scanf("%f",&e[i].salary);

        printf("------------------------------------------------------------");
    }
    
    for (int i = 0; i < 2; i++)
    {
        printf("Employee %d:-\n",i+1);
        printf("%d\n",e[i].id);
        printf("%s\n",e[i].name);
        printf("%0.2f\n",e[i].salary);
        printf("------------------------------------------------------------");
    }

    return 0;
}
*/


//-> POINTER TO STRUCTURE

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
    int id;
    char name[100];
    float salary;
};

int main(){
    struct emp e1;
    struct emp *p;
    p=&e1;

    //-> method 1
    (*p).id = 17;
    printf("ID : %d.\n",e1.id);

    //-> method 2
    p->id =18;
    printf("ID : %d.\n",e1.id);

    return 0;
}
*/


//-> PASSING STRUCTURE TO FUNCTION

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
    int id;
    char name[100];
    float salary;
};

void show (struct emp);

int main(){
    struct emp e1;
    struct emp *p;
    p = &e1;

    p->id = 100;
    strcpy(p->name,"Pranav");
    p->salary = 1000000;

    show(e1);

    return 0;
}

void show (struct emp e){
    printf("The id of employee is %d.\n",e.id);
    printf("The name of employee is %s.\n",e.name);
    printf("The salary of employee is %0.1f.\n",e.salary);  
}
*/


//-> "typedef" KEYWORD  --> used to create a alias namefor data types.

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct emp
{
    int id;
    char name[100];
    float salary;
}e;

void show (struct emp);

int main(){
    e e1;
    e *p;
    p = &e1;

    p->id = 100;
    strcpy(p->name,"Pranav");
    p->salary = 1000000;

    show(e1);

    return 0;
}

void show (struct emp e){
    printf("The id of employee is %d.\n",e.id);
    printf("The name of employee is %s.\n",e.name);
    printf("The salary of employee is %0.1f.\n",e.salary);  
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct emp
{
    int id;
    char name[100];
    float salary;
}e;

void show (e);

int main(){
    e e1;
    e *p;
    p = &e1;

    p->id = 100;
    strcpy(p->name,"Pranav");
    p->salary = 1000000;

    show(e1);

    return 0;
}

void show (e e1){
    printf("The id of employee is %d.\n",e1.id);
    printf("The name of employee is %s.\n",e1.name);
    printf("The salary of employee is %0.1f.\n",e1.salary);  
}
*/

//-> PRACTICE SET


/*
Q.1)

#include<stdio.h>
#include<stdlib.h>

struct vector
{
    int x;
    int y;
};

int main(){
    struct vector v1,v2;

    v1.x = 97;
    v1.y = 100;
    printf("X dim is %d and Y dim is %d.\n",v1.x,v1.y);

    v2.x = 17;
    v2.y = 33;
    printf("X dim is %d and Y dim is %d.\n",v2.x,v2.y);

    return 0;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

struct vector
{
    int x;
    int y;
};

struct vector sumvec(struct vector v1 , struct vector v2);

int main(){
    struct vector v1,v2,sum;

    v1.x = 97;
    v1.y = 100;
    printf("X dim is %d and Y dim is %d.\n",v1.x,v1.y);

    v2.x = 17;
    v2.y = 33;
    printf("X dim is %d and Y dim is %d.\n",v2.x,v2.y);

    sum = sumvec(v1,v2);
    printf("X dim of result is %d and Y dim of result is %d.\n",sum.x,sum.y);

    return 0;
}

struct vector sumvec(struct vector v1 , struct vector v2){
    struct vector res;
    res.x = v1.x + v2.x;
    res.y = v1.y + v2.y;

    return res;
}
*/

/*
Q.3)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct complex
{
    int real;
    int img;
}comp;

void display(comp c){
    printf("The value of real part is %d.\n",c.real);
    printf("The value of imaginary part is %d.\n",c.img);
}

int main(){
    comp cnums[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d number.",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the imaginary value for %d number.",i+1);
        scanf("%d",&cnums[i].img);
    }
    
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    
    return 0;
}
*/