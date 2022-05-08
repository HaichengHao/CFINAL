//#include<stdio.h>
//#include<stdlib.h>
////编写一个函数返回一个一维数组
//int* f1() {
//	static int arr[10];//必须加上static让arr的空间在静态数据区分配
//	int i;
//	for (i = 0; i < 10; i++) {
//		arr[i] = rand();//会分别给arr数组分配元素arr[0]-arr[9]共十个随机数
//	}//printf("arr的值为:%d", *arr);
//	return arr;//返回数组
//	
//}
//void main() {
//	int* p;
//	int i;
//	p = f1();//p指向是在f1生成的数组的首地址（即arr第一个元素的地址）
//	for (i = 0; i < 10; i++) {
//		printf("\n%d", p[i]);//这里的p[i]也可以写成*(p+i)//p+i相当于p+=i,也就是指针的加操作，会让指针移动到下一个元素
//	}
//}
////
////#include<stdio.h>
////int* func() {
////	static int n = 100;//局部变量在返回时会销毁该函数所有的数据,但是有了static修饰，这个局部变量将会放到静态存储区。
////	//printf("address of n :%p\n", &n);
////	return &n;
////
////}int main() {
////	int* p = func();
////	printf("value of p = %p\n", p);
////	int n;
////	n = *p;
////	printf("value of n =%d\n", n);
////	return 0;
////}