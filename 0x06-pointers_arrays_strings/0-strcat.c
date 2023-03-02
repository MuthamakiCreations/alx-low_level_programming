#include <main.h>
#include <string.h>

int main(){
	char string1[]="Hi guys, ";
	char string2[]="welcome to my channel.";
	strcat(string1, string2);
	printf("%s", string1);
	return 0;
}
