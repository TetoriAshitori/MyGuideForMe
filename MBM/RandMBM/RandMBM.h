#ifndef _RANDMBM_H_
#define _RANDMBM_H_

#include <cstdlib>
#include <ctime>

/**
 * 乱数を得るクラス
 *
 * @author TetoriAshitori
 * @version 1.0
 */
class CRandMBM {
public:
	/**
	 * 時間による乱数の初期化
	 * 
	 * @return なし
	 */
	static void initRand();

	/**
	 * 0~(N_RAND_MAX_VALUE - 1)までの値をランダムに取得する。
	 * 
	 * @param N_RAND_MAX_VALUE ランダムに取り得る最大値の値
	 * @return ランダムなint型の0~(N_RAND_MAX_VALUE - 1)までの値
	 */
	static int getRandMBM(const int N_RAND_MAX_VALUE);
};

#endif
