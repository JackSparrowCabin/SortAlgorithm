/*
 * Algorithm_Test.cpp
 *
 *  Created on: 2015年3月15日
 *      Author: apple
 */

#include <iostream>
#include "../src/PaiXu.h"
#define SZ 10
using namespace std;

bool test_increase(int target[], int sz) {
	if(sz < 2) {
		cerr << "error: target size < 2" << endl;
		return false;
	}

	for(int i = 1; i < sz; ++i) {
		if(target[i] < target[i-1]) {
			cerr << "error: not in increase sequence" << endl;
			return false;
		}
	}
	return true;
}

bool test_decrease(int target[], int sz) {
	if(sz < 2) {
		cerr << "error: target size < 2" << endl;
		return false;
	}

	for(int i = 1; i < sz; ++i) {
		if(target[i] > target[i-1]) {
			cerr << "error: not in decrease sequence" << endl;
			return false;
		}
	}
	return true;
}

int suc_display(int target[], int sz) {
	for(int i = 0; i < sz; i++) {
		cout << target[i] << " ";
	}
	return 0;
}

int err_display(int target[], int sz) {
	for(int i = 0; i < sz; ++i) {
		cerr << target[i] << " ";
	}
	return 0;
}
int main() {
	cout << "!!!Hello MacBook!!!" << endl; // prints !!!Hello MacBook!!!
	int demo[SZ] = {10, 9, 3, 8, 7, 5, 2, 4, 29, 30};


	cout << "before Bubble sort: ";
	suc_display(demo, SZ);
	cout << endl;
/* --------------------------------bubble sort increase----------------------------- */
	if(NULL != Bubble_Sort_increase(demo, SZ) && test_increase(demo, SZ)) {
		cout << "MaoPao success: " << endl;
		cout << "after  sort: ";
		suc_display(demo, SZ);
		cout << endl;
	} else {
		cerr << "MaoPao failed: function error." << endl;
		cerr << "after sort: ";
		err_display(demo, SZ);
		cerr << endl;
	}
/* --------------------------------quit sort decrease------------------------------- */
	if(NULL != Quit_Sort_decrease(demo, SZ) && test_decrease(demo, SZ)) {
		cout << "Quit Sort decrease success:" << endl;
		cout << "after sort: " ;
		suc_display(demo, SZ);
		cout << endl;
	} else {
		cerr << "Quit Sort failed: function error." << endl;
		err_display(demo, SZ);
		cerr << endl;
	}
/* --------------------------------quit sort increase--------------------------------- */
	if(NULL != Quit_Sort_increase(demo, SZ) && test_increase(demo, SZ)) {
		cout << "Quit Sort increase success: " << endl;
		cout << "after sort: ";
		suc_display(demo, SZ);
		cout << endl;
	} else {
		cerr << "Quit Sort increase failed: " << endl;
		cerr << "after sort: " ;
		err_display(demo, SZ);
		cout << endl;
	}
/* --------------------------------select sort decrease ------------------------------ */
	if(NULL != Select_Sort_decrease(demo, SZ) && test_decrease(demo, SZ)) {
		cout << "Select Sort decrease success: " << endl;
		cout << "after sort: ";
		suc_display(demo, SZ);
		cout << endl;
	} else {
		cerr << "Select Sort decrease failed: " << endl;
		cerr << "after sort: ";
		err_display(demo, SZ);
		cerr << endl;
	}

/* --------------------------------Insert sort increase-------------------------------- */
	if(Insert_Sort_increase(demo, SZ) != NULL && test_increase(demo, SZ)) {
		cout << "Insert Sort increase success: " << endl;
		cout << "after sort: ";
		suc_display(demo, SZ);
		cout << endl;
	} else {
		cerr << "Insert Sort increase failed: " << endl;
		cerr << "after sort: ";
		err_display(demo, SZ);
		cerr << endl;
	}


/* ---------------------------------Shell sort, decrease ------------------------------- */
	if(Shell_Sort_decrease(demo, SZ) != NULL && test_decrease(demo, SZ)) {
		cout << "shell Sort increase success: " << endl;
		cout << "after sort: ";
		suc_display(demo, SZ);
		cout << endl;
	} else {
		cerr << "shell Sort increase failed: " << endl;
		cerr << "after sort: ";
		err_display(demo, SZ);
		cerr << endl;
	}


	return 0;
}



