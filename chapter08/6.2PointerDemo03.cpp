////pointer的+操作
//
//
//#include<stdio.h>
//	const int MAX = 3;//定义一个int型的常量MAX
//	int main() {
//		int var[] = { 10,100,200 };//定义一个int数组
//		int i, * ptr;
//		ptr = var;//将var的首地址赋给ptr
//		ptr += 2;//ptr的存储地址+2个（int）字节
//		printf("var[2]=%d \n var[2]的地址=%p\n ptr=%p\n ptr指向的地址内容=%d\n", var[2], &var[2], ptr, *ptr);
//		getchar();
//		return 0;
//	}
//
//	/*
// var[2]=200
// var[2]的地址=00000017EC3AF8F0
// ptr=00000017EC3AF8F0
// ptr指向的地址内容=200
//	*/