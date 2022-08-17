#include <stdio.h>

int main(int argc, char **argv) {
  double width, height ;

  printf("please, enter width:\n") ;
  scanf("%lf", &width) ;

  printf("please, enter height:\n") ;
  scanf("%lf", &height) ;

  printf("%lf\n", (2 * (width + height))) ;

  return 0 ;
}
