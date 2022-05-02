//#include<stdio.h>
//#define M (n*n+3*n)//宏定义，宏名为M，对应的字符串(n*n+3*n)
////如果宏定义的字符串有（），小括号不省略，它是一个整体;
//int main() {
//	int sum, n;
//	printf("input a number：\n");
//	scanf("%d", &n);
//	sum = 3 * M + 4 * M + 5 * M;//宏展开-->3*(n*n+3*n)+4(n*n+3*n)+5(n*n+3*n)
//	printf("sum = %d\n", sum);
//	getchar();
//	return 0;
//
//}