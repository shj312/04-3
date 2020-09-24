#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int x;
    int a, b;

    printf("input the second :");
    scanf("%i", &x);

    a = x/60;
    b = x%60;

    printf("the time is %i : %i", a, b);
	
	return 0;
}
