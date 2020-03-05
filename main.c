#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
  //menu

  int menu;
  char alias[50];
  
puts("-------HANGMAN------");
 puts("********************");
 puts("*        MENU      *");
 puts("********************");
 puts("1..Start");
 puts("2..Instructions");
 puts("3..About");
 puts("4..Exit");
scanf("%d", &menu)
;
switch(menu){
;
case 1 :
puts("You chose to start!");
//nombre jugador
printf("Enter your nickname: ");
getchar();
gets(alias);
printf("You are now: %s", alias);
//tabla de nombre etc





break;
case 2 : 
puts("You chose Instructions!");
printf("You will have 10 chances to guess the word displayed. You will have to complete the word letter by letter. Each time you type an incorrect letter will be counted as a chance. Good luck!");
break;
case 3 :
puts("You chose to About");
printf("This is an interactive game in which you have to try and guess some words. The point of the game is to guess the word before you run out of chances. This game was made by Gabriel Sanchez :)");
break;
case 4:
puts("You chose Exit");
default:
puts("Invalid input, please select one of the options listed above!");
break;
}
return 0;

}