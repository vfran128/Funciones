#include <stdio.h>

double roots(double a, double b, double c) {

  double discriminant = b*b - 4*a*c;
  double root = Math.sqrt(discriminant);
  double x1 = (-b + root) / (2*a);
  double x2 = (-b - root) / (2*a);
  return x1;
}

int int main(int argc, char const *argv[]) {
  double a = 1;
  dobule b = 0;
  double c = -5;
  console.log(roots(a,b,c));
  return 0;
}

main();
