//#include<stdio.h>
////void test2(int* p); //函数声明，接收int,函数写在main函数之后就需要在main函数前声明
////-----------------------
//void test2(int* p) {//int*p让这个p指向传入的地址
//	*p += 1;//*p访问到num的值
//}
//
//void main() {
//	int  num = 90;
//	int* p = &num;//将num的地址赋给p
//	test2(&num);//传地址
//	printf("main()中的num=%d", num);//num=91
//	//test2(p);
//	//printf("\nmain()中的num=%d", num);
//	getchar();
//}
//
////--------这是写在了main函数之后的函数，需要往main函数之前放声明
////void test2(int* p) {
////	*p += 1;//*p访问到num的值
////}