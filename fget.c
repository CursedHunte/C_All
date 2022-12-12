#include <stdio.h>

int main() {
	char food[5];
	printf("Введите любимую еду:  ");
	fgets(food, sizeof(food), stdin);
	return 0;
}