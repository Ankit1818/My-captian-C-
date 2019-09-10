#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int x,y,res;
clrscr();
printf("Enter first number:- ");
scanf("%d",&x);
printf("Enter second number:- ");
scanf("%d",&y);
printf("\n..........Before swaping...........");
printf("\nFirst number:- %d",x);
printf("\nSecond nunber:- %d\n",y);
swap(&x,&y);
printf("\n..........After swaping.............");
printf("\nFirst number:-  %d",x);
printf("\nSecond number:- %d",y);
getch();
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}