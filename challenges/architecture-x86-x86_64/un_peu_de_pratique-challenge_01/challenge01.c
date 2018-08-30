#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if(argc != 2) {
    printf("Usage : ./challenge01 password\n");
    exit(1);
  }

  char *password = "String_is_too_easy!";

  if(strcmp(argv[1], password) == 0) {
    printf("Congratz !\n");
  }
  else {
    printf("Try again ...\n");
  }

  return 0;
}
