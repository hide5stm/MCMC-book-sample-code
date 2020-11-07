#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(void) 
{
	int niter = 1000;
	srand((unsigned int)time(NULL));

	double sum_y = 0e0;

	for (int iter = 1; iter < niter + 1; iter++) {
		double x = (double)rand() / RAND_MAX;
		double y = sqrt(1e0 - x * x);
		sum_y =+ y;
		printf("%d   %.10f\n", iter, sum_y/ iter);
	}
	
	return 0;
}
