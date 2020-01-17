#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h> 
#include <ctype.h>


int usleep(int x);

int main(int argc, char *argv[]) {

	char buf[BUFSIZ];
	

	long sleep = 10000; //The sleep time in miliseconds.
	
	//If an argument is given cast it to an int and set the sleep variable (unsafe)
	//TODO check for errors here
	if(argc != 1){
		char* p;
		sleep = strtol(argv[1], &p, 10);	
	}
	
    	while(fgets(buf, sizeof buf, stdin)){
    		
		for(int c = 0; c < strlen(buf); c++){
			
			putchar(buf[c]);
			fflush(stdout);
			if(isprint(buf[c]) && buf[c] != ' '){
				usleep(sleep);	  
			}
		}
		
		//If the BUFSIZE is not large enough and the \n is removed tack one on the end
		if (buf[strlen(buf)-1] != '\n') {
        		printf("\n");
    		}	
   	}
	
	return 0;
}


