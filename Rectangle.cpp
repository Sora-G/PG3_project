#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size() {
	area = x * y;
}

void Rectangle::Draw() {
	printf("Circle??????=%.1f\n", area);
}