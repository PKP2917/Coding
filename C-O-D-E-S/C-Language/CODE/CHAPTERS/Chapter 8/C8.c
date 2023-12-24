//---> STRING


//->  '\0' = Null Character.

/*
Printing the string(method 1) :-

#include<stdio.h>
#include<stdlib.h>

int main(){
    //char str[] = {'P','r','a','n','a','v','\0'};
    char str[] = "Pranav";           //-> C compiler automatically adds a null character and accepts the string.
    char *ptr = str;

    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    return 0;
}
*/

/*
Printing the string(method 2) :-  using pointer.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char *s="Pranav";
    printf("%s",s);

    return 0;
}
*/

/*
Printing the string(method 3) :-  using array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char s[]="Pranav";
    printf("%s",s);

    return 0;
}
*/

/*
Taking string as a input :-

#include<stdio.h>
#include<stdlib.h>

int main(){
    char s[17];
    printf("Enter your name : ");
    scanf("%s",s);

    printf("Your name is %s.",s);

    return 0;
}
*/


//->  'gets()' function = it is a function te get a multi word string as a input.

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    char s[17];
    printf("Enter your name : ");
    gets(s);

    printf("Your name is %s.",s);

    return 0;
}
*/

//-> 'puts()' function = prints the string and places the cursor on nest line

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    char s[17];
    printf("Enter your name : ");
    gets(s);
    puts(s);     //-> prints the output in the next line without the help of 'printf' function

    //printf("Your name is %s.",s);

    return 0;
}
*/


/*
//-> Standard Library functions for strings.
                1) strlen() -> tells the length of the string excluding the null character.
                2) strcpy() -> this is used to copy the content of second string into first string passed to it.
                3) strcat() -> used to concatenate two strings.
                4) strcmp() -> used to compare the strings.
*/


/*
1) strlen()

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *p = "pranav";
    int a= strlen(p);

    printf("The length of string p is %d",a);

    return 0;
}
*/

/*
2) strcpy()

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *p = "pranav";
    char p2[100];

    strcpy(p2,p);
    printf("Now the p2 is %s",p2);

    return 0;
}
*/

/*
3) strcat()

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char p1[50] = "pranav ";
    char *p2 = "patil";

    strcat(p1,p2);

    printf("Now the p is %s.",p1);

    return 0;
}
*/

/*
4)strcmp()

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char p1[50] = "pranav ";
    char *p2 = "patil";

    int val = strcmp(p1,p2);

    printf("Now the val is %d.",val);

    return 0;
}
*/


//-> PRACTICE SET

/*
Q.1)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[]="pranav";
    int p= strlen(s);

    printf("The length of string is %d.",p);

    return 0;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

int strlen(char *st);

int main(){
    char st[] ="Pranav";
    int l =strlen(st);

    printf("The length of the string is %d.",l);
    
    return 0;
}

int strlen(char *st){
    char *p=st;
    int len =0;

    while (*p != '\0')
    {
        len++;
        p++;
    }

    return len;  
}
*/

/*
Q.3)

#include<stdio.h>
#include<stdlib.h>

void slice(char *p, int m, int n);

int main(){
    char p[] ="Pranav";
    slice(p,1,5);
    
    printf("%s",p);

    return 0;
}

void slice(char *p, int m, int n){
    int i=0;

    while (m+i<n)
    {
        p[i] = p[i+m];
        i++;
    }
    
    p[i] = '\0';
}
*/

/*
Q.4)

#include<stdio.h>
#include<stdlib.h>

void encrypt(char *c);

int main(){
    char c[] = "Pranav";
    encrypt(c);
    printf("The Encrypted string is %s.",c);
    
    return 0;
}

void encrypt(char *c){
    char *p = c;
    while (*p != '\0')
    {
        *p = *p + 1;
        p++;
    }  
}
*/

/*
Q.5)

#include<stdio.h>
#include<stdlib.h>

void decrypt(char *c);

int main(){
    char c[] = "Qsbobw";
    decrypt(c);
    printf("The Decrypted string is %s.",c);
    
    return 0;
}

void decrypt(char *c){
    char *p = c;
    while (*p != '\0')
    {
        *p = *p - 1;
        p++;
    }  
}
*/

/*
Q.6)

#include<stdio.h>
#include<stdlib.h>

int occurence(char s[], char c);

int main(){
    char s[]="Pranav";
    int count = occurence(s,'a');

    printf("Occurences : %d.",count);
    
    return 0;
}

int occurence(char s[], char c){
    char *p = s;
    int count = 0;

    while (*p != '\0')
    {
        if(*p == c){
            count++;
        }
        p++;
    }
    
    return count;
}
*/