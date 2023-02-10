/*=== puzmon1hint: ゲーム全体の流れの実装 ===*/
/*** インクルード宣言 ***/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef char String[1024];
/*** 列挙型宣言 ***/

/*** グローバル定数の宣言 ***/

/*** 構造体型宣言 ***/

/*** プロトタイプ宣言 ***/

// HINT: goDungeon関数のプロトタイプ宣言
// HINT: doBattle関数のプロトタイプ宣言
int goDungeon(char* playerName);
int doBattle(char* playerName, char* enemyName);

/*** 関数宣言 ***/

// (1)ゲーム開始から終了までの流れ
int main(int argc, char** argv)
{
  // HINT: もし起動時のこまんどライン引数の数が異常なら{
  // HINT:     エラーメッセージを表示して異常終了
  // HINT: }

  if(argc != 2){
    printf("エラー：プレイヤー名を指定して起動してください");
    return 1;
  }

  printf("*** Puzzle & Monsters ***\n");

  // いざ、ダンジョンへ
  int winCount = goDungeon(argv[1]);
  // HINT: ダンジョンに行く関数を呼び出し、勝利数を戻り値で得る

  // 冒険終了後
  // HINT: 勝利数が5なら {
  // HINT:     ゲームクリアの表示をする
  // HINT: } そうでないなら {
  // HINT:     ゲームオーバーの表示をする
  // HINT: }

  if(winCount == 5){
    printf("Game Clear!!\n");
  } else {
    printf("Game Over\n");
  }

  // HINT: 倒したモンスター数を表示する
  printf("倒したモンスターの数は%dです\n", winCount);
  return 0;
}

// (2)ダンジョン開始から終了までの流れ
int goDungeon(char* playerName)
{
  // HINT:「○○はダンジョンに到着した」と表示する
  printf("%sはダンジョンに到着した\n", playerName);

  // HINT: 勝利数を格納する変数を準備し0にセットする
  int winCount = 0;
  // HINT: スライムと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  winCount += doBattle(playerName, "スライム");
  // HINT: ゴブリンと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  winCount += doBattle(playerName, "ゴブリン");
  // HINT: オオコウモリと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  winCount += doBattle(playerName, "オオコウモリ");
  // HINT: ウェアウルフと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  winCount += doBattle(playerName, "ウェアウルフ");
  // HINT: ドラゴンと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  winCount += doBattle(playerName, "ドラゴン");

  printf("%sはダンジョンを制覇した！\n", playerName);
  // HINT: 「○○はダンジョンを制覇した！」と表示する
  return winCount;
}

// (3)バトル開始から終了までの流れ
int doBattle(char* playerName , char* enemyName)
{
  // HINT: 「××が現れた」と表示する
  printf("%sが現れた\n", enemyName);

  // （ダミー戦闘で即勝利確定）

  // HINT: 「××を倒した！」と表示する
  printf("%sを倒した！\n", enemyName);
  return 1;   // 倒した敵の数（常に1）を返す
}

/*** ユーティリティ関数宣言 ***/
