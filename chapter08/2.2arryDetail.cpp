//#include<stdio.h>
//void f1(int arr[]) {
//	printf("函数中的arr的地址 = %p\n", arr);//因为数组本身就是指针传递，所以不需要写成&arr
//	arr[0] = arr[0] + 1;
//}
//void main() {
//	int arr[3] = { 3,4,5 };
//	printf("main函数中的arr的地址:%p\n", arr);//因为数组本身就是指针传递，所以不需要写成&arr
//	int i;
//	//数组默认是以地址传递（传递指针）
//	f1(arr);//这里调用了f1()函数，所以数组第一个元素，也就是3，变成了3+1=4
//	//遍历main函数中的arr
//	for (i = 0; i < 3; i++) {
//		printf("arr[%d]=%d ", i, arr[i]);//arr[0]=4 arr[1]=4 arr[2]=5
//
//	}
//}
//
///*
//main函数中的arr的地址:000000281EEFFC78  
//函数中的arr的地址 = 000000281EEFFC78
//arr[0]=4 arr[1]=4 arr[2]=5
//*/