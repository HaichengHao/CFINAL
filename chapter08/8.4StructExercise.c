///*
//һ�����������ο͵�������ȡ��ͬ�۸����Ʊ
//���дһ���ṹ��Visitor,��������ξ����ܹ������Ʊ�۸����
//����:����>18,��Ʊ�۸�20Ԫ������������
//����ѭ���ӿ���̨�������ֺ����䣬��ӡ��Ʊ�շ�����������������n��������˳�
//
//*/
//
//
//#include<stdio.h>
//#include<string.h>
//struct Visitor {
//	char* name[50];
//	int age;
//	double pay;
//};
////��д��������ҵ��
////˵������Ϊ�ṹ����ֵ���ݣ��´��һ�����������ݣ�Ч�ʽϵ�
////��ˣ�Ϊ�����Ч�ʣ�����ֱ�ӽ���һ����ַ��ָ�룩
//void ticket(struct Visitor* visitor) {//�ṹ��ָ�����ͣ�ָ��һ���ṹ���Ա����
////�ж�
//	if ((*visitor).age > 18) {//visitor��һ��ָ�룬��ָ��ṹ�����visitor�����ݣ�Ȼ��ͨ��.ageȡ������ָ��Ľṹ��visitor��ֵ
//		(*visitor).pay = 20;
//	}
//	else {
//		(*visitor).pay = 0;
//	}
//}
//void main() {
//	struct Visitor  visitor;//�����ṹ�����
//	while (1) {//ѭ�����������ֺ�����
//		printf("�������ο͵�����:\n");
//		scanf_s("%s", visitor.name);
//		if (!strcmp("n", visitor.name)) {
//			break;
//		}
//		printf("�������ο͵�����:\n");
//		scanf_s("%d", &visitor.age);
//		ticket(&visitor);//���ú�����ȡӦ����Ʊ��
//		printf("���ο�Ӧ��Ʊ��=%.2f", visitor.pay);
//	}
//	getchar();
//	getchar();
//}