///*
//
//编写一个dog结构体，包含name(char[10])、age(int)、weight(double)属性
//编写一个say函数，返回字符串，返回信息中包含所有成员值
//在main方法中，创建Dog结构体变量，调用say函数，将调用结果打印输出
//
//
//*/
//
//
//
//
////#include<stdio.h>
////void main() {
////	struct Dog {
////		char* name;
////		int age;
////		float weight;
////	}dog1={"wangwang",10,12.4},dog2={"wowo",8,8.2};
////	printf("名字:%s,年龄:%d,重量:%.2f\n", dog1.name, dog1.age, dog1.weight);
////	printf("名字:%s,年龄:%d,重量:%.2f", dog2.name, dog2.age, dog2.weight);
////}
//
//
//#include<stdio.h>
////定义Dog结构体
//struct Dog {
//	char* name;
//	int age;
//	double weight;
//};
////say函数
//char* say(struct Dog dog) {
//	//将这个信息做成一个字符串（字符数组）
//	static char info[50];//局部变量，要用static修饰
//	sprintf(info,"name =%s age = %d weight = %.2f",dog.name,dog.age,dog.weight);
//	return info;//字符串的名称本身就代表着地址
//}
//void main() {
//	//测试
//	struct Dog dog;
//	char* info = NULL;
//	dog.name = "小黑";
//	dog.age = 1;
//	dog.weight = 3.4;
//	info = say(dog);//结构体变量默认是值传递
//	printf("\n小狗的信息为:%s", info);
//}