//#include<stdio.h>
//#include<stdlib.h>
//void check(int* p) {
//	int i;
//	printf("\n������ĳɼ���:\n");
//	for (i = 0; i < 5; i++) {
//		if (p[i] < 60) {
//			printf("%d\n", p[i]);
//		}
//	}
//}
//
//int main() {
//	//void check(int*);//��������
//	int* p1, i;
//	//printf("p1��ǰָ��ĵ�ַ:%p\n", p1);�ᱨ����Ϊp1û��ָ���κε�ַ���൱��p=NULL;
//	p1 = (int*)malloc(5 *sizeof(int));
//	for (i = 0; i < 5; i++) {
//		printf("�������%d��ͬѧ�ĳɼ�:\n",i+1);
//		scanf_s("%d", p1 + i);
//	}
//	check(p1);
//	free(p1);//������ͷţ��Ǿ�һֱռ��������ռ�
//	getchar();
//	getchar();
//	return 0;
//}
////void check(int* p) {
////	int i;
////	printf("\n������ĳɼ���:\n");
////	for (i = 0; i < 5; i++) {
////		if (p[i] < 60) {
////			printf("%d", p[i]);
////		}
////	}
////}