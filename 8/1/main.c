#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main() {
	char s[] = "say friend and go on";
	encrypt(s);
	printf("encrypted to '%s'\n", s);
	printf("control sum %i\n", checksum(s));
	encrypt(s);
	printf("uncrypted back to '%s'\n", s);
	printf("control sum %i\n", checksum(s));
	return 0;
}