#include <stdio.h>

struct Structure {
  int myNum;
  char myLetter;
};


int main() {
  struct Structure s1;
  struct Structure * adress = &s1;
  struct Structure ** pp = &adress;
  printf("%p\n", adress);
  printf("%p\n", pp);
  return 0;

}