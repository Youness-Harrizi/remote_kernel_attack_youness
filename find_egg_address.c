/* findeggaddr.c */

#include <unistd.h>

 

int main(void)

{

  printf("EGG address: 0x%p\n", getenv("EGG"));

  return 0;

}