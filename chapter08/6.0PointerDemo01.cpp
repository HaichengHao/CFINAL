////pointer的++操作


//#include<stdio.h>
//	const int MAX = 3;//定义一个int型的常量MAX
//	int main() {
//		int var[] = { 10,100,200 };//定义一个int数组
//		int i, * ptr;//ptr是一个int型的指针
//		ptr = var;/*ptr指向了var数组的首地址; 数组本身就是地址传递，
//		数组var的值是数组元素初值的地址，这里ptr = var ;就是把var的值（就是指向的数组元素的首地址）
//		给了ptr，ptr的值现在就成了数组的首地址*/
//		for (i = 0; i < MAX; i++) {
//			printf("var[%d]地址=%p\n", i, ptr);
//			printf("存储值:var[%d] = %d\n",i, *ptr);
//			ptr++;//功能是把指针移向下一个数组的元素，存放值+4字节（因为我们用的是int）
//		}
//		getchar();
//		return 0;
//	}
