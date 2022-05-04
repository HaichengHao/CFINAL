//////==多维数组
////#include<stdio.h>
////void main() {
////	int a[4][6];//表示一个四行六列的二维数组
////	int i, j;
////	for (i = 0; i < 4; i++) {//遍历行
////		for (j = 0; j < 6; j++) {//遍历列
////			a[i][j] = 0;//全部置为0；
////		}
////	}
////	a[1][2] = 1;
////	a[2][1] = 2;
////	a[2][3] = 3;
////
////	//输出二维数组
////	for (i = 0; i < 4; i++) {
////		for (j = 0; j < 6; j++) {
////			printf("%d", a[i][j]);
////		}printf("\n");
////	}
////	//看看二维数组的内存布局
////	printf("a的首地址：%p\n", a);
////	printf("a[0]的首地址：%p\n", a[0]);
////	printf("a[0][0]的首地址：%p\n", &a[0][0]);
////	printf("a[0][1]的首地址: %p\n", &a[0][1]);
////	//将二维数组的各个元素的地址输出
////	printf("\n");
////	for (i = 0; i < 4; i++) {
////		printf("a[%d]的地址=%p", i, a[i]);
////		for (j = 0; j < 6; j++) {
////			printf("a[%d][%d]的地址=%p", i, j, &a[i][j]);
////		}printf("\n");
////	}
////	getchar();
////}
//
////得到数组的和
//#include<stdio.h>
//#include<string.h>
//void main() {
//	//int a[4][3] = { {1,2,3},{3,2,1},{2,3,1},{2,2,1} };
//	int b[3][3] = { 1,3,5,2,3,2,1,2,5 };
//	int rows = sizeof(b) / sizeof(b[0]);//可以通过这条获得列数
//	//sizeof(b)可以获得二维数组b的总大小，sizeof(b[0])可以得到二维数组第一行的大小
//	//想象成一个矩形，知道它的面积和长，就可以算它的宽
//	int colum = sizeof(b[0]) / sizeof(int);//获得行数
//	int sum = 0;
//	int i, j;
//	for (i = 0; i < colum; i++) {
//		for (j = 0; j < rows; j++) {
//			sum += b[i][j];
//			//printf("%d", b[i][j]);
//		}
//	}printf("sum = %d", sum);
//}