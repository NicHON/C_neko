/* inc02.c */

#include<stdio.h>

int main()
{
 int a, b;
 
 /*この書き方に注意！*/
 /*結合規則によりb=10が先に評価され、この式の値が10となる*/
 /* a = ( b=10 )であり,aに10が代入される */
 a = b = 10;

 printf("a = %d\n", ++a);
 b = b + 1;
 printf("b = %d\n", b);
 
 return 0;
}
