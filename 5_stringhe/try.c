#include <stdio.h>
#include <string.h>


void initStr(char *_str){
	printf("inserisci stringa: ");
	scanf("%s", _str);
	fflush(stdin);
}

void getStrLength(char *_sstr){
	int i =0;
	while (*_sstr != '\0')
		i++;
	return i;
}


void printReversedStr(char *_str){
	int lng, i;
	lng = getStrLength(_str);
	i = lng;
	
	while (i !=0){
		printf ("%c", _str);
		i--; 
	}
}




int main() {
  char *str;
  str = malloc(sizeof(char)*100);
}

