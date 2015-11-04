/**
 *  F.h
 *
 *  LINE Fukuoka 技能テスト
 *  Author: Benjamin Peter Paul Lo
 *  Date: 2015/10/12
 *
 *	追記：(2015/10/15) 計算処理が間違っていたから重回帰処理を入れました。
 *	追記　(2015/10/15　14.25pm) 重回帰で実装するのが時間とメモリー的にまずいです。
 *
 */
#ifndef _F_H__
#define _F_H__
#include <iostream>

using namespace std;

class F
{
private:
	unsigned long 	_init_counter;
	unsigned long 	_f;
	unsigned long 	_n;

	unsigned long 	_inputAnswer;
	bool 			_continueFlag;

public:
    void 			RequestData();                               					//  データを求める
    void 			AddCalculatedNumberToSequence(unsigned long _enteredData ); 	//	計算した後配列に格納
    void 			ContinueLoop(char _answer);										//	データを追加する？
};

#endif // _F_H__