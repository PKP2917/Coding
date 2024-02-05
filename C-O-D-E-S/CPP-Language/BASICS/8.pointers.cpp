//---> POINTERS 


/*
#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}
*/ 

/*
#include<iostream>
using namespace std;

int main(){
    int i=17;

    //int *p;      -> this is bad practice, it will take garbage value
    int *p = 0;     //-> instead initialise it with 0
    p = &i;

    cout<<p<<endl;
    cout<<*p<<endl;
    
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int num = 17;
    int a = num;
    a++;

    cout<<num<<endl;

    int *p = &num;
    cout<<"Before : "<<num<<endl;
    (*p)++;
    cout<<"After : "<<num<<endl;

    return 0;
}
*/


//-> Pointer to Pointer
/*
#include<iostream>
using namespace std;

int main(){
    int a = 17;
    int *b = &a;
    int **c = &b;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<*b<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;

    return 0;
}
*/