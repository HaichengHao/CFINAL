///*定义二维数组，用于保存三个班，每个班五名同学的成绩，
//并求出每个班级的平均分，以及所有班级的平均分*/
////思路分析
////1.定义一个三行四列的数组，行对应班级，列对应班级内的学生成绩
////2.初始化数组内的每个元素
////3.利用for循环来给数组内的每个元素赋值
////4.定义变量来获取班级成绩的总数和，以及所有班级的总数和
//#include<stdio.h>
//void main() {
//	double score[3][5];//定义一个三行五列的数组
//	int i, j;//初始化循环变量
//	//double sum = 0.0;
//	double totalsum = 0.0;//定义全部班级总成绩的变量
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5; j++) {
//			score[i][j] = 0.0;
//		}
//	}
//	for (i = 0; i < 3; i++) {//i最终是成为了3
//		double sum = 0.0;
//		for (j = 0; j < 5; j++) {
//			printf("请输入第%d个班第%d个学生的成绩", i+1, j+1);
//			scanf_s("%lf", &score[i][j]);
//			sum += score[i][j];//定义某一个班级的总成绩
//		}printf("第%d个班级的总成绩为:%f,平均分为:%f\n", i+1, sum,sum/j);//这里是sum/j因为我们要得知一个班级也就是一行的平均分，也就是五个学生，上面循环里，j最终成为5
//		totalsum += sum ;
//	}//printf("\n");
//	//printf("总分数为%lf\n", sum);
//	printf("全部班级的总分数为:%f,总平均分为:%f\n", totalsum ,totalsum/(i*j));
//	getchar();
//	getchar();
//}
///*
//请输入第1个班第1个学生的成绩20
//请输入第1个班第2个学生的成绩0
//请输入第1个班第3个学生的成绩20
//请输入第1个班第4个学生的成绩30
//请输入第1个班第5个学生的成绩20
//第1个班级的总成绩为:90.000000,平均分为:18.000000
//请输入第2个班第1个学生的成绩30
//请输入第2个班第2个学生的成绩30
//请输入第2个班第3个学生的成绩20
//请输入第2个班第4个学生的成绩302
//请输入第2个班第5个学生的成绩30
//第2个班级的总成绩为:412.000000,平均分为:82.400000
//请输入第3个班第1个学生的成绩20
//请输入第3个班第2个学生的成绩20
//请输入第3个班第3个学生的成绩29
//请输入第3个班第4个学生的成绩29
//请输入第3个班第5个学生的成绩29
//第3个班级的总成绩为:127.000000,平均分为:25.400000
//
//全部班级的总分数为:629.000000,总平均分为:41.933333
//*/