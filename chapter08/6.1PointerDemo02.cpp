////pointer��--����
//
//#include<stdio.h>
//const int MAX = 3;
//int main() {
//	int var[] = { 10,200,300 };
//	int i, * ptr;
//	ptr = &var[MAX - 1];//���������һ��ֵ��Ӧ�ĵ�ַ��ptr����Ϊ���һ��ֵ��var[2],������var[3]������ֵ�±�Ϊ2������3����Ҫ���
//	for (i = MAX; i > 0; i--) {//�������
//		printf("ptr��ŵĵ�ַ=%p ,var[%d]�ĵ�ַ=%p\n", ptr, i - 1, &var[i - 1]);
//		printf("�洢ֵ:var[%d]=%d\n", i - 1, *ptr);
//		ptr--;//��������ָ��ָ��ǰһ������Ԫ�صĵ�ַ�����Ƕ����������int���ͣ�����ptr -1��������ptr�ڴ�ŵ�ֵ��ȥ4
//
//	}return 0;
//}