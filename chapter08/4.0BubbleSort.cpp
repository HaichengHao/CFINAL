////#include<stdio.h>
////void main() {
////	int arr[] = {3,9,-1,10,-2};
////	//第一轮排序
////	int j;
////	int t;//临时变量
////	for (j = 0; j < 4; j++) {
////		//如果前面的数大于后面的数，就交换
////		if (arr[j] > arr[j + 1]) {//如果前面的数大于后面的数
////			t = arr[j];//把前面的数的值先给临时变量t
////			arr[j] = arr[j + 1];//把后面的数的值给前面的数
////			arr[j + 1] = t;//把临时变量的值给后面的数
////		}
////	}
//// //第二轮排序
////	for (j = 0; j < 3; j++) {
////		//如果前面的数大于后面的数，就交换
////		if (arr[j] > arr[j + 1]) {//如果前面的数大于后面的数
////			t = arr[j];//把前面的数的值先给临时变量t
////			arr[j] = arr[j + 1];//把后面的数的值给前面的数
////			arr[j + 1] = t;//把临时变量的值给后面的数
////		}
////	}
//// //第三轮排序
////	for (j = 0; j < 2; j++) {
////		//如果前面的数大于后面的数，就交换
////		if (arr[j] > arr[j + 1]) {//如果前面的数大于后面的数
////			t = arr[j];//把前面的数的值先给临时变量t
////			arr[j] = arr[j + 1];//把后面的数的值给前面的数
////			arr[j + 1] = t;//把临时变量的值给后面的数
////		}
////	}
//// //第四轮排序
////	for (j = 0; j < 1; j++) {
////		//如果前面的数大于后面的数，就交换
////		if (arr[j] > arr[j + 1]) {//如果前面的数大于后面的数
////			t = arr[j];//把前面的数的值先给临时变量t
////			arr[j] = arr[j + 1];//把后面的数的值给前面的数
////			arr[j + 1] = t;//把临时变量的值给后面的数
////		}
////	}
////	for (j = 0; j < 5; j++) {
////		printf("%d ",arr[j]);
////	}
////}
//
//
////因为每轮排序几乎一样，只是j的值在变化，所以我们可以使用for循环套用
//#include<stdio.h>
//#include<string.h>
//void main() {
//	int arr[] = { 3,9,-1,10,-2 ,-10,20,-20,98};
//	int arrlen = sizeof(arr) / sizeof(int);//定义数组元素长度变量
//	int i;
//	int j;
//	int t;//临时变量
//	for (i =0; i<arrlen; i++,arrlen-1){//让i等于数组元素个数
//		for (j = 0; j < arrlen - 1; j++) {
//			//如果前面的数大于后面的数，就交换
//			if (arr[j] > arr[j + 1]) {//如果前面的数大于后面的数
//				t = arr[j];//把前面的数的值先给临时变量t
//				arr[j] = arr[j + 1];//把后面的数的值给前面的数
//				arr[j + 1] = t;//把临时变量的值给后面的数
//			}
//		}
//	}
//	for (j = 0; j < arrlen; j++) {
//		printf("%d ", arr[j]);
//	}
//}