#include<stdio.h>
int main()
{int a,b;
int lcm=1;
printf("Enter the numbers");
scanf("%d%d",&a,&b);
for(int i=1;i<=a*b;i++)
{if(a%i==0 && b%i==0)
lcm=i;
break;}
printf("The lcm of %d and %d number is %d",a,b,lcm);
}