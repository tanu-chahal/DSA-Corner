//To play Rock, Paper & Scissors with the computer
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Game(char you, char cmp){
if(you==cmp)
{
    return 0;
}

// RS AND SR
if(you=='r' && cmp=='s'){
    return 1;
}
else if(you=='s' && cmp=='r')
{
    return -1;
}

// RP AND PR
if(you=='r' && cmp=='p'){
    return -1;
}
else if(you=='p' && cmp=='r')
{
    return 1;
}

//PS AND SP
if(you=='p' && cmp=='s'){
    return -1;
}
else if(you=='s' && cmp=='p')
{
    return 1;
}
}

int main()
{ srand(time(0));
int num= rand()%100+1;
char you, cmp;
if(num<33){
    cmp ='r';
}
else if(num>33 && num<66)
{
    cmp = 'p';
}
else{
    cmp = 's';
}
printf("Rock Paper Scissors \n \n");
printf("Instructions: Press 'r' for Rock, 'p' for Paper, 's' for Scissors\n Let's play! \n");

printf("Enter your move: ");
scanf("%c",&you);

int result = Game(you,cmp);

if(result==0)
{
  printf("\nTie Match!\nPlay one more.\n") ;
}
else if(result==1)
    {
printf("\nCongo! You Won.\n");
}
else{
    printf("\nYou Lost! Well tried.\n");
}
printf("\nYou chose %c & the computer chose %c\n", you,cmp);
}
