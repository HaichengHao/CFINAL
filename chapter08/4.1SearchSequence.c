///* ˳����ҵİ���
//��һ������:{ 23,1,34,89,101 }
//������Ϸ���Ӽ�������������һ�������ж��������Ƿ����������˳����ҡ�
//Ҫ������ҵ��˷���true,���򷵻�false
//*/
//
//#include<stdio.h>
//int seqsc(int arr[],int arrlen,int val) {
//	int i;
//	for (i = 0; i < arrlen; i++) {
//		if (arr[i] == val) {
//			return i;
//		}
//	}
//	//�����forѭ����û��ִ�е�return˵��û���ҵ�������-1
//	return -1;
//}
//
//void main() {
//	int arr1[] = { 21,23,12,34,45 };
//	int arrlen = sizeof(arr1) / sizeof(int);
//	int a = 0;
//	//printf("������Ҫ��%d ��Ҫ���ҵ���:\n", arr1);
//	scanf_s("%d", &a);
//	int id = seqsc(arr1, arrlen, a);
//	if (id != -1) {
//		printf("\n�ҵ�,�±�Ϊ%d", id);
//	}
//	else {
//		printf("\nû���ҵ�");
//	}
//}