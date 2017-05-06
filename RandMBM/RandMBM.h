#ifndef _RANDMBM_H_
#define _RANDMBM_H_

#include <cstdlib>
#include <ctime>

/**
 * �����𓾂�N���X
 *
 * @author TetoriAshitori
 * @version 1.0
 */
class CRandMBM {
public:
	/**
	 * ���Ԃɂ�闐���̏�����
	 * 
	 * @return �Ȃ�
	 */
	static void initRand();

	/**
	 * 0~(N_RAND_MAX_VALUE - 1)�܂ł̒l�������_���Ɏ擾����B
	 * 
	 * @param N_RAND_MAX_VALUE �����_���Ɏ�蓾��ő�l�̒l
	 * @return �����_����int�^��0~(N_RAND_MAX_VALUE - 1)�܂ł̒l
	 */
	static int getRandMBM(const int N_RAND_MAX_VALUE);
};

#endif
