#include<stdio.h>
#include"arithmetic.h"
extern int add();
extern int mul(int, int);
int main()
{
printf("start project\n");
int n1, n2;
printf("enter two numbers to multiply/difference/divide:");
scanf("%d%d", &n1, &n2);

printf("inside main(). module1 returned sum =%d\n", add());
printf("inside main(). module2 returned product =%d\n", mul(n1,n2));
printf("inside main(). header referenced....difference=%d\n", sub(n1,n2));
printf("inside main(). header referenced....quotient=%f\n", div(n1,n2));

printf("\nEnd project\n");
return 0;
}
