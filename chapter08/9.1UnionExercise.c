///*
//现有一张关于学生信息和教师信息的表格。学生信息包括姓名编号、
//性别、职业、分数、教师的信息包括姓名、编号、性别、职业、教学科目
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define TOTAL 2//人员总数
////定义一个共用体
//union Myunion {
//	float score;
//	char course[20];
//};
//
//
//
//
////定义了一个结构体Person
//struct Person{
//	char name[20];//姓名
//	int num;//编号
//	char sex;//性别f-->女 m-->男
//	char profession;//职员 s-->学生 t-->老师
//	//union {//匿名共用体
//	//	float score;
//	//	char course[20];
//	//}sc;//sc是一个共用体变量
//	union Myunion sc;//定义共用体变量sc
//};
//void main() {
//	int i;
//	struct Person persons[TOTAL];//定义了一个结构体数组
//	//输入人员信息
//	for (i = 0; i < TOTAL; i++) {
//		printf("input info:");
//		scanf("%s %d %c %c", persons[i].name, &(persons[i].num), &(persons[i].sex), &(persons[i].profession));
//		if (persons[i].profession == 's') {//如果是学生
//			printf("请输入该学生的成绩:\n");
//			scanf("%f", &persons[i].sc.score);
//		}
//		else {//如果是老师
//			printf("请输入该老师授课的课程:\n");
//			scanf("%s", persons[i].sc.course);
//
//		}fflush(stdin);//刷新输入
//	}
//	printf("\nName\t\tNum\tSex\tProfession\tScore/Course\n");
//	for (i = 0; i < TOTAL; i++) {
//		if (persons[i].profession == 's') {//如果是学生
//			printf("%s\t\t%d\t%c\t%c\t\t%f\n", persons[i].name, persons[i].num, persons[i].sex,persons[i].profession, persons[i].sc.score);
//
//		}
//		else {//如果是老师
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
////		printf("请输入信息:");
////		scanf("%s %d %c", school[i].name, school[i].num, school[i].profession);
////		if (school[i].profession == 's') {
////			printf("请输入学生的成绩:");
////			scanf("%f", &school[i].sc.course);
////		}
////		else {
////			printf("请输入老师教授的课程:");
////			scanf("%s", &school[i].sc.course);
////		}fflush(stdin);
////	}
////}
//
//
///*
//
//input info:tom 12 m t
//请输入该老师授课的课程:
//math
//input info:jack 1221 m s
//请输入该学生的成绩:
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