#include <stdio.h>

int main (){
	
	
	int num;
	
	printf ("Enter month in numeric form: ");
	scanf ("%d", &num);
	
	switch (num){
	case 1:
	case 2:
	case 3: printf("Winter"); break;
	case 4:
	case 5:
	case 6:printf("Fall"); break;
	case 7:
	case 8:
	case 9:printf("Summer"); break;
	case 10:
	case 11:
	case 12:printf("Autumn"); break;
	default: printf("Invalid.");
	
	}
	
	
	return 0;
	
	}

