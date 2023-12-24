//-> BASICS AND FIRST PROGRAM


/*
METHOD 1: 

#include<iostream>

int main(){
    std::cout<<"Namaskar";

    return 0;
}
*/

/*
METHOD 2: 

#include<iostream>
using namespace std;        //-> used to avoid writing 'std::' before cout.

int main(){
    cout<<"Namaskar";

    return 0;
}
*/

/*
Variables -> Containers to store data. -> (int a=12 or float b=30.6)
Comments  -> This code will not print.
            1) Single line comment -> // 
            2) Multi line comment -> /*__*/


/*
#include<iostream>
using namespace std;

int main(){
    int a=1,c;
    float b=2;
    c=a+b;

    cout<<"The value of c is "<<c;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a=12;
    char b ='c';
    float d=2.9;
    double e=9.0887;
    bool f = true;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;

    return 0;
}
*/

/*
Variable scope :-
            1. Local Variables.
            2. Global Variables.
*/

/*
C++ Data Types :-
    1) Built-in Data Types(int,float,char,double,bool)
    2) User-Defined(struct,union,enum)
    3) Derived(array,function,pointer)
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a=3;
    float b=2.4;
    char c='d';
    double e=3.458559;
    bool is_true= false;

    cout<<"\n"<<a;
    cout<<"\n"<<b;
    cout<<"\n"<<c;
    cout<<"\n"<<e;
    cout<<"\n"<<is_true;      //-> (0 -> false) and (1 -> true)

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int glo=10;             //-> global variable
void sum();

int main(){
    int glo=17;         //-> local variable 
    
    sum();
    cout<<glo;          //-> local variable has precedence over global variable.

    return 0;
}

void sum(){
    int a;
    cout<<glo;

}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a=2;
    float b=10.17;
    char c='m';

    cout<<"Size of a is "<<sizeof(a)<<endl;
    cout<<"Size of b is "<<sizeof(b)<<endl;
    cout<<"Size of c is "<<sizeof(c)<<endl;

    return 0;
}
*/

/*
Header Files
    1. System Header Files :- It comes with the compiler.
        eg ->    #include<iostream>
    2. User Defined Header Filea :- It is written by the programmer.
        eg ->    #include"this.h"   -> 'this.h' is a file which should be present in current directory.
*/

/*
Operators in C++ :-
    1) Arithmetic Operators :- '+' , '-' , '*' , '/' , '%' , '++' , '--'.
    2) Assignment Opertaors :- used to assign the values to variables.
    3) Comparison Operators :- '==' , '>=' , '<=' , '>' , '<' , '!='.
    4) Logical Operators    :- '&&' , '||' , '!'.
*/

/*
1) Arithmetic Operators :-

#include<iostream>
using namespace std;

int main(){
    int a=10,b=5;

    cout<<"Operators in C++"<<endl;
    cout<<"1. Arithmetic Operators :- "<<endl;

    cout<<"The value of (a+b) is "<<a+b<<"."<<endl;
    cout<<"The value of (a-b) is "<<a-b<<"."<<endl;
    cout<<"The value of (a*b) is "<<a*b<<"."<<endl;
    cout<<"The value of (a/b) is "<<a/b<<"."<<endl;
    cout<<"The value of (a%b) is "<<a%b<<"."<<endl;
    cout<<"The value of (a++) is "<<a++<<"."<<endl;
    cout<<"The value of (++a) is "<<++a<<"."<<endl;
    cout<<"The value of (a--) is "<<a--<<"."<<endl;
    cout<<"The value of (--a) is "<<--a<<"."<<endl;

    return 0;
}
*/

/*
2) Assignment Opertaors :-

#include<iostream>
using namespace std;

int main(){
    int a=3;
    float b=9.8;
    char c='w';

    return 0;
}
*/

/*
3) Comparison Operators :-

#include<iostream>
using namespace std;

int main(){
    int a=17,b=10;
    cout<<"3. Comparison Operators :-"<<endl;

    cout<<"The value of (a==b) is "<<(a==b)<<"."<<endl;
    cout<<"The value of (a>=b) is "<<(a>=b)<<"."<<endl;
    cout<<"The value of (a<=b) is "<<(a<=b)<<"."<<endl;
    cout<<"The value of (a>b) is "<<(a>b)<<"."<<endl;
    cout<<"The value of (a<b) is "<<(a<b)<<"."<<endl;
    cout<<"The value of (a!=b) is "<<(a!=b)<<"."<<endl;

    return 0;
}
*/

/*
4) Logical Operators :-

#include<iostream>
using namespace std;

int main(){
    int a=17,b=10;
    cout<<"3. Comparison Operators :-"<<endl;

    cout<<"The value of (a==b) is "<<(a==b)<<"."<<endl;
    cout<<"The value of (a>=b) is "<<(a>=b)<<"."<<endl;
    cout<<"The value of (a<=b) is "<<(a<=b)<<"."<<endl;
    cout<<"The value of (a>b) is "<<(a>b)<<"."<<endl;
    cout<<"The value of (a<b) is "<<(a<b)<<"."<<endl;
    cout<<"The value of (a!=b) is "<<(a!=b)<<"."<<endl;
    cout<<"------------------------------------------------------------------------------------------------"<<endl;

    cout<<"4. Logical Operators :- "<<endl;

    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<"."<<endl;
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<"."<<endl;
    cout<<"The value of this logical NOT operator (!(a==b)) is "<<(!(a==b))<<"."<<endl;

    return 0;
}
*/

/*
5) Bitwise Operators :-

#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=17;

    cout<<(a&b)<<endl;    //-> AND
    cout<<(a|b)<<endl;    //-> OR
    cout<<~b<<endl;       //-> NOT
    cout<<(a^b)<<endl;    //-> XOR
    cout<<"------------------------------------"<<endl;

    cout<<(++a)<<endl;      //-> pre-increment
    cout<<(--a)<<endl;      //-> pre-decrement
    cout<<(a++)<<endl;      //-> post-increment
    cout<<(a--)<<endl;      //-> post-decrement
    cout<<(++b)<<endl;
    cout<<(--b)<<endl;
    cout<<(b++)<<endl;
    cout<<(b--)<<endl;
    cout<<"------------------------------------"<<endl;
    
    //-> Left-shift operator
    cout<<(19<<1)<<endl;
    cout<<(17<<2)<<endl;
    //-> Right-shift operator
    cout<<(19>>1)<<endl;
    cout<<(17>>2)<<endl;
    
    return 0;
}
*/

//-> OPERATOR PRECEDENCE

/*
#include<iostream>
using namespace std;

int main(){
    int a=3,b=9;
    int c= (a*9)+b-90;
    cout<<c<<endl;

    return 0;
}
*/

// REFERENCE VARIABLES AND TYPE-CASTING

/*
#include<iostream>
using namespace std;

int c=29;

int main(){
    int a,b,c;

    cout<<"Enter the value of a : "<<endl;
    cin>>a;

    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    c=a+b;

    cout<<"The sum is "<<c<<"."<<endl;
    cout<<"The Global c is "<<::c<<"."<<endl;      // '::' -> scope resolution operator.

    return 0;
}
*/

//-> REFERENCE VARIABLES  :- To give another name for a same value.

/*
#include<iostream>
using namespace std;

int main(){
    int a=17;
    int &b =a;   //-> reference variable

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
*/

//-> TYPE-CASTING

/*
#include<iostream>
using namespace std;

int main(){
    int a=89;
    float b=23.78;

    cout<<"The value of a is "<<(float)a<<"."<<endl;
    cout<<"The value of a is "<<float(a)<<"."<<endl;
    cout<<"The value of b is "<<(int)b<<"."<<endl;
    cout<<"The value of b is "<<int(b)<<"."<<endl;

    cout<<"--------------------------------------------------"<<endl;

    cout<<"The Expression is "<<a+b<<endl;;
    cout<<"The Expression is "<<a+int(b)<<endl;;
    cout<<"The Expression is "<<a+(int)b<<endl;;

    return 0;
}
*/

//-> FLOAT, DOUBLE, LONG DOUBLE LITERALS

/*
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    float d=33.17f;            //-> to specify it as a float.
    long double e = 33.17l;    //-> to specify it as a long double.

    cout<<"The vaue of d is "<<d<<"."<<endl<<"The value of e is "<<e<<"."<<endl;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<"."<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4f)<<"."<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4F)<<"."<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4l)<<"."<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4L)<<"."<<endl;

    return 0;
}
*/

//-> CONSTANTS

/*
#include<iostream>
using namespace std;

int main(){
    const int a=33;  //-> we canoot change the value of a.
    cout<<"The value of a is "<<a<<endl;

    return 0;
}
*/

//-> MANIPULATORS  
/*
1) endl
2) setw(can use when we include iomanip)
*/

/*
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=10,b=100,c=1000;
    cout<<"The use of endl:-"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<b<<endl;
    cout<<"The value of a is "<<c<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"The use of setw:-"<<endl;
    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of a is "<<setw(4)<<b<<endl;
    cout<<"The value of a is "<<setw(4)<<c<<endl;

    return 0;
}
*/

// BASIC I/O IN C++

/*
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the value of n1: \n";        //-> insertion operator
    cin>>n1;                                  //-> extraction operator
    cout<<"Enter the value of n2: \n";
    cin>>n2;
    cout<<"The sum is "<<n1+n2<<".\n";

    int s;
    s=n1+n2;
    cout<<"The sum is "<<s<<".\n";

    return 0;
}
*/