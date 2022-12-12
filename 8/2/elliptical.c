#include <stdio.h>
#include <hfcal.h>

int main() {
	display_calories(115.2, 11.3, 0.79);
	return 0;
}



//gcc elliptical.c -I libs -L . -lhfcal -o elliptical