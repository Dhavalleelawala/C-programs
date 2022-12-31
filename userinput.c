/*
Program For User Input Name First Char..
now this program for A to H..
*/
#include<stdio.h>
void A()
{
       int i,j;
 for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(i==1&&j==3 || i==2 && j==2 || i==2 && j==4 || i==3 || i>3 && j==1 || i>3 && j==5)
        printf("* ");
        else
        printf("  ");
    }printf("\n");
 }
}
void B()
{
    int i,j;
    for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(i==1 && j!=5 || i==5 && j!=5 || j==1 || i==3 && j!=5 || i==2 && j==5 || i==4 && j==5)
        printf("*");
         else
         printf(" ");
    }printf("\n");
 }
}
void C()
{
    int i,j;
    for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(i==1 && j!=1 || i==5 && j!=1 || j==1 && i!=5 && i!=1)
        printf("* ");
         else
         printf("  ");
    }printf("\n");
 }
}
void D()
{
    int i,j;
    for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(i==1 && j!=5 || j==2 || i==5 && j!=5 || j==5 && i!=1 && i!=5)
        printf("* ");
         else
         printf("  ");
    }printf("\n");
 }
} 
void E()
{
    int i,j;
    for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(i==1 || j==1|| i==3 && j!=5 || i==5)
        printf("* ");
         else
         printf("  ");
    }printf("\n");
 }
}
void F()
{
    int i,j;
    for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(i==1 || j==1|| i==3 && j!=5)
        printf("* ");
         else
         printf("  ");
    }printf("\n");
 }
}
void G()
{
    int i,j;
    for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(i==1 && j!=1 || i==5 && j!=1 || j==1 && i!=5 && i!=1 || i==3 && j!=2 || i==4 && j==5)
        printf("* ");
         else
         printf("  ");
    }printf("\n");
 }
}
void H()
{
    int i,j;
    for(i=1;i<=5;i++) {
    for(j=1;j<=5;j++) {
        if(j==1||i==3||j==5)
        printf("* ");
         else
         printf("  ");
    }printf("\n");
 }
}
void main()
{
    char ch;
    printf("Enter your name first character in uppercase: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
        A();
        break;
    case 'B':
        B();
        break;
    case 'C':
        C();
        break;
    case 'D':
        D();
        break;
    case 'E':
        E();
        break;
    case 'F':
        F();
        break;
    case 'G':
        G();
        break;
    case 'H':
        H();
        break;
    default:
    printf("\t\t Worning");
    printf("\n please enter your name first character in uppercase...");
        break;
    }
}
