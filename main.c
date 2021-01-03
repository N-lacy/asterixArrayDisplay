#include <stdio.h>
#include <stdlib.h>
#include "letters.h"
#include <conio.h>

int main()
{
    char a[100];
    int i,j,counter=0;
    for (i=0; i<99; i++)
            a[i]='\0';
    for (j=0; j<100; j++)
    {
        system("CLS");
        printf("Hello world!\n\n\t\t Welcome to Astrix Array Display (AAD)\nEnter THE WORD you want to print:");
        printf("Enter a sentence(NB: 1(Backspace), 0(Done))  : You have (%d/100)\n",100-j);
        for (i=0; i<j; i++)
            printf("%c",a[i]);
        a[j]='\0';
        a[j]=getch();
        if (a[j]=='1')
        {
            a[j]='\0';
            j=j-2;
            counter--;
            continue;
        }
        counter++;
        if (a[j]=='0')
            break;
    }
    selector(a);

    return 0;
}
