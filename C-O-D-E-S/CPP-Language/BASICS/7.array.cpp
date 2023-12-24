//---> ARRAYS


//-> BASICS

/*
#include<iostream>
using namespace std;

int main(){
    int marks[]={100,99,98,97,96};
    
    cout<<"The marks of student 1 is "<<marks[0]<<endl;
    cout<<"The marks of student 1 is "<<marks[1]<<endl;
    cout<<"The marks of student 1 is "<<marks[2]<<endl;
    cout<<"The marks of student 1 is "<<marks[3]<<endl;
    cout<<"The marks of student 1 is "<<marks[4]<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int rollno[]={1,2,3,4,5,6,7,8,9,0};
    for (int  i = 0; i < 10; i++)
    {
        cout<<"Roll No : "<<rollno[i]<<endl;
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    char ch[3] = {'P' , 'K' , 'P'};

    for (int i = 0; i < 3; i++)
    {
        cout<<ch[i]<<"  ";
    }

    return 0;
}
*/


//-> Array with Functions

/*
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array : "<<endl;
    for (int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    cout<<"-------------------------------"<<endl;
}

int main(){
    // int n =10;
    int first[10] = {0};
    int second[5] = {1,2,3,4,5};
    int third[5] = {1,2};
    int fourth[3] = {1};

    printArray(first,10);
    printArray(second,5);
    printArray(third,5);
    printArray(fourth,3);

    return 0;
}
*/

//-> Finding the greatest number in array .
/*
#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }
    
    return min;
}

int getMax(int num[], int n){
    int max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if(num[i] > max){
            max = num[i];
        }
    }

    return max;
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    cout<<"-------------------"<<endl;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"Maximum Value : "<<getMax(num,size)<<endl;
    cout<<"Minimum Value : "<<getMin(num,size)<<endl;
    
    return 0;
}
*/


//-> Finding the greatest number in array using in-built functions.
/*
#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int mini = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
       mini = min(mini, num[i]);
    }
    
    return mini;
}

int getMax(int num[], int n){
    int maxi = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
    }

    return maxi;
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    cout<<"-------------------"<<endl;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"Maximum Value : "<<getMax(num,size)<<endl;
    cout<<"Minimum Value : "<<getMin(num,size)<<endl;
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"-----------------------------------------------"<<endl<<endl;
    cout<<"Printing the array using update function."<<endl;

    arr[0] = 120; //-> this will also update in main function. unlike variables in array the values in changed wrt address of the array index.

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"-----------------------------------------------"<<endl<<endl;
} 

int main(){
    int arr[3]={1,2,3};

    update(arr,3);

    cout<<"-----------------------------------------------"<<endl<<endl;
    cout<<"Printing the array in main function."<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the Elements";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;

    for (int i = 0; i < 5 ; i++)
    {
        sum=sum+arr[i];
    }
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"The sum of all elements of array is "<<sum<<"."<<endl;
    cout<<"--------------------------------------------"<<endl;

    return 0;
}
*/


//-> Linear Search

/*
#include<iostream>
using namespace std;

int main(){
    bool a = false;

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int arr[5]={1,12,17,29,33};

    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==n){
            a = true;
        }
    }

    if(a==true){
        cout<<"Key is present in the array.";
    }
    else{
        cout<<"Key is not present in the array.";
    }
    
    return 0;
}
*/


//-> Reverse an Array

/*
#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array : ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(arr,n);
    cout<<"Reversed Array : ";
    printArray(arr,n);

    return 0;
}
*/