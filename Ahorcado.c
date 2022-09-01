#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void gameover(){
  system("clear");
  printf("--------\n");
  printf("PERDISTE\n");
  printf("--------\n");
}
void gamewin(){
  system("clear");
  printf("--------\n");
  printf("GANASTE!\n");
  printf("--------\n");
}

char char_choose(){
  char char_chosen;
  printf("Escriba una sola letra\n");
  // scanf("%c",&char_chosen);
  char_chosen = getchar();
  return char_chosen;
}

char *word_list(){
  srand(time(NULL));
  char *words[] = {
    "hola",
    "gatos",
    "perro",
    "erizos"
  };
  char *correct_word = words[random() % 4];
  return correct_word;
}

int count_char(char *s){
  int largo = 0;
  while (s[largo] != 0) largo++;
    return largo;
}

int main(void) {
  int misses = 0;
  char *correct_word = word_list();
  int length = count_char(correct_word);
  char temp_word[length];
  bool win = false;
  printf("%s\n",correct_word );
  while (misses <= 5) {
    if (win == true)break;
    char charc = char_choose();
    getchar();
    int wincont = 0;
    int cont = 0;
    for (int i = 0; i < length; i++) {
      if (temp_word[i] == correct_word[i]) {
        printf("%c",temp_word[i]);
        wincont ++;
        if (wincont == length) win = true;
        }

      if (correct_word[i] == charc) {
        temp_word[i] = charc;
        printf("%c",temp_word[i]);
        cont ++;
      }
      else if (temp_word[i] != correct_word[i] &&  charc != correct_word[i])  printf("_");
    }
    printf("\n");
    if(cont == 0){
      misses ++;
      printf("Fallos actuales:%d\n",misses );
    }
  }
  if (misses > 5) gameover();
  else gamewin();
  return 0;
}
