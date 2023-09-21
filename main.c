#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int boonja,boonmo;
	
	printf("enter the boonja and boonmo");
	scanf("%i,%i",&boonja,&boonmo);
	
	printf("It's the result of dividing: %f",(float)boonja/boonmo);

	return 0;
}
