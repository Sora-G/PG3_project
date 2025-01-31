#include <stdio.h>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>  // スリープを使用するためにインクルード

int main() {

    printf("100000文字のデータのコピーと移動の処理速度を比較\n");

    std::string a(1000000, 'a');

    std::string aCopy;

    std::string aMove;

    ///コピー
    // 開始時刻を取得
    auto startCopy = std::chrono::high_resolution_clock::now();

    aCopy = a;

    // 終了時刻を取得
    auto endCopy = std::chrono::high_resolution_clock::now();

    // 経過時間をマイクロ秒単位で計算
    auto durationCopy = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy);

    // 結果を表示
    std::cout << "コピー時間: " << durationCopy.count() << " μs\n";

    ///移動
    // 開始時刻を取得
    auto startMove = std::chrono::high_resolution_clock::now();

    aMove = std::move(a);

    // 終了時刻を取得
    auto endMove = std::chrono::high_resolution_clock::now();

    // 経過時間をマイクロ秒単位で計算
    auto durationMove = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove);

    // 結果を表示
    std::cout << "移動時間: " << durationMove.count() << " μs\n";

    return 0;
}
