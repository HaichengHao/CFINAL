//#include<stdio.h>
//#include<stdlib.h>
////��дһ����������һ��һά����
//int* f1() {
//	static int arr[10];//�������static��arr�Ŀռ��ھ�̬����������
//	int i;
//	for (i = 0; i < 10; i++) {
//		arr[i] = rand();//��ֱ��arr�������Ԫ��arr[0]-arr[9]��ʮ�������
//	}//printf("arr��ֵΪ:%d", *arr);
//	return arr;//��������
//	
//}
//void main() {
//	int* p;
//	int i;
//	p = f1();//pָ������f1���ɵ�������׵�ַ����arr��һ��Ԫ�صĵ�ַ��
//	for (i = 0; i < 10; i++) {
//		printf("\n%d", p[i]);//�����p[i]Ҳ����д��*(p+i)//p+i�൱��p+=i,Ҳ����ָ��ļӲ���������ָ���ƶ�����һ��Ԫ��
//	}
//}
////
////#include<stdio.h>
////int* func() {
////	static int n = 100;//�ֲ������ڷ���ʱ�����ٸú������е�����,��������static���Σ�����ֲ���������ŵ���̬�洢����
////	//printf("address of n :%p\n", &n);
////	return &n;
////
////}int main() {
////	int* p = func();
////	printf("value of p = %p\n", p);
////	int n;
////	n = *p;
////	printf("value of n =%d\n", n);
////	return 0;
////}