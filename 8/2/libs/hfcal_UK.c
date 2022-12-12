#include <stdio.h>
#include <hfcal.h>

void display_calories(float weight, float distance, float coeff)
{
	printf("Weight: %3.2f kgs\n", weight);
	printf("Distance: %3.2f kms\n", distance);
	printf("burned calories: %4.2f cal\n", coeff * weight * distance);
}
