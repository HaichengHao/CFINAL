//#include<stdio.h>
//union data {//创建共用体类型data,包含三个成员,三个成员共用数据空间，该空间的大小以占用最大的成员变量为准
//	int n;//占4个字节
//	char ch;//占1个字节
//	short m;//占2个字节
//};
//void main() {
//	union data a;//定义了一个共用体变量a
//	printf("%d,%d\n", sizeof(a), sizeof(union data));
//	/*a.n = 0x40;
//	printf("%d,%c,%d\n", a.n, a.ch, a.m);
//	a.ch = '9';
//	printf("%d,%c,%d\n", a.n, a.ch, a.m);
//	a.m = 0x2059;
//	printf("%d,%c,%d\n", a.n, a.ch, a.m);
//	a.n = 0x3E25AD54;
//	printf("%d,%c,%d\n", a.n, a.ch, a.m);*/
//	getchar();
//}