#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>




const char *word_collection[23]= {
                    "hello","world","sun","sea","chair",
                    "tree","kid","day","freedom",
                    "fashion","woman","Hungary","amount","wheel",
                    "night","shoe","weekend","beer","party",
                    "beach","tabasco","cigarr","battery"
                    };
 

const char* get_random_word(void); 
void imprimir_vector(char* arr);
void igualar_letras(char* palabra, char letra2);

int main() {
  //menu

  int menu;
  char alias[50];
  const char* get_random_word(void);
  
puts("-------HANGMAN------");
 puts("********************");
 puts("*        MENU      *");
 puts("********************");
 puts("1..Start");
 puts("2..Instructions");
 puts("3..About");
 puts("4..Exit");
scanf("%d", &menu);
switch(menu){
;
case 1 :
{
  puts("You chose to start!");
  //nombre jugador
  printf("Enter your nickname: ");
  getchar();
  gets(alias);
  printf("You are now: %s", alias);
  
  //tabla de nombre etc
  const char* palabra_elegida;
  juego:
  palabra_elegida = get_random_word();
  printf("\n Length of the word  = %ld \n\n",strlen(palabra_elegida));
  char vector[strlen(palabra_elegida)];
   for (int x=0 ; x<strlen(palabra_elegida); x++){
     vector[x] = '_';
   }

   imprimir_vector(vector);
char letra;
int y = 0;
  while(y<10){
    printf("Type a letter: ");
    scanf(" %c", &letra);
   igualar_letras(palabra_elegida,letra);
   igualar_letras(vector,letra);
  
    y++;
  }

  int nuevo;
  printf("Presione 1 para jugar otra vez: ");
  scanf("%d", &nuevo);

    if(nuevo == 1){
      goto juego;
    }

break;
}
case 2 : 
{
puts("You chose Instructions!");
printf("You will have 10 chances to guess the word displayed. You will have to complete the word letter by letter. Each time you type an incorrect letter will be counted as a chance. Good luck!");
break;
}
case 3 :
{
puts("You chose to About");
printf("This is an interactive game in which you have to try and guess some words. The point of the game is to guess the word before you run out of chances. This game was made by Gabriel Sanchez :)");
break;
}
case 4:
{
puts("You chose Exit");
break;
}
default:
{
puts("Invalid input, please select one of the options listed above!");
break;
}
return 0;

}
}

const char* get_random_word(void){
    srand ( time (0) );
    int random_position = rand() % 23;
    return word_collection[random_position];
 }

 void imprimir_vector(char* arr){

for (int x=0 ; x<strlen(arr); x++){
     printf("%c  ", arr[x]);
   }

   printf("\n");
   

}

void igualar_letras(char* palabra, char letra2){
  for (int x=0 ; x<strlen(palabra); x++){
      printf("%c  ", palabra[x]);
    }
    printf("\n");
    printf("%c",letra2);
    printf("\n");
}