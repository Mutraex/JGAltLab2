/*
Name: Javier Gonzalez
ID: 5754068
I affirm that I wrote this program myself without any help from any
other people or sources from the internet
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main (void)
{
	uint32_t inp;
	uint32_t outp =0;
	int bitLoc;
	char choiceInp[6];
	
	do{
		printf("Input an integer:\n");
		scanf("%u", &inp);
		if(inp<1){
			printf("That value is too low\n");
		}
		else if(inp>1000){
			printf("That value is too high\n");
		}
	} while((inp<1)||(inp>1000));
	do{
		printf("Would you like to set or clear a bit?\n");
		scanf("%s", choiceInp);
		if((strcmp(choiceInp, "set")!=0)&&(strcmp(choiceInp, "clear")!=0)){
			printf("Invalid input\n");
		}
	} while((strcmp(choiceInp, "set")!=0)&&(strcmp(choiceInp, "clear")!=0));
	do{
		printf("Which bit location?\n");
		scanf("%d", &bitLoc);
		if(bitLoc<0||(bitLoc>31)){
			printf("Invalid Bit Location\n");
		}
	} while((bitLoc<0)||(bitLoc>31));
	
	if(strcmp(choiceInp, "set")==0){
		outp = inp|(1<<bitLoc);
	}
	else if(strcmp(choiceInp, "clear")==0){
		outp = inp&~(1<<bitLoc);
	}
	printf("%u\n", outp);
	
	return 0;
}
