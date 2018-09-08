#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct PassStruct PassStruct;
struct PassStruct {
  int length;
  char key;
  char *cipheredPassword;
};

void initPassword(PassStruct *passStruct);
void checkPassword(PassStruct *passStruct, char *userPassword);

int main(int argc, char **argv) {
  if(argc != 2) {
    printf("Usage : ./challenge03 password\n");
    exit(1);
  }

  PassStruct passStruct;
  initPassword(&passStruct);
  checkPassword(&passStruct, argv[1]);

  return 0;
}

void initPassword(PassStruct *passStruct) {
  passStruct->key = 0x43;
  passStruct->cipheredPassword = "1&5&10&*0/*%&";
  passStruct->length = 13;
}

void checkPassword(PassStruct *passStruct, char *userPassword) {
  if(strlen(userPassword) != passStruct->length) {
    printf("Try harder !\n");
    return;
  }

  for(int i = 0 ; i < passStruct->length ; i++) {
    if(userPassword[i] != (passStruct->cipheredPassword[i] ^ passStruct->key)) {
      printf("Try harder !\n");
      return;
    }
  }

  printf("Well done !\n");
}

