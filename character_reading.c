#include <stdio.h>

int main(){
    int sentence = 0;
    int i = 0;
    int char1 = 0;
    printf("\nThis program counts the numbers of characters in a string\n");

    while((i = getchar()) != EOF && i != '\n'){
	if(i == ' '){
	    sentence++;   
	}
	char1++;
    }
    if(i == '\n'){
        sentence++;
    }
    printf("\nThe numbers of strings in the sentence is %d and the numbers of characters are %d", sentence, char1);
    
}
