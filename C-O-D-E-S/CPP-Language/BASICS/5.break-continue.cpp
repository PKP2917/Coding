// BREAKS AND CONTINUE


//-> BREAK STATEMENT

/*
#include<iostream>
using namespace std;

int main(){
    
    for (int i = 0; i < 11; i++)
    {
        if(i==9)
        {
            break;    //-> breaks the loop and ends and does not print the further code.
        }

        cout<<i<<endl;  
    }

    return 0;
}
*/


//-> CONTINUE STATMENT

/*
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 11; i++)
    {
        if(i==6)
        {
            continue;         //-> does not print the ongoing alteration for eg. here 6 will not be printed.
        }

        cout<<i<<endl;       
    }
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 3; i++)
    {
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;

        continue;

        cout<<"Reply tari de....";         //-> this is unreachable because of 'continue' statement.
    }

    return 0;
}
*/