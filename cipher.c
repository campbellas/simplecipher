#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	if((strcmp(argv[1], "e") == 0) || (strcmp(argv[1], "E") == 0)) {
		//Encodes input
		for(int i=0; argv[2][i] != '\0'; i++) {
			char encode_it = argv[2][i];
		
			//UPPERCASE HANDLING: A = 65 Z = 90
			if(encode_it > 64 && encode_it < 91){
				//incremental step up to check for exceeding alphanumeric value.
				for(int count = 0; count < 4; count++){
					encode_it = encode_it + 1;
					if(encode_it > 90) encode_it = 65;
				}
				printf("%c", encode_it);
			
			}
			//LOWERCASE HANDLING: a = 97 z = 122.
			else if(encode_it > 96 && encode_it < 123) {
				//incremental step up to check for exceeding alphanumeric value.
				for(int count = 0; count < 4; count++){
					encode_it = encode_it + 1;
					if(encode_it > 122) encode_it = 97;
				}
				printf("%c", encode_it);
				
			}
			//Handles all special characters and white spaces
			else if((encode_it > 31 && encode_it < 65) || (encode_it > 90 && encode_it < 97) || (encode_it > 122 && encode_it < 127)) {
				printf("%c", encode_it);
			}
			else {
				printf("ERROR: %c is not a valid letter", encode_it);
			}
		}
	}
		
	else if((strcmp(argv[1], "d") == 0) || (strcmp(argv[1], "D") == 0)) {
		
		//Decodes input
		for(int i=0; argv[2][i] != '\0'; i++) {
			char decode_it = argv[2][i];
			
			//UPPERCASE HANDLING: A = 65 Z = 90
			if(decode_it > 64 && decode_it < 91){
				//incremental step up to check for exceeding alphanumeric value.
				for(int count = 0; count < 4; count++){
					decode_it = decode_it - 1;
					if(decode_it < 65) decode_it = 90;
				}
				printf("%c", decode_it);
				
			}
			//LOWERCASE HANDLING: a = 97 z = 122.
			else if(decode_it > 96 && decode_it < 123) {
				//incremental step up to check for exceeding alphanumeric value.
				for(int count = 0; count < 4; count++){
					decode_it = decode_it - 1;
					if(decode_it < 97) decode_it = 122;
				}
				printf("%c", decode_it);
			
			}
			//Handles all special characters and whitespaces
			else if((decode_it > 31 && decode_it < 65) || (decode_it > 90 && decode_it < 97) || (decode_it > 122 && decode_it < 127)) {
				printf("%c", decode_it);
			}
			else {
				printf("ERROR: %c is not a valid letter", decode_it);
			}
		}
	}
		
	else {
		printf("ERROR: Improper command line argument. Enter 'cipher [e or d] [words to cipher]");
	}
	
	return 0;
}
