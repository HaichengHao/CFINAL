////结构体入门
///*
//张老太养了两只猫猫，一只名叫小白，今年3岁，白色，另一只叫小花，今年100岁，花色，
//请编写一个程序，当用户输入一只小猫的名字时，就显示这只猫猫的名字，年龄，颜色，如果
//用户输入错误，则显示张老太没有这只猫猫
//*/
//
//
////分析
////1.猫猫由三个成员(变量)组成
////2.使用结构体解决
////3.
////创建结构体cat(是数据类型)
//
//#include<stdio.h>
//
//void main() {
//	struct Cat {//结构体名字为Cat,Cat就是我们自己构造的数据类型
//		char* name;//名字，使用指针，可以指向一个字符串
//		int age;//年龄
//		char* color;//颜色
//	};
//	//使用Cat结构体，创建变量
//	struct Cat cat1;//cat1就是Struct Cat的一个变量
//	struct Cat cat2;//cat2就是Struct Cat的一个变量
//	//给cat1的各个成员赋值
//	cat1.name = "小白";
//	cat1.age = 3;
//	cat1.color = "white";
//	//给cat2的各个成员赋值
//	cat2.name = "小花";
//	cat2.age = 100;
//	cat2.color = "multicolor";
//
//	//输出两只猫的信息
//	printf("\n第一只猫的名字:%s,年龄:%d,颜色:%s\n", cat1.name, cat1.age, cat1.color);
//	printf("\n第二只猫的名字:%s,年龄:%d,颜色:%s\n", cat2.name, cat2.age, cat2.color);
//}