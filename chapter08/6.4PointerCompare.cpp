////#include<stdio.h>
////int main() {
////	int var[] = { 10,100,200 };
////	int* ptr;
////	ptr = var;//ptr指向var首地址
////	//if(ptr == var[0])//错误，类型不一样,不能这样写
////	if (ptr == &var[0]) {//可以
////		printf("\nok2");//输出
////	}
////	if (ptr == var) {//可以
////		printf("\ok3");//输出
////	}
////	if (ptr == &var[1]) {//可以比较，但很明显,它们并不相同，返回false
////		printf("\ok4");//不输出
////	}
////}
//
//#include<stdio.h>
//const int MAX = 3;
//int main() {
//	int var[] = { 10,100,200 };
//	int i, * ptr;
//	ptr = var;
//	i = 0;
//	while (ptr <= &var[MAX - 2]) {
//		printf("address of var[%d]=%x\n", i, ptr);
//		printf("value of var[%d] = %d\n",i, *ptr);
//		ptr++;
//		i++;
//	}return 0;
//}