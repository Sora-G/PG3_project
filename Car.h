#pragma once
class Car
{
public:

	//コンストラクタ
	Car();
	//デストラクタ
	~Car();

	virtual void Drive();

protected:

	const char* name;
};

