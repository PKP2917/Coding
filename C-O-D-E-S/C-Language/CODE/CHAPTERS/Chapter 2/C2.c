//--->  INSTRUCTION AND OPERATORS



/*
Types of Instructions->
1. Type Declaration Instruction
2. Arithmetic Instruction
3. Control Instruction
*/


//-> 1. TYPE DECLARATION INSTRUCTION

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=4,b,c;         //Type Declaration Instruction
    b=c=a;

    printf("The Value of a is %d\n",a);
    printf("The Value of b is %d\n",b);
    printf("The Value of c is %d\n",c);

    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    float a=1.1;
    float b=a+8.9;

    printf("The Value of b is %f ",b); 
    
    return 0;
}
*/


//-> 2. ARITHMETIC INSTRUCTIONS

/*
operands = constants or numbers
operators = +,-,*,/,etc
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a=3;
    int b=4;
    int z;
    z=a*b;
    // a*b=z ----> this is illegal

    printf("The value of z is : %d\n",z);       
    printf("The value of a+b is : %d\n",a+b);      
    printf("The value of a-b is : %d\n",a-b);
    printf("The value of a*b is : %d\n",a*b);
    printf("The value of a/b is : %d\n",a/b);

    // '%' is a modular division operator which gives us the remainder.

    printf("5 when divided by 2 leaves remainder of %d\n",5%2);
    printf("-5 when divided by 2 leaves remainder of %d\n",-5%2);
    printf("5 when divided by -2 leaves remainder of %d\n",5%-2);

    // No operator is assumed to be present
    // printf("The value of 4*5 is %d.\n", (4)(5));  //-> will not return 20
    printf("The value of 4*5 is %d.\n", (4)*(5));   //-> will return 20.

    // we use pow(x,y) function to take the power of y for x, and we need to include 'math.h' library in order to perform pow(). 
    printf("The value of 4 to the power 5 is %f\n",pow(4,5)); 

    return 0;
}
*/


//-> TYPE CONVERSION

/*
An arithmetic operation between
1. int and int = int
2. int and float = float
3. float and float = float
*/ 

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    
    printf("the value of 6 + 5 is %d\n",6+5);  //-> int
    printf("the value of 6 + 5.6 is %f\n",6+5.6);   //-> float
    printf("the value of 6.2 + 5.6 is %f\n",6.2+5.6);   ///-> float

    return 0;
}
*/


//-> 3. CONTROL INSTRUCTIONS

/*
Types of control instructions
1. Sequence Control Instruction
2. Decision Control Instruction
3. Loop Control Instruction
4. Case Control Instruction
*/


//-> Practice Set

/*
Q.1->
#include<stdio.h>
#include<stdlib.h>

int main(){
    
    printf("the value is : %f",3.0/8-2);  //---> this will return float(double).
    
    return 0;
}
*/

/*
Q.2->
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("ans: %d\n",n%12);

    return 0;
}
*/

/*
Q.3->
#include<stdio.h>
#include<stdlib.h> 

int main(){
    int x=2,y=3,z=3,k=1;
    int r=3*x/y-z+k;
    // 6/3 - 3 + 1
    // 2 -3 + 1
    // -1 + 1
    // 0

    printf("The value is : %d",r);

    return 0;
}
*/ 