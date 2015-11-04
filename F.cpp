 /**
 *  F.cpp
 *
 *  LINE Fukuoka 技能テスト
 *  Author: Benjamin Peter Paul Lo
 *  Date: 2015/10/12
 *
 */
#include "F.h"
#include <math.h>
#include <iostream>

using namespace std;

/**
 *	データを求める
 */
void F::RequestData()
{
	cout << "input answer: ";
	cin  >> _inputAnswer;
    F::AddCalculatedNumberToSequence(_inputAnswer);
}


/**
 *	計算した後配列に格納
 */
void F::AddCalculatedNumberToSequence(unsigned long _enteredData)
{
    unsigned long _head 	= 0;
    unsigned long _sum 		= 1;
    unsigned long _tail;

	for (int i = 0; i < _enteredData; i++)
	{
        _tail = _head + _sum;
        _head = _sum;
        _sum = _tail;

        // すべてを出力
        cout << "F(" << i << ")" << _sum << "\n";
	}
}


/*
 *  メイン
 */
int main ()
{
	F requestObj;
	requestObj.RequestData();
	return 0;
}


