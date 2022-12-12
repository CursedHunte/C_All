#include <stdio.h>
#include "fish.h"

void label(fish a) {
	printf("Name: %s\nSpecies: %s\n%d age, %d teeths\n", a.name, a.species, a.age, a.teeth);
	printf("Give %2.2kg %s and allow %s for %2.2f hours\n", a.care.food.weight, a.care.food.ingredients, a.care.exercise.description, a.care.exercise.duration);
}