#include<stdio.h>
int main()
{
float a,b,sum,div,mul,sub;//sum=summation,div=division,mul=multiplication,sub=substraction,
printf("Enter a,b:");
scanf("%f,%f",&a,&b);
printf("a=%f,b=%f\n",a,b);

sum=a+b;
div=a/b;
mul=a*b;
sub=a-b;
printf("sum=%f\n",sum);

printf("div=%f\n",div);

printf("mul=%f\n",mul);

printf("sub=%f\n",sub);

printf("A small calculator\n");
printf("Thank you!");

return 0;
}
