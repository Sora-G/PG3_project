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
		
		//乱数の初期化
		unsigned int currentTime = time(nullptr);
		srand(currentTime);

		const int diceNum = 2;//サイコロの個数
		int pip[diceNum];//サイコロの出目(出目 = pip)
		int pipTotal = 0;//出目の合計

		//サイコロの出目を決める
		for (int i = 0; i < diceNum; i++)
		{
			pip[i] = rand() % 6;

			pipTotal += pip[i];
		}

		printf("%d", pip[0]);
	};


	tyouhan();

	return 0;
}