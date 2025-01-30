#include <stdio.h>

int main(){
    int count = 0;
    int i = 0;
    printf("\nThis program counts the numbers of characters in a string\n");

    while((i = getchar()) != EOF && i != '\n'){
	if(i == ' '){
	    count++;   
	}
    }
    if(i == '\n'){
	count++;
    }
    printf("\nThe numbers of strings in the sentence is %d", count);
    
}
