///* 顺序查找的案例
//有一个数列:{ 23,1,34,89,101 }
//猜数游戏：从键盘中任意输入一个数，判断数列中是否包含该数【顺序查找】
//要求：如果找到了返回true,否则返回false
//*/
//
//#include<stdio.h>
//int seqsc(int arr[],int arrlen,int val) {
//	int i;
//	for (i = 0; i < arrlen; i++) {
//		if (arr[i] == val) {
//			return i;
//		}
//	}
//	//如果在for循环中没有执行到return说明没有找到，返回-1
//	return -1;
//}
//
//void main() {
//	int arr1[] = { 21,23,12,34,45 };
//	int arrlen = sizeof(arr1) / sizeof(int);
//	int a = 0;
//	//printf("输入你要在%d 中要查找的数:\n", arr1);
//	scanf_s("%d", &a);
//	int id = seqsc(arr1, arrlen, a);
//	if (id != -1) {
//		printf("\n找到,下标为%d", id);
//	}
//	else {
//		printf("\n没有找到");
//	}
//}