/*
 * Algorithm.cpp
 *
 *  Created on: 2015年3月15日
 *      Author: apple
 */

#include "Algorithm.h"
#include <iostream>

int* Bubble_Sort_increase(int target[], const int sz) {
	if(NULL != target) {
		for(int i = 0; i < sz - 1; ++i) {
			for(int j = 0; j < sz - i - 1; ++j) {
				if(target[j] > target[j+1]) {
					target[j] += target[j+1];
					target[j+1] = target[j] - target[j+1];
					target[j] -= target[j+1];
				}
			}
		}
	}
	return target;
}

int* Quit_Sort_increase(int target[], const int sz) {
	int		i = 0;
	int		j = sz - 1;
	int		delim = target[i];

	if(NULL != target) {
		if(sz > 1) {
			while(i < j) {
				while(target[j] > delim && i < j) {
					--j;
				}
				target[i] = target[j];

				while(target[i] < delim && i < j) {
					++i;
				}
				target[j] = target[i];
			}
			target[i] = delim;
			Quit_Sort_increase(target, i);
			Quit_Sort_increase(target + i + 1, sz - i - 1);
		}
	}
	return target;
}

int *Quit_Sort_decrease(int target[], const int sz) {
	int		i = 0;
	int		j = sz -1;
	int		delim = target[i];
	int		tmp;

	if(NULL != target) {
		if(sz > 1) {
			while(i < j) {
				while(target[j] < delim && i < j) {
					--j;
				}
				while(target[i] > delim && i < j) {
					++i;
				}
				tmp = target[i];
				target[i] = target[j];
				target[j] = tmp;
			}
			target[i] = delim;
			Quit_Sort_decrease(target, i);
			Quit_Sort_decrease(target + i + 1, sz - i -1);
		}
	}
	return target;
}



int *Select_Sort_decrease(int target[], int sz) {
	if(NULL != target) {
		int j;
		int tmp;
		for(int i = 0; i < sz - 1; ++i) {
			for(j = i + 1; j < sz; ++j) {
				if(target[i] < target[j]) {
					tmp = target[i];
					target[i] = target[j];
					target[j] = tmp;
				}
			}
		}
	}
	return target;
}

int *Insert_Sort_increase(int target[], int sz) {
	if(NULL != target) {
		for(int i = 1, j, tmp; i < sz; ++i) {
			tmp = target[i];
			for(j = i; j > 0 && tmp < target[j - 1]; --j) {
				target[j] = target[j - 1];
			}
			target[j] = tmp;
		}
	}
	return target;
}

int *Shell_Sort_decrease (int target[], int sz) {
	if(NULL != target) {
		int i, j, d, tmp;
		for(d = sz/2; d > 0; d /= 2) {
			for(i = d; i < sz; i++) {
				tmp = target[i];
				for(j = i; j > 0 && tmp > target[j - d]; j -= d) {
					target[j] = target[j - d];
				}
				target[j] = tmp;
			}
		}

	}
	return target;
}



