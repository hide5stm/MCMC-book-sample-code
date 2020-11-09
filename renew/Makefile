CC := gcc
CFLAGS := -g -O2 -Wall -Wextra -lm

CPP := g++
CPPFLAGS := -g -O2 -Wall -Wextra -lm

TARGET := \
	Bayse_coin_toss_metropolis \
	Gaussian_Metropolis \
	Gaussian_Metropolis_2variables \
	pi_MC_integral \
	replica_salesman \
	replica_simple_example \
	three_sphere \
	pi_MC \
	2d_Ising_Metropolis \
	2d_Ising_Wolff \
	Bayse_Gaussian_Gibbs \
	Bayse_Gaussian_HMC_2variables \
	Gaussian_Gibbs \
	Bayse_Gaussian_Metropolis \
	Gaussian_HMC \
	Gaussian_HMC_multi_variables \
	matrix_HMC \
	2d_Ising_Heat_Bath


.PHONY: clean all format

format:
	clang-format -i *.cpp *.c

all:
	@for tgt in $(TARGET) ; do \
		$(MAKE) $$tgt ; \
	done


clean:
	$(RM) $(TARGET) *.o *~
