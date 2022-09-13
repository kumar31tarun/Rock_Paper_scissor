#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpaperscissor(char user, char computer)
{
 //if user win then 1, if computer win -1 and draw as 0
 if(user==computer)
 {
    return 0;
 }
 if(user=='r' && computer=='p')
 {
    return -5;
 }
 else if(user=='p' && computer=='r')
 {
    return 5;
 }
 if(user=='p' && computer=='s')
 {
    return -5;
 }
else if(user=='s' && computer=='p')
 {
    return 5;
 } 
 if(user=='r' && computer=='s')
 {
    return 5;
 }
 else if(user=='s' && computer=='r')
 {
    return -5;
 }
}
int main()
{
    
    char user,computer;
    int again;
 while(again!=2)
    {   
    system("clear");
    srand(time(0));
    int number=rand()%100+1;
    if(number<33)
    {
        computer='r';
    }
    else if(number>32 && number<67)
    {
        computer='p';
    }
    else
    {
        computer='s';
    }
    printf("Choose 'r' for Rock, 'p' for Paper, 's' for Scissor: ");
    scanf("%c",&user);
    int check=rockpaperscissor(user,computer);
    
    printf("\nYou chose %c and Computer Chose %c",user,computer);
    if(check==0)
    {
        printf("\nMatch Draw!");
    }
    if(check==5)
    {
        printf("\nYou Win!");
    } 
    if(check==-5)
    {
        printf("\nYou lose!");
    }
    printf("\n\n1. Play again\n2. Quit\n:");
    scanf("%d",&again);
    if(again==2)
    {
        printf("\n\nThanks for playing!\n\n");
        break;
    }
    fflush(stdin);
    }
    return 0;
}