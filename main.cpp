#include <stdio.h>
#include <windows.h>

typedef void (*PFunc)(int*);

//コールバック関数
void DispResult(int* s) {
	printf("%d秒待って実行されたよ\n", *s);
}

void SetTimeOut(PFunc p, int second) {
	//コールバック関数を呼び出す
	Sleep(second * 1000);

	p(&second);
}

int main()
{
	printf("strat\n");

	PFunc p;
	p = DispResult;
	SetTimeOut(p, 5);

	return 0;
}