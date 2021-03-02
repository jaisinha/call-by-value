#include<iostream.h>
#include<conio.h>

int sum(int a,int b)
{
a+=10;
b+=10;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;

}
void main()
{
clrscr();
int x=20;
int y=10;
sum(x,y);//call by value
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;

getch();

}
