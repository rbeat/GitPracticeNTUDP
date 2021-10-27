#ifndef ADD_H
#define ADD_H
 
#include <iostream>
using namespace std;

extern int mas[];
extern int size;
int iterArray(int mas[],int size);


int iterArray(int mas[],int size)
{
	int i;
	for(i = 0; i < size; i++){
		 cout << mas[i] << endl;
	}
	return 0;
}

#endif
