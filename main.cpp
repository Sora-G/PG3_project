#include <stdio.h>

//賃金を比較する関数［再帰的な賃金の合計、再帰的な時給、一般的な賃金の合計、一般的な時給、時間］
int WageCompare(int recursiveResultWage, int recursiveHourWage, int generalResultWage, int generalHourWage, int hour)
{
	//再帰的な賃金の合計が100以上の時に[再帰的な賃金の合計 × 2 - 50]をする事で確認課題の３つ目の項目を実装できる
	if (recursiveResultWage > 100) {
		recursiveResultWage = recursiveResultWage * 2 - 50;
	}

	recursiveResultWage = recursiveResultWage + recursiveHourWage;//再帰的な賃金の合計を算出

	generalResultWage = generalHourWage * hour;//一般的な賃金の合計を算出

	//比較
	//もし再帰的な賃金の合計が一般的な賃金の合計を越えたら、この関数を抜ける
	if (recursiveResultWage > generalResultWage){
		printf("再帰的な賃金の合計　%5d円　時給　%5d円　%5d時間\n", recursiveResultWage, recursiveHourWage, hour);
		printf("一般的な賃金の合計　%5d円　時給　%5d円　%5d時間\n\n", generalResultWage, generalHourWage, hour);

		return 0;
	}
	//もし再帰的な賃金の合計が一般的な賃金の合計を越えていなかったら、この関数を呼ぶ
	else{
		printf("再帰的な賃金の合計　%5d円　時給　%5d円　%5d時間\n", recursiveResultWage, recursiveHourWage, hour);
		printf("一般的な賃金の合計　%5d円　時給　%5d円　%5d時間\n\n", generalResultWage, generalHourWage, hour);

		return WageCompare(recursiveResultWage, recursiveHourWage * 2 - 50, generalResultWage, generalHourWage, hour + 1);
	}
}

int main()
{
	int recursiveResultWage = 0;
	int recursiveHourWage = 100;
	int generalResultWage = 0;
	int generalHourWage = 1027;
	int hour = 1;

	WageCompare(recursiveResultWage, recursiveHourWage, generalResultWage, generalHourWage, hour);

	return 0;
}