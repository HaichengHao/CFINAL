//#include<stdio.h>
//#include<stdlib.h>
////1.int(*f)(void)
////2.f就是函数指针，它可以接收的函数是返回一个int没有形参的函数
////3.传入GetNextRandomValue其实过程就是int(*f)(void)=GetNextRandomValue,就是让f这个函数指针指向GetNextRandomValue,这样就可以调用这个函数
////4.f这里被initArry调用，充当了回调函数的角色（也就是被别的函数调用的函数）
//void initArry(int* array, int arraySize, int(*f)(void)) {
//	int i;
//	for (i = 0; i < arraySize; i++)
//		array[i] = (*f)();//这里通过函数指针调用了GetNextRandomValue
//	//调用形式2 array[i] = f();
//}
//
////获取随机值
//int GetNextRandomValue() {
//	return rand();//rand函数会返回随机的整数
//}
//
//int main() {
//	int myarray[10], i;//定义了一个数组和一个int类型
//
//	//说明
//	//1.调用了initArry函数
//	//2.传入了一个函数名（函数名的本质就是一个地址），需要用函数指针来接收
//	initArry(myarray, 10, GetNextRandomValue);
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", myarray[i]);
//	}
//	printf("\n");
//	getchar();
//	return 0;
//}