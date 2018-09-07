#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if(argc != 2) {
    printf("Usage : ./challenge02 password\n");
    exit(1);
  }

  int length = strlen(argv[1]);
  if(length == 11) {
    if(argv[1][0] == '\x4E')
      if(argv[1][1] == '\x65') 
        if(argv[1][2] == '\x76')
          if(argv[1][3] == '\x65')
            if(argv[1][4] == '\x72')
 	      if(argv[1][5] == '\x47')
	        if(argv[1][6] == '\x69')
		  if(argv[1][7] == '\x76')
		    if(argv[1][8] == '\x65')
		      if(argv[1][9] == '\x55')
		        if(argv[1][10] == '\x70') {
	                  printf("Congratz !\n");   
	                  return 0;
                        }	
  }
  
  printf("Try harder !\n");
  return 0;
}
