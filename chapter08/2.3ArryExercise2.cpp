///*
//求出一个数组的最大值，并得到对应的下标
//*/
////分析
///*假定arr[0]就是最大值，然后我们依次和数组后面的数进行比较，
//如果我们发现有比MAX更大的数，就相应的变化（把更大数赋给max），
//当我们遍历完整个数组，max就是最大数*/
//#include<stdio.h>
//void main() {
//	int arr[5] = { 2,34,824,34,212 };//定义一个数组
//	int max = arr[0];//定义变量max，先把arr[0]的值(也就是2)赋给它
//	int arrlen = sizeof(arr) / sizeof(int);//数组元素长度的变量，动态长度，方便使用
//	int idMax = 0;//定义最大值下标存储变量;
//	int i;//定义i
//	for (i = 1; i < arrlen; i++) {//开始遍历数组，因为arr[0]之前没有元素，我们直接从arr[1]开始
//		if (arr[i] > max) {//判断下标为i的数组元素是否大于max,如果大于max,就把max的值置为arr[i]的值
//			max = arr[i];//如果数组的第i个下标的数大于max就把它的值赋给max
//			idMax = i;//把最大值的下标给idMax
//	}
//	}
//	printf("max = %d\n", max);//打印最大值
//	printf("最大值的下标:%d", idMax);
//}
///*
//max = 824
//最大值的下标:2
//*/