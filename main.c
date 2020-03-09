#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>






 char word_collection[][23]= {
                   "hello","world","sun","sea","chair",
                    "tree","kid","day","freedom",
                    "fashion","woman","hola","amount","wheel",
                    "night","shoe","weekend","beer","party",
                    "beach","tabasco","happy","battery"
                    };
 

const char* get_random_word(void); 
void imprimir_vector(char* arr);
void igualar_letras(char* palabra, char letra2);
void sustituir_letra(char* guion, char letrasus);

int main() {
  //menu

  int menu;
  const char* palabra_elegida;
  char alias[50];
  const char* get_random_word(void);
  char letra;
  int letra_adivinada[10] = {0,0,0,0,0,0,0,0,0,0};
  int numvidas=10;
  int vieja_buena = 0;
  int numbuenas = 0;
  int letra_repetida = 0;
  int vidas = 10;
  char guess[16];
  int loop = 0;
  int loopindx = 0;
  int random_word = rand() % 23;
char vector[strlen(palabra_elegida)];





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
  
  juego:
  while (numbuenas < vector ){

    letra = letra_adivinada[0];
		letra_repetida = 0; 
    loop = 1;
    vieja_buena = numbuenas;
  palabra_elegida = get_random_word();
  printf("\n Length of the word  = %ld \n\n",strlen(palabra_elegida));

  
   for (int x=0 ; x<strlen(palabra_elegida); x++){

     if (letra_adivinada[random_word]==1){
       printf("%c", word_collection[random_word][loopindx]);
     }
       else
       {
         printf(" _ ");

       }
   }

   
char letra;
int y = 0;
  while(y<10){
    printf("\nType a letter: ");
    printf("\nCorrect So Far:%d\n",numbuenas);
    scanf(" %c", &letra);

    y++;
  }
  printf("\n");
	
		for( loopindx = 0; loopindx < vector; loopindx++) {
		
			if(letra_adivinada[loop] == 1) {
				if(word_collection[random_word][loopindx] == letra) {
					letra_repetida = 1; 
					break;
				} 
				continue;
			}
		
			if( letra == word_collection[random_word][loopindx] ) {
				vector[loopindx] = 1;
				numbuenas++;				
			}		
		
		}	
		printf("letra:%c\n",letra);
		
		if( vieja_buena == numbuenas && letra_repetida == 0) {
			numvidas--;
			printf("Try again\n");
			if (numvidas == 0) {
				break;
			}
		} else if( letra_repetida == 1) {
			printf("Already Guessed!\n");
		} else {
			printf("Correct guess :)\n");
		}
	
	if (vidas == 0) {
		printf("\nYou lost, your word was: %s\n",
		word_collection[random_word]);	
	} else  {	
		printf("\nYou won!!! :)\n");
	} 
    } // juego
  
int nuevo;
printf("Press 1 to play again: ");
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
printf("This is an interactive game in which you have to try and guess some words. The point of the game is to guess the word before you run out of chances. This game was made by gabrielsanchez@ufm.edu :)");
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




