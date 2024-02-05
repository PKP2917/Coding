//---> OBJECT ORIENTED PROGRAMMING

//-> Class :- a class is a blueprint or template for creating objects. memory is not allocated to a class.
//-> Object :- it is an instantiation of a class. memory is allocated only after object instantiation.


/*
#include<iostream>
using namespace std;

class Hero{     //-> class creation
    public:

    //-> Properties(attributes)
    string name;
    int health;
    char level;

};

int main(){
    Hero h1;   //-> object creation

    h1.name = "Pranav";      //-> values given for Hero 'h1'(object)
    h1.health = 100;
    h1.level = 'A';

    cout<<h1.name<<endl;
    cout<<h1.health<<endl;
    cout<<h1.level<<endl;

    //cout<<"size : "<<sizeof(h1)<<endl;

    return 0;
}
*/


//-> Access Modifiers
/*
#include<iostream>
using namespace std;

class cricket{
    private:
    string name;    //-> this attribute can be only accessed in cricket class only

    void print(){
        cout<<name<<endl;;      //-> we can access name in this function only...
    }

    public:     //-> we can access this modifier anywhere in the code
    int jersey;
    int runs;
};

int main(){
    cricket c1;
    //c1.name = "Pranav";     -> this will give error bcs it can access bcs it is private attribute
    c1.jersey = 17;
    c1.runs = 33;

    //cout<<c1.name<<endl;    -> this will give error
    cout<<c1.jersey<<endl;
    cout<<c1.runs<<endl;

    return 0;
}
*/


//-> Getter and Setter -> to access private access modifiers 
/*
#include<iostream>
using namespace std;

class cricket{
    private:
    string name;    

    public:    
    int jersey;
    int runs;


    string getname(){    //-> getter(fetch)
        return name; 
    }

    void setname(string n){    //-> setter
        name = n;
    }
};

int main(){
    cricket c1;

    c1.setname("Sanjana");
    cout<<c1.getname()<<endl;    

    return 0;
}
*/


//-> Static and Dynamic Allocation
/*
#include<iostream>
using namespace std;

class Hero{     
    public:
    string name;
    int health;
    char level;
};

int main(){
    Hero a;          //-> static allocation
    a.name = "Pranav";     
    a.health = 17;
    a.level = 'A';

    cout<<"Static Allocation"<<endl;
    cout<<a.name<<endl;
    cout<<a.health<<endl;
    cout<<a.level<<endl;

    cout<<"---------------------------------------------------------------"<<endl;

    Hero *b = new Hero;   //-> dynamic allocation
    (*b).name = "Sanjana";     
    (*b).health = 33;
    (*b).level = 'B';

    cout<<"Dynamic Allocation"<<endl;
    cout<<(*b).name<<endl;    //-> 1st method 
    cout<<(*b).health<<endl;
    cout<<(*b).level<<endl;

    cout<<b->name<<endl;      //-> 2nd method
    cout<<b->health<<endl;
    cout<<b->level<<endl;

    return 0;
}
*/