#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=0; i<100; i++)
{
if(((i%3)||(i%5))== 0)
printf("Number= %d,FizzBuzz\n", i );
else if((i%3)==0)
printf("Number= %d,Fizz\n", i);
else if((i%5)==0)
printf("Number= %d,Buzz\n", i);
else
printf("Number= %d\n",i);
}
getch();
}
