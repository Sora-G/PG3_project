#pragma once
#include "Car.h"

class AE86 : public Car
{
public:

	//コンストラクタ
	AE86();
	//デストラクタ
	~AE86();

	void Drive() override;

private:
};

