////传递数组给指针变量
//
////#include<stdio.h>
//////double Arravg(int arr[], int arrlen);
////double Arravg(int arr[], int arrlen) {
////	int i;
////	double sum = 0.0;
////	for (i = 0; i < arrlen; i++) {
////		sum += arr[i];
////	}double avg = sum / arrlen;
////	return avg;
////}
////void main() {
////	int arr[] = { 100,2,3,17,50 };
////	double avg;
////	int arrlen;
////	arrlen = sizeof(arr) / sizeof(int);
////	avg = Arravg(arr,arrlen);
////	printf("avg = %.2f", avg);
////}
//////double Arravg(int arr[], int arrlen) {
//////	int i;
//////	double sum = 0.0;
//////	for (i = 0; i < arrlen; i++) {
//////		sum += arr[i];
//////	}double avg = sum / arrlen;
//////	return avg;
//////}
//
//
/////-----正确的写法-------
//#include<stdio.h>
//double Arravg(int *arr, int arrlen) {//这里写成和之前的int arr[]也是可以的，因为数组是地址传递
//		int i;
//		double sum = 0.0;
//		for (i = 0; i < arrlen; i++) {
//			sum += arr[i];
//		}double avg = sum / arrlen;
//		return avg;
//	}
//
//void main() {
//	int arr[] = { 100,2,3,17,50 };
//	int arrlen = sizeof(arr) / sizeof(int);
//	double avg;
//	avg = Arravg(arr, arrlen);
//	printf("avg = %f", avg);
//}
