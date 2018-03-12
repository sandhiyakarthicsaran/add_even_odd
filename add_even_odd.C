#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,s,a;
scanf("%d",&n1);
scanf("%d",&n2);
s=n1+n2;
a=s%2;
if(a==0)
printf("EVEN");
else
printf("ODD");
return 0;
}
