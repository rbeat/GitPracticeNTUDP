#include "mylib.h"

int main(){
	int mas[] = {0,1,2,3,4};
	int size = sizeof(mas)/sizeof(*mas);
	iterArray(mas,size);
	return 0;
}
