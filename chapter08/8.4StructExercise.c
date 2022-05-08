///*
//一个景区根据游客的年龄收取不同价格的门票
//请编写一个结构体Visitor,根据年龄段决定能够买的门票价格并输出
//规则:年龄>18,门票价格20元，其它情况免费
//可以循环从控制台输入名字和年龄，打印门票收费情况，如果输入名字n，则程序退出
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
////编写函数处理业务
////说明：因为结构体是值传递，会拷贝一份完整的数据，效率较低
////因此，为了提高效率，我们直接接收一个地址（指针）
//void ticket(struct Visitor* visitor) {//结构体指针类型，指向一个结构体成员变量
////判断
//	if ((*visitor).age > 18) {//visitor是一个指针，它指向结构体变量visitor的数据，然后通过.age取到了它指向的结构体visitor的值
//		(*visitor).pay = 20;
//	}
//	else {
//		(*visitor).pay = 0;
//	}
//}
//void main() {
//	struct Visitor  visitor;//创建结构体变量
//	while (1) {//循环的输入名字和年龄
//		printf("请输入游客的名字:\n");
//		scanf_s("%s", visitor.name);
//		if (!strcmp("n", visitor.name)) {
//			break;
//		}
//		printf("请输入游客的年龄:\n");
//		scanf_s("%d", &visitor.age);
//		ticket(&visitor);//调用函数获取应付的票价
//		printf("该游客应付票价=%.2f", visitor.pay);
//	}
//	getchar();
//	getchar();
//}