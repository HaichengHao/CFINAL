///*
//����һ�Ź���ѧ����Ϣ�ͽ�ʦ��Ϣ�ı��ѧ����Ϣ����������š�
//�Ա�ְҵ����������ʦ����Ϣ������������š��Ա�ְҵ����ѧ��Ŀ
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define TOTAL 2//��Ա����
////����һ��������
//union Myunion {
//	float score;
//	char course[20];
//};
//
//
//
//
////������һ���ṹ��Person
//struct Person{
//	char name[20];//����
//	int num;//���
//	char sex;//�Ա�f-->Ů m-->��
//	char profession;//ְԱ s-->ѧ�� t-->��ʦ
//	//union {//����������
//	//	float score;
//	//	char course[20];
//	//}sc;//sc��һ�����������
//	union Myunion sc;//���干�������sc
//};
//void main() {
//	int i;
//	struct Person persons[TOTAL];//������һ���ṹ������
//	//������Ա��Ϣ
//	for (i = 0; i < TOTAL; i++) {
//		printf("input info:");
//		scanf("%s %d %c %c", persons[i].name, &(persons[i].num), &(persons[i].sex), &(persons[i].profession));
//		if (persons[i].profession == 's') {//�����ѧ��
//			printf("�������ѧ���ĳɼ�:\n");
//			scanf("%f", &persons[i].sc.score);
//		}
//		else {//�������ʦ
//			printf("���������ʦ�ڿεĿγ�:\n");
//			scanf("%s", persons[i].sc.course);
//
//		}fflush(stdin);//ˢ������
//	}
//	printf("\nName\t\tNum\tSex\tProfession\tScore/Course\n");
//	for (i = 0; i < TOTAL; i++) {
//		if (persons[i].profession == 's') {//�����ѧ��
//			printf("%s\t\t%d\t%c\t%c\t\t%f\n", persons[i].name, persons[i].num, persons[i].sex,persons[i].profession, persons[i].sc.score);
//
//		}
//		else {//�������ʦ
//			printf("%s\t\t%d\t%c\t%c\t\t%s\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession,persons[i].sc.course);
//		}
//	}
//	getchar();
//	getchar();
//}
//
////#include<stdio.h>
////#define TOTAL 3;
////
//////union Myunion {
//////	float score;
//////	char course[20];
//////};
//////union Myunion myunion;
////
////struct School {
////	char name[20];
////	int num;
////	char profession;
////	union {
////		float score;
////		char course[20];
////	}sc;
////};
////void main() {
////	int i;
////	struct School school[TOTAL];
////	for (i = 0; i < 3; i++) {
////		printf("��������Ϣ:");
////		scanf("%s %d %c", school[i].name, school[i].num, school[i].profession);
////		if (school[i].profession == 's') {
////			printf("������ѧ���ĳɼ�:");
////			scanf("%f", &school[i].sc.course);
////		}
////		else {
////			printf("��������ʦ���ڵĿγ�:");
////			scanf("%s", &school[i].sc.course);
////		}fflush(stdin);
////	}
////}
//
//
///*
//
//input info:tom 12 m t
//���������ʦ�ڿεĿγ�:
//math
//input info:jack 1221 m s
//�������ѧ���ĳɼ�:
//89.1
//
//Name            Num     Sex     Profession      Score/Course
//tom             12      m       t               math
//jack            1221    m       s               89.099998
//
//
//
//
//*/