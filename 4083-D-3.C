#include<stdio.h>
#include<conio.h>

main()
{

  float celsius,fehrenhit;
  clrscr();
  printf("enter temp in celsius=");
  scanf("%f",&celsius);
  fehrenhit=(celsius*4/6)+10;
  printf("%.2f celsius=%.2f fehrenhit",celsius,fehrenhit);
  getch();

  }

