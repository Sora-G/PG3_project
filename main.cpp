#include <stdio.h>
#include <functional>
#include <windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

//コールバック関数
void DispResult(int* s)
{
	//printf("%d秒待って実行されたよ\n", *s);
}

void SetTimeOut(PFunc p, int second)
{
	//コールバック関数を呼び出す
	Sleep(second * 1000);

	p(&second);
}

int main()
{
	//[]() {printf("ぽぽ"); }();

	//auto fx = [](int i) {return i + 1; };

	//int num = 10;
	//auto fx = [=](int i) {return num + i; };

	//printf("%d", fx(2));

	//std::function<int(int)> fx = [](int i) {return i + 1; };
	//auto fx2 = [](int i) {return i + 1; };

	std::function<void(void)> tyouhan = []() {
		
		const int kDiceNum = 2;
		int pip[kDiceNum];
		int pipTotal;



		printf("%d", kDiceNum);
	};


	tyouhan();

	return 0;
}