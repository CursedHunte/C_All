#include <stdio.h>
#include "fish.h"

int main() {
	struct fish snappy = {"Snappy", "piranha", 69, 4, {{"meat", 0.2}, {"swim in jacuzzi", 7.5}}};
	label(snappy);
	return 0;
}