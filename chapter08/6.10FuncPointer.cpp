////#include<stdio.h>
//////max是一个函数，它接收两个参数，返回较大的数
////int max(int a, int b) {
////	printf("max函数的首地址=%p\n", &max);
////	return a > b ? a : b;
////}
////int main() {
////	int x, y, maxVal;
////
////	//说明 函数指针
////	//1.函数指针的名字pmax
////	//2.int表示该函数指针指向的函数是int 类型的函数
////	//3.(int,int)表示该函数指针指向的函数形参是接收两个int类型//max函数满足条件
////	int(*pmax)(int, int) = max;//创建一个叫pmax的函数指针，指向max的首地址
////	printf("输入两个数字:\n");
////	scanf_s("%d %d", &x, &y);
////	maxVal = (*pmax)(x, y);///通过函数指针去调用函数
////	printf("pmax自己的地址%p,pmax保存的值:%p\n", &pmax, pmax);
////	printf("两数中的最大值为:%d", maxVal);
////}
/////*
////输入两个数字:
////21 34
////max的地址=00007FF6B04B10FF
////pmax自己的地址000000654D35F5F8,pmax保存的值:00007FF6B04B10FF
////两数中的最大值为:34
////*/
////
////
//////个人感觉很鸡肋的功能，都创建函数了直接调用函数就好了，为啥非得再搞一个函数指针指向函数？没办法，可以不用，但要会。。。。
//
//#include<stdio.h>
//int func(int x) {
//	return x += 1;
//}
//
//int main() {
//	int num = 0;
//	int val = 0;
//	int(*pfunc)(int) = func;
//	printf("请输入一个数:\n");
//	scanf("%d", &num);
//	val = (*pfunc)(num);
//	printf("这个数+1就等于:%d\n", val);
//}