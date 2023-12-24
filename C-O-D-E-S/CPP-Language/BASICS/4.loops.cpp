// C++ LOOPS

//-> FOR LOOP

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<"---------------------------------------------"<<endl;

    for (int i = 1; i < 11; i++)
    {
        cout<<""<<n<<"\tX\t"<<""<<i<<"\t=\t"<<""<<n*i<<endl;;
    }
    
    return 0;
}
*/

//-> WHILE LOOP

/*
#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    int fac=1;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    while (i<=n)
    {
        fac=fac*i;
        i++;  
    }

    cout<<"The Factorial of "<<n<<" is "<<fac<<"."<<endl;

    return 0;
}
*/

//-> DO-WHILE LOOP

/*
#include<iostream>
using namespace std;

int main(){
    int i=1;

    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool prime=true;

    for (int i = 2; i < n; i++)
    {
        if((n%i)==0)
        {
            prime = false;
            break;
        }
    }  

    if(prime==true)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not Prime Number";
    }

    return 0;
}
*/