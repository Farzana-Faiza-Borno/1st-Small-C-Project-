#include<stdio.h>
#include<strings.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define MaxLimit 100
#define MaxRange 1000000

int factorial(int n)
{
if(n==1||n==0)
return 1;
else 
return n*factorial(n-1);
}
int main()
{
printf("***********A C PROJECT***********\n");
printf("             WELCOME!    \n");
int game=1;
int score=100;
int play=0;
int try;
int sum=0;
printf("It's A Gaming Mini Project.....You are given 100 score at starting of the game\n");
printf("--------------GAME BEGINS--------------\n");
while(game)
{
printf("1)Calculator Game\n");
printf("2)Number Guessing Game\n");
printf("3)Month Guessing Game\n");
printf("4)Leap Year Game\n");
printf("\n");
printf("The first game is score storing game ....  In this step the more you will play the more you will earn score\n");
printf("In 2nd 3rd and 4th game you will lose score for wrong guess\n");
printf("\n");
printf("What Would You Like To Play?\n");
int num;
scanf("%d",&num);
 int samegame=1;

    switch(num)
{
   
case 1: 
while(samegame)
{printf("#######Calculator Game Begins#######\n");
printf("Which Operator Do You Want To Use?(+ - * / % ! )\n");
char op;
scanf(" %c",&op);
int a,b;
if(op=='+'||op=='-'||op=='/'||op=='*'||op=='%')
{printf("Enter Two Numbers:");

scanf("%d %d",&a,&b);
switch(op)
{
case '+': printf("SUMMATION=%d\n",a+b);
break;
case '-': printf("SUBTRACTION=%d\n",a-b);
break;
case '*': printf("MULTIPLICATION=%d\n",a*b);
break;
case '/': printf("DIVISION=%lf\n",(double)a/b);
break;
case '%': printf("REMAINDER=%d\n",a%b);
break;
}
}
else if(op=='!')
{printf("Enter A Number:\n");
scanf("%d",&a);
printf("%d!=%d\n",a,factorial(a));}
score++;
play++;
char ch;
printf("Do You Want To Play Same Game Again?(Y/N)\n");
scanf(" %c",&ch);
if(ch=='Y')
samegame=1;
else
{
    samegame=0;
}
}
printf("Now your score is %d\n",score);
break;
case 2: 

while(samegame)
{
    try=0;
    printf("#######Number Guessing Game#######\n");
srand(time(0));
int number=rand()%100 +1;
int guess;

do{
    printf("Enter Your Guess:");
scanf("%d",&guess);
try++;
if(guess<number)
{printf("YOUR GUESS IS LOW\n");
score--;}
else if(guess>number)
{printf("YOUR GUESS IS HIGH\n");
score--;}
else
{score++;
printf("YOUR GUESS IS RIGHT >>>> IT IS %d\n",guess);}

} while(guess!=number);
play++;
char ch;
printf("Do You Want To Play Same Game Again?(Y/N)\n");
scanf(" %c",&ch);
if(ch=='Y')
samegame=1;
else
{
    samegame=0;
}
}
printf("You have tried %d times and now your score is %d\n",try,score);
break;
case 3:  
while(samegame)
{
    try=0;
printf("#######Month Guessing Game#######\n");
srand(time(0));
int number2=rand()%12 +1;
int guess2;

do{
    printf("Enter Your Guess Month Number:");
scanf("%d",&guess2);
try++;
if(guess2<number2)
{printf("YOUR GUESS IS LOW\n");
score--;}
else if(guess2>number2)
{printf("YOUR GUESS IS HIGH\n");
score--;}
else
{
    score++;
switch(guess2)
{
    case 1:printf("YOUR GUESS IS RIGHT >>>> IT IS January\n");
    break;
    case 2:printf("YOUR GUESS IS RIGHT >>>> IT IS February\n");
    break;
    case 3:printf("YOUR GUESS IS RIGHT >>>> IT IS March\n");
    break;
    case 4:printf("YOUR GUESS IS RIGHT >>>> IT IS April\n");
    break;
    case 5:printf("YOUR GUESS IS RIGHT >>>> IT IS May\n");
    break;
    case 6:printf("YOUR GUESS IS RIGHT >>>> IT IS June\n");
    break;
    case 7:printf("YOUR GUESS IS RIGHT >>>> IT IS July\n");
    break;
    case 8:printf("YOUR GUESS IS RIGHT >>>> IT IS August\n");
    break;
    case 9:printf("YOUR GUESS IS RIGHT >>>> IT IS September\n");
    break;
    case 10:printf("YOUR GUESS IS RIGHT >>>> IT IS October\n");
    break;
    case 11:printf("YOUR GUESS IS RIGHT >>>> IT IS November\n");
    break;
    case 12:printf("YOUR GUESS IS RIGHT >>>> IT IS December\n");
    break;

}

}


}while(guess2!=number2);
play++;
char ch2;
printf("Do You Want To Play Same Game Again?(Y/N)\n");
scanf(" %c",&ch2);
if(ch2=='Y')
samegame=1;
else
{
    samegame=0;
}
}
printf("You have tried %d times and now your score is %d\n",try,score);
break;
case 4: 
while(samegame)
{
    try=0;
printf("#######Leap Year Game#######\n");
  int y,measure;
  printf("Guess a year that you think will be leap year:\n");
    scanf("%d",&y);
    try++;
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                score++;
                printf("%d is leap year is \n",y);
                measure=0;
            }
            else
                {
                    score--;
                    printf("no it is not a leap year\n");
                measure=1;
                }

        }
        else
            {
                score++;
                printf("%d is leap year\n",y);
            measure=0;}
    }
    else
        {
            score--;
            printf("no it is not a leap year\n");
        measure=1;}

        while(measure)
        {
            y++;
            if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("the next leap year is %d\n",y);
                measure=0;
            }
            else
                {
                measure=1;
                }

        }
        else
            {printf("the next leap year is %d\n",y);
            measure=0;}
    }
    else
        {
        measure=1;}
        }


play++;

char ch2;
printf("Do You Want To Play Same Game Again?(Y/N)\n");
scanf(" %c",&ch2);
if(ch2=='Y')
samegame=1;
else
{
    samegame=0;
}
}
printf("You have played %d times and now your score is %d\n",try,score);
break;

}

printf("Do You Want To Play Another Game?(Y/N)\n");
char ch1;
scanf(" %c",&ch1);
if(ch1=='Y')
{game=1;}
else
{
    printf("YOU HAVE SCORED %d AND PLAYED %d GAMES\n",score,play);
    printf("--------------END GAME--------------");
    game=0;}

}

}