//-> Functions


/*
#include<iostream>
using namespace std;

void sport();

int main(){
    sport();

    return 0;
}

void sport(){
    cout<<"MESSI is GOAT";
}
*/

/*
#include<iostream>
using namespace std;

int sum(int a, int b);    //-> function prototyping.

int main(){
    int n1,n2;            //->actual parameters(n1,n2)
    int c;
    cout<<"Enter n1 : ";
    cin>>n1;
    cout<<"Enter n2 : ";
    cin>>n2;

    c=sum(n1,n2);

    cout<<"The sum is "<<c;
    
    return 0;
}

int sum(int a, int b){    //-> formal parameters(a,b)  
    int c=a+b;
    return c;
}
*/

/*
#include<iostream>
using namespace std;

int power(int n1, int n2);

int main(){

    int n1,n2;
    cout<<"Enter the base : ";
    cin>>n1;
    cout<<"Enter the exponent : ";
    cin>>n2;

    int ans = power(n1,n2);
    cout<<"Answer : "<<ans;

    return 0;
}

int power(int n1, int n2){
    
    int p=1;
    for (int i = 1; i <= n2; i++)
    {
        p=p*n1;
    }
    
    return p;
}
*/

/*
#include<iostream>
using namespace std;

bool isEven(int n);

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    if(isEven(n)){
        cout<<"The Number is Even."<<endl;
    }

    else{
        cout<<"The Number is Odd."<<endl;
    }

    return 0;
}

bool isEven(int n){
    if(n&1){
       return 0;
    }

    else{
        return 1;
    }
}
*/

/*
#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;

    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);

    int ans=num/den;

    return ans;
}

int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    cout<<"Answer : "<<nCr(n,r)<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

bool isPrime(int n){
    bool a = true;
    for (int i = 2; i < n; i++)
    {
        if((n%i)==0){
            a= false;
        }
    }

    if(a==true){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    if(isPrime(n)==1){
        cout<<"The Number is Prime.";
    }
    else{
        cout<<"The Number is Not Prime.";
    }

    return 0;
}
*/


//-> Pass by value

/*
#include<iostream>
using namespace std;

void dummy(int n){       //-> copy of the number is produced in the dummy(int n) fucntion
    n++;             //-> this will add one in the value of n.
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    dummy(n);   

    cout<<"Number n : "<<n<<endl;  
    
    return 0;
}
*/