#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{

   char* message = argv[1];
   int key;
   sscanf(argv[1],"%s",message);
   sscanf(argv[2],"%d",&key);
   printf("user input = message %s, key %d\n", message, key);


 	for(int i = 0; i<strlen(message); i++){
                char ch = message[i];

		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;

			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}

			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;

			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}

			message[i] = ch;
		}
	}

	printf("Encrypted message: %s\n", message);

	return 0;
}

