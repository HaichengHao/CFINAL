////#include<stdio.h>
////const int MAX = 3;
////int main() {
////	
////	int var[] = { 10,100,200 };
////	int i, * ptr[3];
////	for (i = 0; i < MAX; i++) {
////		ptr[i] = &var[i];
////	}
////	for (i = 0; i < MAX; i++) {
////		printf("value of var[%d]=%d\n", i, *ptr[i]);
////		printf("address of var[%d] = %p\n", i, &var[i]);
////		printf("value of ptr[%d]=%p\n", i,ptr[i]);
////		printf("address of origin ptr[%d] = %p\n", i, &ptr[i]);
////	}
////}
////
/////*
////value of var[0]=10
////address of var[0] = 000000D82C6FF8A8
////value of ptr[0]=000000D82C6FF8A8//ptr里存放的是var的地址
////address of origin ptr[0] = 000000D82C6FF8F8//ptr本身的地址
////value of var[1]=100
////address of var[1] = 000000D82C6FF8AC
////value of ptr[1]=000000D82C6FF8AC
////address of origin ptr[1] = 000000D82C6FF900
////value of var[2]=200
////address of var[2] = 000000D82C6FF8B0
////value of ptr[2]=000000D82C6FF8B0
////address of origin ptr[2] = 000000D82C6FF908
////*/
//
///*demo2, 定义一个指向字符串的指针数组来存储字符串列表【四大名著的书名】
//并通过遍历该指针数组，显示字符串信息
//
//books[0]=三国
//books[1]=红楼
//books[2]=水浒
//books[3]=西游
//*/
//#include<stdio.h>
//#include<string.h>
//void main() {
//	char* books[] = {"三国","水浒","红楼","西游"};
//	int i,len = 4;
//	for (i = 0; i < len; i++) {
//		printf("\nbooks[%d]=%s", i, books[i]);
//	}
//
//}