#include<stdio.h>
#include<conio.h>

main()

{

    int x,y,z;
    clrscr();
    printf("enter of value x");
    scanf("%d",&x);
    printf("\n\nenter of value y");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("swapping:x=%d,y=%d",x,y);
    getch();

    }
