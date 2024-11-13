#include <stdio.h>
#include "Car.h"
#include "AE86.h"
#include "GTR.h"

int main()
{
	//Ô‚Ì‘ä”
	const int carNumber = 3;

	//Šî’êƒNƒ‰ƒX(Car)‚ğ‚Ü‚Æ‚ß‚Ä¶¬
	Car* car[carNumber];

	for (int i = 0; i < carNumber; i++)
	{
		if (i % 2 == 0)
		{
			car[i] = new AE86();
		}
		else
		{
			car[i] = new GTR();
		}

		car[i]->Drive();

		delete car[i];
	}

	return 0;
}