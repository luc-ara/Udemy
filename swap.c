#include <stdio.h>

int main(int argc, char **argv) {
  double f1=1.23, f2=2.34, t = 0 ;

  printf("Before swap:\nf1 = %lf\nf2 = %lf\n", f1, f2) ;

  t = f1 ;
  f1 = f2 ;
  f2 = t ;

  printf("After swap: \nf1 = %lf\nf2 = %lf\n", f1, f2) ;
}
