#pragma once
#include "Car.h"
class GTR : public Car
{
public:

	//コンストラクタ
	GTR();

	//デストラクタ
	~GTR();

	void Drive() override;

private:
};

