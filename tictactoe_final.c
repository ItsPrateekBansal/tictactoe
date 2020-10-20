#include<stdio.h>
#include<stdlib.h>
int check_win(char a[]){
 int k=0;
    for(int p=0;p<9;p++)
{
if((a[p]=='O')||(a[p]=='X'))
{
    continue;
}
else k++;
}

       if((a[0]==a[1])&&(a[1]==a[2])){
              if(a[0]=='X')
              return 1;
              else
              return 2;
       }
      else if((a[0]==a[4])&&(a[4]==a[8])){
              if(a[0]=='X')
              return 1;
              else
              return 2;
       }

      else if((a[0]==a[3])&&(a[3]==a[6])){
              if(a[0]=='X')
              return 1;
              else
              return 2;
       }

      else if((a[1]==a[4])&&(a[4]==a[7])){
              if(a[1]=='X')
              return 1;
              else
              return 2;
       }

      else if((a[2]==a[5])&&(a[5]==a[8])){
              if(a[2]=='X')
              return 1;
              else
              return 2;
       }

      else if((a[2]==a[4])&&(a[4]==a[6])){
              if(a[2]=='X')
              return 1;
              else
              return 2;
       }

      else if((a[3]==a[4])&&(a[4]==a[5])){
              if(a[3]=='X')
              return 1;
              else
              return 2;
       }

      else if((a[6]==a[7])&&(a[7]==a[8])){
              if(a[6]=='X')
              return 1;
              else
              return 2;
       }

       else if(k==0)
       {
              return -1;
       }
       else
        return 0;
}




int main(){

       int player_no=0,p,exit;

char board[9]={'1','2','3','4','5','6','7','8','9'};

update:
system("cls"); //clearing the screen output here so that the user feels as if it is updating in realtime.
for(int i=0;i<9;i++){
if((i==3)||(i==6))
printf("\n\n");
printf("%c\t",board[i]);
}
printf("\n\n\n");
while(check_win(board)==0)
{
player_no++;
 if(player_no%2==0)
 printf("PLAYER 2: Take your move  ");
 else
 {
        printf("PLAYER 1: Take your move  ");
 }

 scanf("%d",&p);
 if((board[p-1]=='X')||(board[p-1]=='O')||(p<1)||(p>9)){


    printf("INVALID MOVE, now you have to restart the game");
    break;
 }
 else{
 if(player_no%2==0)
 board[p-1]='O';
 else
 board[p-1]='X';
 }
 goto update;
}

if(check_win(board)==1)
printf("\nPlayer 1 Won");
else if (check_win(board)==2)
{
    printf("\nPlayer 2 Won");
}
else if(check_win(board)==(-1))
printf("game draw");
printf("\n\npress any integer to exit");
scanf("%d",&exit);

return 0;
}
