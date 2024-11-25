#define _CRT_SECURE_NO_WARNINGS
//写程序实现一个函数PrintN，使得传入一个正整数为N的参数后，能顺序打印从1到N的全部正整数
#include <stdio.h>
#include "review01.h"
void PrintN(int N);
int main(){
	int N;
	scanf("%d", &N);
	PrintN(N);
	return 0;
}
void PrintN(int N) {
	int i;
	for (i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
}
//void PrintN(int N)
//{
//	if (N) {
//		PrintN(N - 1);
//		printf("%d\n", N);
//	}
//}
