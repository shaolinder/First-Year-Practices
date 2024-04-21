/*
#include <stdio.h>
void displayHello(void); - function declaration syntax

int main(){
	
	displayHello(); - funcion call syntax
	
	return 0;
}

void displayHello(void){ - function definition syntax
	
	int i;
	for(i=0;i<5;i++)
		printf("Hello World!\n");
	
}
*/

#include <stdio.h>

void displayHello(void){
	
	int i;
	for(i=0;i<5;i++)
		printf("Hello World!\n");
	
}

int main(){
	
	displayHello();
	
	return 0;
}


