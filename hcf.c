#include<stdio.h>
int main()
{int a,b;
int hcf=1;
printf("Enter the numbers");
scanf("%d%d",&a,&b);
int min=a<b?a:b;
for(int i=1;i<=min;i++)
{if(a%i==0 && b%i==0)
hcf=i;
}
printf("The hcf of %d and %d number is %d",a,b,hcf);
}