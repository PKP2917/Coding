//---> FILE I/O


//-> FILE POINTER

/* 
Basic Syntax :-

FILE *ptr;
ptr = fopen("filename.ext","mode");
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r");   //--> for reading the file.
    ptr = fopen("sample.txt","w");   //--> for writing to a file.

    return 0;
}
*/


//-> FILE OPENING MODES

/*
    1) "r"  -> open for reading             //-> If the file does not exist, fopen returns "NULL".
    2) "rb" -> open for reading in binary   //-> If the file does not exist, fopen returns "NULL".
    3) "w"  -> open for writing             //-> If the file exists, the content will be overwritten.
    4) "wb" -> open for writing in binary   //-> If the file exists, the content will be overwritten.
    5) "a"  -> open for append              //-> If the file does not exists, it will be created.
*/

//-> TYPES OF FILES

/*
    1) Text Files ('.txt','.c')
    2) Binary Files ('.jpg','.dat')
*/


//-> READING THE CONTENTS OF FILES

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    int n1,n2;
    p = fopen("sample.txt","r");

    fscanf(p,"%d",&n1);          //-> 'fscanf' reads the content from the file and can copy the content from it.
    printf("The value of n1 is %d.\n",n1);

    fscanf(p,"%d",&n2);          
    printf("The value of n2 is %d.\n",n2);

    fclose(p);                   //-> compulsory closing the file after the work is done.

    return 0;
}
*/

//-> CHECKING IF THE FILE IS PRESENT OR NOT

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    int n1,n2;
    p = fopen("t.txt","r");

    if(p==NULL)
    {
        printf("The file does not exist.");
    }

    else
    {
        printf("The file exists.");

        fscanf(p,"%d",&n1);          
        printf("The value of n1 is %d.\n",n1);

        fscanf(p,"%d",&n2);          
        printf("The value of n2 is %d.\n",n2);
    }

    fclose(p);

    return 0;
}
*/

//-> WRITING THE CONTENTS OF FILE

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    int n=17;
    p = fopen("Open.txt","w");

    fprintf(p,"The number is %d",n);   //-> 'fprintf' helps us to write the content in the file.
    fprintf(p,"Thanks for visiting !!!");

    fclose(p);

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    p = fopen("getc.txt","r");

    char c =fgetc(p);          //-> only for reading only one character.
    printf("The value of my character is %c.\n",c);
    printf("The value of my character is %c.\n",c);
    printf("The value of my character is %c.\n",c);
    printf("The value of my character is %c.\n",c);
    printf("The value of my character is %c.\n",c);

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    p = fopen("getc.txt","r");
    
    //-> This reads the content by every character at a time.
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));
    printf("The value of my character is %c.\n",fgetc(p));

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    p = fopen("putc.txt","w");

    putc('c',p);
    fclose(p);

    return 0;
}
*/


/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    char c;
    p = fopen("getc.txt","r");

    c=fgetc(p);

    while (c != EOF)   //-> 'EOF' -> End Of File is a constant.
    {  
        printf("%c",c);
        c = fgetc(p);
    }
    
    fclose(p);

    return 0;
}
*/


//-> PRACTICE SET

/*
Q.1)

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    int n1,n2,n3;
    p = fopen("psq1.txt","r");
    fscanf(p,"%d",&n1);
    printf("The value of n1 is %d.\n",n1);

    fscanf(p,"%d",&n2);
    printf("The value of n1 is %d.\n",n2);

    fscanf(p,"%d",&n3);
    printf("The value of n1 is %d.\n",n3);

    fclose(p);

    return 0;
}
*/

/*
Q.2)

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p;
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    p = fopen("psq2.txt","w");
    
    for (int i = 1; i < 11; i++)
    {
        fprintf(p,"%d x %d = %d\n",n,i,i*n);
    }

    fclose(p);

    printf("Successfully generated the table of %d in 'psq2.txt' file.",n);
     
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p1;
    FILE *p2;
    p1 = fopen("psq3_1.txt","r");
    p2 = fopen("psq3_2.txt","w");

    char c;
    c = fgetc(p1);
    while (c != EOF)
    {
        fputc(c,p2);
        fputc(c,p2);
        c = fgetc(p1);
    }

    fclose(p1);
    fclose(p2);

    return 0;
}
*/