#include <stdio.h>

int main(int argc, char *argv[]) {
	
	for(int i=0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];
		
		//UPPERCASE HANDLING: A = 65 Z = 90
		if(letter > 64 && letter < 91){
			//incremental step up to check for exceeding alphanumeric value.
			for(int count = 0; count < 4; count++){
				letter = letter + 1;
				if(letter > 90) letter = 65;
			}
			printf("%c", letter);
			
		}
		//LOWERCASE HANDLING: a = 97 z = 122.
		else if(letter > 96 && letter < 123) {
			//incremental step up to check for exceeding alphanumeric value.
			for(int count = 0; count < 4; count++){
				letter = letter + 1;
				if(letter > 122) letter = 97;
			}
			printf("%c", letter);
			
		}
		else {
			printf("ERROR: %c is not a valid letter", letter);
		}
	}
	
	return 0;
}