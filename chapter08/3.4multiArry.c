//////==��ά����
////#include<stdio.h>
////void main() {
////	int a[4][6];//��ʾһ���������еĶ�ά����
////	int i, j;
////	for (i = 0; i < 4; i++) {//������
////		for (j = 0; j < 6; j++) {//������
////			a[i][j] = 0;//ȫ����Ϊ0��
////		}
////	}
////	a[1][2] = 1;
////	a[2][1] = 2;
////	a[2][3] = 3;
////
////	//�����ά����
////	for (i = 0; i < 4; i++) {
////		for (j = 0; j < 6; j++) {
////			printf("%d", a[i][j]);
////		}printf("\n");
////	}
////	//������ά������ڴ沼��
////	printf("a���׵�ַ��%p\n", a);
////	printf("a[0]���׵�ַ��%p\n", a[0]);
////	printf("a[0][0]���׵�ַ��%p\n", &a[0][0]);
////	printf("a[0][1]���׵�ַ: %p\n", &a[0][1]);
////	//����ά����ĸ���Ԫ�صĵ�ַ���
////	printf("\n");
////	for (i = 0; i < 4; i++) {
////		printf("a[%d]�ĵ�ַ=%p", i, a[i]);
////		for (j = 0; j < 6; j++) {
////			printf("a[%d][%d]�ĵ�ַ=%p", i, j, &a[i][j]);
////		}printf("\n");
////	}
////	getchar();
////}
//
////�õ�����ĺ�
//#include<stdio.h>
//#include<string.h>
//void main() {
//	//int a[4][3] = { {1,2,3},{3,2,1},{2,3,1},{2,2,1} };
//	int b[3][3] = { 1,3,5,2,3,2,1,2,5 };
//	int rows = sizeof(b) / sizeof(b[0]);//����ͨ�������������
//	//sizeof(b)���Ի�ö�ά����b���ܴ�С��sizeof(b[0])���Եõ���ά�����һ�еĴ�С
//	//�����һ�����Σ�֪����������ͳ����Ϳ��������Ŀ�
//	int colum = sizeof(b[0]) / sizeof(int);//�������
//	int sum = 0;
//	int i, j;
//	for (i = 0; i < colum; i++) {
//		for (j = 0; j < rows; j++) {
//			sum += b[i][j];
//			//printf("%d", b[i][j]);
//		}
//	}printf("sum = %d", sum);
//}