#include<stdio.h>
#include<conio.h>
void main( )
{
 int a,b,c;
 printf("Please Enter 3 number");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {if(a>c)
 { printf("%d is greatest",a );}
 else
 {printf("%d  is greatest",c);}
 }
 else
 {if(b>c)
 {printf("%d is greatest",b);}
 else
 {printf("%d  is greatest",c);}
 }
 }
