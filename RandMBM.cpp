#include "RandMBM.h"

void CRandMBM::initRand()
{
	srand((unsigned int)time(NULL));
}

int CRandMBM::getRandMBM(const int N_RAND_MAX_VALUE)
{
	return static_cast<int>(rand() / (RAND_MAX + 1.0) * N_RAND_MAX_VALUE);
}
