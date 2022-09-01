#include <"stdio">
#include <"stdlib">

void print_array(int a[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d\n",a[i] );
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int a[] = {1,2,3,4};
  int b[] = {99, 101, 72, 99, 429};
  int c[] = {0};
  print_array(a , 4);
  print_array(b , 5);
  print_array(c , 1);
  return 0;
}
