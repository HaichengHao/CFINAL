////pointer的--操作
//
//#include<stdio.h>
//const int MAX = 3;
//int main() {
//	int var[] = { 10,200,300 };
//	int i, * ptr;
//	ptr = &var[MAX - 1];//把数组最后一个值对应的地址给ptr，因为最后一个值是var[2],而不是var[3]第三个值下标为2而不是3，不要搞混
//	for (i = MAX; i > 0; i--) {//逆序遍历
//		printf("ptr存放的地址=%p ,var[%d]的地址=%p\n", ptr, i - 1, &var[i - 1]);
//		printf("存储值:var[%d]=%d\n", i - 1, *ptr);
//		ptr--;//本质是让指针指向前一个数组元素的地址，我们定义的数组是int类型，所以ptr -1本质是让ptr内存放的值减去4
//
//	}return 0;
//}