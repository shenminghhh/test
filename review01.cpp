#define _CRT_SECURE_NO_WARNINGS
//д����ʵ��һ������PrintN��ʹ�ô���һ��������ΪN�Ĳ�������˳���ӡ��1��N��ȫ��������
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
