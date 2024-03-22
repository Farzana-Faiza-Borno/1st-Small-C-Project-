#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int turn;
void rock(){
    printf("   * * *\n");
    printf(" * * * * *\n");
    printf("* * * * * *\n");
    printf("* * * * * *\n");
    printf(" * * * * *\n");
    printf("   * * *\n");
}
void scissor(){
    
    printf("    * *    * *\n");
    printf("     * *  * *\n");
    printf("       * *\n");
    printf("     * *  * *\n");
    printf("    * *    * *\n");
    
}
void paper(){
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void ComputerTurn()
{
    srand(time(0));
    turn=rand()%3+1;
    if(turn==1)
    rock();
    else if(turn==2)
    paper();
    else if(turn==3)
    scissor();
}
void PlayerTurn(char Pturn[])
{
if(Pturn[0]=='r')
{
    rock();
}
else if(Pturn[0]=='s')
{
    scissor();
}
else if(Pturn[0]=='p')
{
    paper();
}
} 
void Coscore(char Pturn[],int *Cscore)
{
if(Pturn[0]=='r')
{
     if(turn==2)
    {
        *Cscore=*Cscore+1;
    }
}
else if(Pturn[0]=='p')
{
    if(turn==3)
    {
        *Cscore=*Cscore+1;
    }
    
}
else if(Pturn[0]=='s')
{
    if(turn==1)
    {
        *Cscore=*Cscore+1;
    }
    
}
}
void Plscore(int *Pscore,char Pturn[])
{
if(Pturn[0]=='r')
{
    if(turn==1)
    {
        printf("It's a tie\n");
    }
    else if(turn==3)
    {
        printf("Yes!\n");
        *Pscore=*Pscore+1;
    }
    else if(turn==2)
    {
        printf("Oh no!\n");
    }
}
else if(Pturn[0]=='p')
{
    if(turn==1)
    {
        printf("Yes!\n");
       *Pscore=*Pscore+1;
    }
    else if(turn==2)
    {
        printf("It's a tie\n");
    }
    else if(turn==3)
    {
        printf("Oh no!\n");
    }
}
else if(Pturn[0]=='s')
{
    if(turn==1)
    {
        printf("Yes!\n");
        *Pscore=*Pscore+1;
    }
    else if(turn==3)
    {
        printf("It's a tie\n");
    }
    else if(turn==2)
    {
        printf("Oh no!\n");
    }
}
}
int main()
{
    char name[100]=" ";
    char Pturn[1];
    int score;
    int Pscore=0;
    int Cscore=0;

    printf("*******Hello User!Welcome To The Rock Paper Scissor Game!!*******\n");
    printf("Please Enter Your Game Name:(must be more than one character like kobita#@154 )\n");
    while(strlen(name)==1)
    {
        scanf(" %[^\n]s",name);
        if(strlen(name)==1)
        {
            printf("User Name Invalid...Please Try Again\n");
        }
    }
    printf("**************Hello %s**************\n",name);
    printf("*******Up To Which Score Do You Want To Play?*******\n");
    scanf("%d",&score);
    printf("So The Game Will Be Until %d\n",score);
    while(1)
    {
        
        printf("Enter r for Rock, s for Scissor and p for Paper:\n");
        
        scanf("%s",Pturn);
        
        if(Pturn[0]!='r'&&Pturn[0]!='p'&&Pturn[0]!='s')
        {
            printf("Invalid Input\n");
            continue;
        }
        
        printf("Your Choice:\n");
        PlayerTurn(Pturn);
        printf("Computer Choice:\n");
        ComputerTurn();
        Plscore(&Pscore,Pturn);
        Coscore(Pturn,&Cscore);
        printf("Your Score    Computer Score\n");
        printf("      %d          %d\n",Pscore,Cscore);
        if(Pscore>=score||Cscore>=score)
        {
            break;
        } 
    }
    if(Pscore>=score)
    {
        printf("Congratulations!You Won!\n");
    }
    else if(Cscore>=score)
    {
        printf("Alas!You Lose!\n");
    }








}