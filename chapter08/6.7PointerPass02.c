////���������ָ�����
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
/////-----��ȷ��д��-------
//#include<stdio.h>
//double Arravg(int *arr, int arrlen) {//����д�ɺ�֮ǰ��int arr[]Ҳ�ǿ��Եģ���Ϊ�����ǵ�ַ����
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
