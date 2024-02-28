//---> OBJECT ORIENTED PROGRAMMING


/*
Constructor :- 
        Constructor is a special method which is invoked automatically at the time of object creation.
        It is used to initialize the data members of new object generally.
        The constructor has the same name as class or struture.
        
    Types :-
        1. Default Constructor(DC) :- A Constructor which has no arguements/ no return type is known as DC.
        2. Parameterized Constructor(PC) :- Constructor which has parameters is called as PC.
        3. Copy Constructor(CC) :- CC is an overloaded constructor used to declare and initialize
                                   an object from another object.
                Types of CC :- 
                        1. Default Copy Constructor
                        2. User-Defined Copy Constructor
*/

/*
//-> 1. Default Constructor(DC)     

#include<iostream>
using namespace std;

class Hero{     
    public:
    string name;
    int health;
    char level;

    Hero(){
        cout<<"Constructor Called!!!"<<endl;
    }
};

int main(){

    cout<<"Hi"<<endl;
    Hero pranav;   //-> object creation and then constructor is called
    cout<<"Hello"<<endl;

    return 0;
}
*/
/*
//-> 2. Parameterized Constructor(PC)

#include<iostream>
using namespace std;

class Hero{     
    public:
    string name;
    int health;
    char level;

    Hero(){
        cout<<"Constructor Called!!!"<<endl;
    }

    Hero(int health){                  //-> parameterized constructor    
        cout<<"this -> "<<this<<endl;
        this -> health = health;     //-> "this" is a pointer which stores the address of the current object/instance
    }

    Hero(int health, char level){                 
        this -> health = health;     
        this -> level = level; 
    }
};

int main(){

    Hero pranav(17);    //-> statically created object
    cout<<"Address of pranav : "<<&pranav<<endl;
    pranav.health;
    cout<<pranav.health<<endl;  

    Hero *h = new Hero(33, 'A');    //-> dynamically created object
    cout<<h->health<<endl;
    cout<<h->level<<endl;

    return 0;
}
*/
/*
//-> 3. Copy Constructor(CC)

#include<iostream>
using namespace std;

class Hero{     
    public:
    string name;
    int health;
    char level;

    Hero(){
        cout<<"Simple Constructor Called!!!"<<endl;
    }

    Hero(int health, char level){      
        this -> health = health;     
        this -> level = level; 
    }
};

int main(){

    Hero Sanjana(33, 'A');

    Hero Pranav(Sanjana);    //-> Copy Constructor :- copying the value from other object.
    cout<<Pranav.health<<endl;
    cout<<Pranav.level<<endl;

    return 0;
}
*/



/*
Destructor :-   
        To deallocate memory
        A Destructor works opposite to Constructor, it destructs the objects of classes.
        It can be defined only once in a class, and it is invoked automatically.
        A Destructor is defined like a constructor and it has no return type and no parameters.
                It must have same name as class, prefixed with a tilde sign(~).  
*/ 

/*
#include<iostream>
using namespace std;

class Hero{     
    public:
    string name;
    int health;
    char level;

    
    Hero(){       //->  Constructor
        cout<<"Constructor Called!!!"<<endl;
    }

    ~Hero(){       //->  Destructor
        cout<<"Destructor Called!!!"<<endl;
    }
};

int main(){

    //static
    Hero pranav;    //-> destructor is called automatically for static alocation

    //dynamic
    Hero *h = new Hero();  //-> we have to manually call destructor for dyanmic allocation
    delete h;

    return 0;
}
*/


//-> "static" keyword
/*
#include<iostream>
using namespace std;

class Hero{     
    public:
    string name;
    int health;
    char level;

    static int timeToComplete;   //-> this is a data member which belongs to class and does not need to create a object to access it

};

int Hero::timeToComplete = 17;

int main(){

    cout<<Hero::timeToComplete<<endl;

    return 0;
}
*/


//-> "static" functions
/*
#include<iostream>
using namespace std;

class Hero{     
    public:
    string name;
    int health;
    char level;

    static int timeToComplete; 

    static int random(){      //-> static functions can only access static data members
       return timeToComplete;
    }

};

int Hero::timeToComplete = 17;

int main(){
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

    return 0;
}
*/