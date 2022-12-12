#include <stdio.h>

int calc() {
	int x, y, z, d;
	
	printf("Write x: ");
	scanf("%d", &x);
	printf("Write y: ");
	scanf("%d", &y);
	printf("Choose action:\n");
	printf("1 - addition\n");
	printf("2 - subtraction\n");
	printf("3 - multiplication\n");
	printf("4 - division\n");
	scanf("%d", &d);
	
	if (d == 1) {
		z = x + y;
		printf("%d + %d = %d\n", x,y,z);
	}
	else if (d == 2) {		
		z = x - y;
		printf("%d - %d = %d\n", x,y,z);
	}
	else if (d == 3) {		
		z = x * y;
		printf("%d * %d = %d\n", x,y,z);
	}
	else if (d == 4 && y != 0) {
		z = (float)x / y;
		printf("%d / %d = %d\n", x,y,z);
	}
	else if (d == 4 && y == 0) {
		printf("can't divide on 0!\n");
	}
	else {
		printf("wrong input!\n");
	}
	return 0;
}