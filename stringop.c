

//Function signature or declaration
#include<stdio.h>
void acept(char []);
void display(char []);
int length1(char *a);
void copy1(char *, char*);
void concat1(char*, char*);
void pal(char []);
void equal(char [], char []);
void reverse(char []);
/*int length(char []);
void copy(char [], char[]);
void concat(char[], char[]);*/



//Main function
int main()
{
    char string1[50], string2[50], string3[50];
    int stringlen;
    acept(string1);
    display(string1);
    stringlen = length1(string1);
    //length_p(string1);
    printf("\nString Length = %d", stringlen);
    copy1(string1, string2);
    display(string2);
    pal(string1);
    reverse(string1);
    acept(string3);
    display(string3);
    concat1(string1, string3);
    display(string1);
    equal(string2, string3);
    
    
    return 0;
}



//Function to accept
void acept(char a[50])
{
    printf("\nEnter a string:");
    scanf("%s", a);
}



//Function to display
void display(char a[50])
{
    printf("\nString = %s", a);
}



//Function for length using pointer
/*int length(char a[50])
{
    int i, len = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}*/
int length1(char *a)
{
    int  len = 0;
    while( *a != '\0')
    {
        len++;
        a++;
    } 
}



//Function to copy using pointers
/*void copy(char a[50], char b[50])
{
    int i;
    for (i = 0; b[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    printf("\nCopied String = %s", b);
}*/
void copy1(char *a, char *b)
{
    while (*a != '\0')
    {
        *b = *a;
        a++;
        b++;
    }
    *b = '\0';
    printf("\nCopied String :");
}



//Function to concatenate using pointers
void concat1(char *a, char *b)
{
     int i,k;
     k = length1(a);
     for(i=0;i<k;i++)
     {
        a++;
     }
     while(*b!='\0')
     {
         *a=*b;
         a++;
         b++;
     }
    *a = '\0';
    printf("\nConcatenated string:");
}



//Function to check if string is palindrome
void pal(char a[50])
{
    char b[50];
    int i,le,c = 0;
    le = length1 (a);
    for (i = 0; a[i] != '\0'; i++)
    {
        b[le-1-i] = a[i];
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        if(b[i] == a[i])
        {
            c++;
        }
    }
    if(c == le)
    {
        printf("\nThe string %s is palindrome", a);
    }
    else
    {
        printf("\nThe string %s is not palindrome", a);
    }
}



//Function to check if 2 strings are equal
void equal(char a[50], char b[50])
{
    int i, c = 0;
    if (length1(a) == length1(b))
    {
        for(i = 0; i< length1(a); i++)
        {
            if(a[i] == b[i])
            {
                c++;
            }
        }
    }
    
    if (c == length1(a))
    {
        printf("\nThe strings %s & %s are equal", b ,a);
    }
    else
    {
        printf("\nThe strings %s & %s are not equal", b,a);
    }
}



//Function to find reverse of string
void reverse(char a[])
{
    int i=0, j;
    char b[50];
    for(j = length1(a)-1; j>=0; j--,i++)
    {
        b[i] = a[j];
    }
    printf("\nReverse string = %s", b);
}





/*******************************************************************************************
 OUTPUT:
 Enter a string:amr
 
 String = amr
 String Length = 3
 Copied String :
 String = amr
 The string amr is not palindrome
 Reverse string = rma
 Enter a string:amr
 
 String = amr
 Concatenated string:
 String = amramr
 The strings amr & amr are equal
 *******************************************************************************************/






