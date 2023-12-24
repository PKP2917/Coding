//---> STL (Standard Template Library)


//-> Array Data Structure

/*
#include<iostream>
#include<array>
using namespace std;

int main(){
    int basicarray[3] = {1 , 2 , 3};

    array<int,4> a = {1 , 2 , 3 , 4};

    int size = a.size();

    cout<<"Array : ";
    for (int i = 0; i < size ; i++)
    {
        cout<<" "<<a[i];
    }

    cout<<endl;
    cout<<"Element at 2nd Index is "<<a.at(2)<<endl;

    cout<<"Empty or NOT : "<<a.empty()<<endl;

    cout<<"First Element : "<<a.front()<<endl;
    cout<<"Last Element : "<<a.back()<<endl;

    return 0;
}
*/


//-> Vector Data Structure

/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    // vector<int> v(5,2);   //-> it initializes the vector with capacity '5' and every element is initialized with '1'.
    cout<<"Vector : ";
    for (int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"Capacity : "<<v.capacity()<<endl;  //-> it tells the space to store the elements.
    cout<<"Size : "<<v.size()<<endl;          //-> it tells the number of elements present in the vector.

    v.push_back(1);      //-> to insert the element in vector
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    v.push_back(3);   //-> as there the capcity of initial vector is 2, in order to push 3 elements we have to double the vector capacity.
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    v.push_back(4);
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    v.push_back(5);  //-> as there the capcity of initial vector is 4, in order to push 5 elements we have to double the vector capacity.
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;


    cout<<"Element at 2nd Index : "<<v.at(2)<<endl;   //-> it tells at a particular index

    cout<<"First Element : "<<v.front()<<endl;
    cout<<"Last Element : "<<v.back()<<endl;


    cout<<"Before Pop : ";
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();    //-> it removes the element from the vector.

    cout<<"After Pop : ";
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Before Clear :-"<<endl;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.clear();   //-> this clears the vector and the size becomes 0 but the capacity remains same.
    cout<<"After Clear :-"<<endl;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    return 0;
}
*/


//-> Deque Data Structure (Double Ended Queue)

/*
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_front(1);  //-> it inserts '1' at the front of queue.
    d.push_back(2);   //-> it inserts '2' at the back of queue.

    cout<<"After inserting Elements in Deque."<<endl;
    cout<<"Deque : ";
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back();   //-> it deletes the back element.
    // d.pop_front();  //-> it deletes the front element.

    
    cout<<"Print the Element at First Index : "<<d.at(1)<<endl;

    cout<<"Front Element : "<<d.front()<<endl;
    cout<<"Back Element : "<<d.back()<<endl;

    cout<<"Empty or not : "<<d.empty()<<endl;

    cout<<"Before Erase , Size : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After Erase , Size : "<<d.size()<<endl;

    return 0;
}
*/


//-> List Data Structure  (it is a doubly linked list)

/*
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(2);   //-> it inserts '2' at the back of the list.
    l.push_front(1);  //-> it inserts '1' at the front of the list.

    cout<<"After inserting Elements in List."<<endl;
    cout<<"List : ";
    for (int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // l.pop_back();   //-> it deletes the back element.
    // l.pop_front();  //-> it deletes the front element.

    l.erase(l.begin());   //-> this will delete the first element.
    cout<<"After Erase : "<<endl;
    for (int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list : "<<l.size()<<endl;

    return 0;
}
*/


//-> Stack Data Structure

/*
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Pranav");  //-> as we push this at first so this will be at the bottom of stack.
    s.push("Kumar");
    s.push("Patil");   //-> as we push this at last so this will be at the top of stack.

    cout<<"Top Element : "<<s.top()<<endl;
    s.pop();   //-> this will delete/remove the top most element.
    cout<<"Top Element : "<<s.top()<<endl;

    cout<<"Size of Stack : "<<s.size()<<endl;

    cout<<"Empty or Not : "<<s.empty()<<endl;

    return 0;
}
*/


//-> Queue Data Structure

/*
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Pranav");
    q.push("Kumar");
    q.push("Patil");
    
    cout<<"First ELement : "<<q.front()<<endl;
    q.pop();
    cout<<"First ELement : "<<q.front()<<endl;
    
    cout<<"Size of the Queue : "<<q.size()<<endl;

    cout<<"Empty or Not : "<<q.empty()<<endl;

    return 0;
}
*/


//-> Priority Queue

/*
#include<iostream>
#include<queue>
using namespace std;

int main(){

    //-> max heap
    priority_queue<int> maxi;

    //-> min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(6);
    maxi.push(3);
    maxi.push(4);
    maxi.push(2);

    int n = maxi.size();
    cout<<"Priority Queue(Max Heap) : ";
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(6);
    mini.push(3);
    mini.push(4);
    mini.push(2);

    int m = mini.size();
    cout<<"Priority Queue(Min Heap) : ";
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    return 0;
}
*/


//-> Set Data Structure  (only unique elements are present in the set, no repetition)

/*
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(7);
    s.insert(3);
    s.insert(1);

    cout<<"Before Erasing : ";
    for (auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    s.erase(s.begin());  //-> this will delete the first element from the set.
    cout<<"After Erasing : ";
    for (auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Is '3' present ??? -> "<<s.count(3)<<endl;

    return 0;
}
*/


//-> Map Data Structure  (data is stored in the form of key-value pair, and every key is unique and will point to only one value)

/*
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1] = "Pranav";
    m[2] = "Kumar";
    m[3] = "Patil";

    m.insert( {4, "Football" });  //-> another way to insert element in map.

    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"Is '3' present in the map ??? -> "<<m.count(3)<<endl;
    cout<<"Is '5' present in the map ??? -> "<<m.count(5)<<endl;

    cout<<"Before Erase : "<<endl;
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(2);
    cout<<"After Erase : "<<endl;
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
*/