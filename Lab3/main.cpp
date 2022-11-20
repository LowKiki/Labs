#include <iostream>
#include "TreeArray.h"

using namespace std;

int main(){
	int K, N;

	cout << "Enter N: "; cin >> N;
	int *array = new int[N];	

	RandArray(1, 100, array, N);

	for(int i = 0; i < N; i++)
		cout << *(array + i) << " ";
	cout << endl;
	return 0;
}
