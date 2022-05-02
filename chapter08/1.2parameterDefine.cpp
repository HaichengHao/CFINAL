////#include<stdio.h>
////#define MAX(a,b) a>b? a:b
//////MAX就是带参数的宏 ，
//////(a,b)就是形参，
//////(a>b?)a:b是带参数的宏对应的字符串，该字符串中可以使用形参
////int main() {
////	int x, y, max;
////	printf("输入两个整数:");
////	scanf("%d %d", &x, &y);
////
////	//说明
////	//MAX(x,y);调用带参数宏定义，
////	//在宏替换时（预处理，由预处理器执行），会进行字符串的宏替换，同时会使用实参，去替换形参，
////	//x,y两个实参会替换掉MAX(a,b)里的形参a,b
////	max = MAX(x, y);
////	printf("\n两数中较大的数是:%d", max);
////	getchar();
////	return 0;
////}
//
//
////==demo2==在宏定义中，字符串内的形参通常要用小括号括起来以免出错
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////#define SQ(y) y*y//这样不带会和原本想表达的意思不同，会变成a+1*a+1=a+a+1
////#define SQ(y) (y)*(y) //这样在调用宏定义做宏替换时，实参a+1才能被括起来（a+1），才会成为（a+1)*(a+1)
////time_t start_t, end_t;
////double diff_t = 0;
////int main() {
////	int a, sq;
////	printf("请输入一个整数:");
////	scanf("%d", &a);
////	time(&start_t);
////	sq = SQ(a + 1);
////	printf("\nsq = %d", sq);
////	time(&end_t);
////	diff_t = difftime(end_t, start_t);
////	printf("耗时:%.10f", diff_t);
////	system("pause");
////	return 0;
////	
////}
//
//#include<stdio.h>
//int sqr(int a) {
//	int res = 0;
//	res = a * a;
//	return res;
//}
//int main() {
//	int a;
//	printf("输入一个数:");
//	scanf_s("%d", &a);
//	sqr(a);
//	printf("\n%d的平方为:%d", a, sqr(a));
//
//}