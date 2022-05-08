//#include<stdio.h>
//#include<stdlib.h>
//void check(int* p) {
//	int i;
//	printf("\n不及格的成绩有:\n");
//	for (i = 0; i < 5; i++) {
//		if (p[i] < 60) {
//			printf("%d\n", p[i]);
//		}
//	}
//}
//
//int main() {
//	//void check(int*);//函数声明
//	int* p1, i;
//	//printf("p1当前指向的地址:%p\n", p1);会报错，因为p1没有指向任何地址，相当于p=NULL;
//	p1 = (int*)malloc(5 *sizeof(int));
//	for (i = 0; i < 5; i++) {
//		printf("请输入第%d名同学的成绩:\n",i+1);
//		scanf_s("%d", p1 + i);
//	}
//	check(p1);
//	free(p1);//如果不释放，那就一直占用着这个空间
//	getchar();
//	getchar();
//	return 0;
//}
////void check(int* p) {
////	int i;
////	printf("\n不及格的成绩有:\n");
////	for (i = 0; i < 5; i++) {
////		if (p[i] < 60) {
////			printf("%d", p[i]);
////		}
////	}
////}