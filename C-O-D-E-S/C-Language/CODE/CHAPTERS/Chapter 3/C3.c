//---> USE OF LOGICAL OPERATORS



/*
1.'&&'-> AND operator
2.'||'->  OR operator
3.'!' -> NOT operator
*/

/*
1. && operator

#include<stdio.h>
#include<stdlib.h>

int main(){
    int age;

    printf("Enter your AGE: ");
    scanf("%d",&age);

    if(age>=18 && age<=90)
    {
        printf("you can drive.");
    }

    else
    {
        printf("You cannot drive");
    }

    return 0;
}
*/

/*
2. || operator

#include<stdio.h>
#include<stdlib.h>

int main(){
    int age;
    int vippass=0;
    vippass=1;

    printf("Enter your AGE: ");
    scanf("%d",&age);

    if((age>=18 && age<=90) || (vippass!=0))
    {
        printf("You can drive.");
    }

    else
    {
        printf("You cannot drive");
    }

    return 0;
}
*/

//-> CONDITIONAL OR TERNARY OPERATORS

/*
condition ? expression-if-true : expression-if-false.
'?' , ':' => ternary operators
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    (n<5) ? printf("n is less than 5.") : printf("n is not less than 5.");

    return 0;
}
*/

//- SWITCH CASE CONTROL INSTRUCTION

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int r;

    printf("Enter the rating: ");
    scanf("%d",&r);

    switch(r)
    {
        case 1:
            printf("Your rating is 1.\n");
        break;
        case 2:
            printf("Your rating is 2.\n");
        break;
        case 3:
            printf("Your rating is 3.\n");
        break;
        case 4:
            printf("Your rating is 4.\n");
        break;
        case 5:
            printf("Your rating is 5.\n");
        break;
        default:
            printf("Invalid case.\n");
        break;
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jno;
    printf("Jersey Number: ");
    scanf("%d", &jno);

    switch (jno)
    {
        case 7:
        printf("Cristiano Ronaldo.");
        break;

        case 9:
        printf("Luis Suarez.");
        break;

        case 10:
        printf("Lionel Messi.");
        break;

        case 11:
        printf("Neymar JR.");
        break;

        default:
        printf("Dont know!!!");
        break;
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
    int m1,m2,m3;
    float p;

    printf("Enter the marks: ");
    scanf("%d%d%d",&m1,&m2,&m3);

    p=(m1+m2+m3)/3;

    if((p>=40) && (m1>=33) && (m2>=33) && (m3>=33))
    {
        printf("Total Percentage = %f",p);
        printf("PASS\n");
    }

    else
    {
        printf("Total Percentage = %f",p");
        printf("FAIL\n");
    }

    return 0;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,t;
    float ta;

    printf("Enter the income of the employee: ");
    scanf("%d",&i);

    if(i<=250000)
    {
        ta=i;
        printf("The Tax amount which has to be paid is %0.2f.",ta);
    }

    else if((i>=250000) && (i<=500000))
    {
        ta=(i-250000)*0.05;
        printf("The Tax amount which has to be paid is %0.2f.",ta);
    }

    else if((i>=500000) && (i<=1000000))
    {
        ta=(i-250000)*0.2;
        printf("The Tax amount which has to be paid is %0.2f.",ta);
    }

    else
    {
        ta=(i-250000)*0.3;
        printf("The Tax amount which has to be paid is %0.2f.",ta);
    }

    return 0;
}
*/

/*
Q.3)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int y;
    printf("Enter the year: ");
    scanf("%d",&y);

    if(((y%4)==0) && ((y%100)==0) && ((y%400)==0))
    {
        printf("The %d is a leap year.",y);
    }

    else
    {
        printf("The %d is not a leap year.",y);
    }

    return 0;
}
*/

/*
Q.4)

#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    printf("Enter the Character: ");
    scanf("%c",&ch);

    if((ch>=97) && (ch<=122))
    {
        printf("%c is a lowercase character.",ch);
    }

    else
    {
        printf("%c is not a lowercase charcter.",ch);
    }

    return 0;
}
*/

/*
//Q.5)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,n3,n4;

    printf("Enter any four numbers: ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    if((n1>n2) && (n1>n3) && (n1>n4))
    {
        printf("%d is the greatest number among all.",n1);
    }

    else if((n2>n1) && (n2>n3) && (n2>n4))
    {
        printf("%d is the greatest number among all.",n2);
    }

    else if((n3>n1) && (n3>n2) && (n3>n4))
    {
        printf("%d is the greatest number among all.",n3);
    }

    else
    {
        printf("%d is the greatest number among all.",n4);
    }

    return 0;
}
*/
