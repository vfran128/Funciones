#include <stdio.h>
#include <stdlib.h>

void print_menu(){
  system("clear");
  printf("(1) Agregar nota\n");
  printf("(2) Ver notas\n");
  printf("(3) Borrar noteas\n");
  printf("(4) Salir\n");
  printf("Elija una opcion:");

}
void save_note(){
  FILE *fp;
  fp = fopen("notas.txt" , "a");
  printf("Ingrese su nota :");
  char note[100];
  fgets(note, 100, stdin);
  fprintf(fp, "%s",note );
  fclose(fp);
 }
void read_note(){
  FILE *fp;
  fp = fopen("notas.txt" , "r");
  int c;
  while ((c = fgetc(fp)) != EOF){
    putchar(c);
  }
  printf("-----------------------------\n");
  printf("Presione Enter para continuar\n");
  printf("-----------------------------\n");
  getchar();
}
void delete_notes(){
  FILE *fp;
  fp = fopen("notas.txt", "w");
  fclose(fp);
  printf("Notas Borradas!\n");
  printf("Presione Enter para continuar\n");
  getchar();
}



int main (void){
  int choice = 0;

  while (1) {
    print_menu();
    scanf("%d",&choice);
    getchar();
    switch (choice) {
      case 1:
      save_note();
      break;
      case 2:
      read_note();
      break;
      case 3:
      delete_notes();
      break;
      case 4:
      exit(0);
      break;
      default:
      printf("Opcion Invalida\n");
      break;
    }
  }
}
