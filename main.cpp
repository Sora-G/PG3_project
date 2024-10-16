#include <stdio.h>
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

//丁半ゲーム
void TyouHan() 
{
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

	printf("丁か半かを選択してください。（丁：０　半：１）\n");

	//２択を選ぶ
	int num = 0;
	scanf_s("%d", &num);

	if (num == 0) 
	{
		printf("丁を選択\n");
	}
	else if (num == 1) 
	{
		printf("半を選択\n");
	}

	//コールバック関数を使用
	PFunc p;
	p = DispResult;
	SetTimeOut(p, 3);

	//結果表示
	if (pipTotal % 2 == 0) 
	{

		if (num == 0)
		{
			printf("正解！\n");
		}
		else if (num == 1) 
		{
			printf("不正解！\n");
		}

		printf("結果　丁\n");
	}
	else if (pipTotal % 2 == 1) 
	{

		if (num == 0) 
		{
			printf("不正解！\n");
		}
		else if (num == 1) 
		{
			printf("正解！\n");
		}

		printf("結果　半\n");
	}

	printf("サイコロの出目[%d] [%d]\n", pip[0], pip[1]);
	printf("サイコロの出目の合計 %d\n", pipTotal);
}

int main()
{
	TyouHan();

	return 0;
}