////#include<stdio.h>
////int main() {
////	int var[] = { 10,100,200 };
////	int* ptr;
////	ptr = var;//ptrָ��var�׵�ַ
////	//if(ptr == var[0])//�������Ͳ�һ��,��������д
////	if (ptr == &var[0]) {//����
////		printf("\nok2");//���
////	}
////	if (ptr == var) {//����
////		printf("\ok3");//���
////	}
////	if (ptr == &var[1]) {//���ԱȽϣ���������,���ǲ�����ͬ������false
////		printf("\ok4");//�����
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