///*一个养鸡场有7只鸡，他们的体重分别是3kg，5kg,1kg,3.4kg,2kg,5kg,8kg。
//请问这7只鸡的总体重是多少？平均体重是多少？*/
//#include<stdio.h>
//void main() {
//	//1定义数组
//	double hens[7];
//	//2.初始化数组的每个元素
//	//[]里的数字是数组的下标
//	hens[0] = 3;
//	hens[1] = 5;
//	hens[2] = 1;
//	hens[3] = 3.4;
//	hens[4] = 2;
//	hens[5] = 5;
//	hens[6] = 8;
//
//	double totalWeight = 0.0;
//	double avgWeight = 0.0;
//	//3.遍历数组
//	//如何得到数组大小
//	//sizeof(hens)数组总的大小
//	double arrlen = 0.0;
//	printf("sizeof(hens) = %d\n", sizeof(hens));
//	//48,因为我们的数组里有6个元素，一个double占8字节，所以6个就是6*8=48
//	//因此要得到元素个数只需要让数组的长度除去类型的长度
//	arrlen = sizeof(hens) / sizeof(double);
//	printf("元素个数:%f\n", arrlen);
//	int i = 0;
//	for (i = 0; i < arrlen; i++) {
//		totalWeight += hens[i];//累计每只鸡的体重
//	}avgWeight = totalWeight / arrlen;
//	printf("总体重:%f\n", totalWeight);
//	printf("平均体重:%f", avgWeight);
//}