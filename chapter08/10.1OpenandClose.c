////写文件
////#include<stdio.h>
////void main() {
////	//创建一个文件指针
////	FILE* fp = NULL;
////
////	//打开该文件
////	fp = fopen("D:/test.txt", "w+");
////	//将内容写入到文件中
////	fprintf(fp, "hello world");
////	fputs("hello jacky", fp);
////	//关闭文件
////	fclose(fp);
////}
//
//////读文件
//#include<stdio.h>
//void main() {
//	FILE* fp = NULL;
//	//定义一个缓冲区
//	char buff[2048];
//	//打开文件
//	fp = fopen("D:/桌面/test02.txt", "r");
//	//读取文件
//	//方法1
//	//fscanf(fp, "%s", buff);
//	////输出
//	//printf("%s\n", buff);
//	//方法2
//	fgets(buff,2048, fp);
//	printf("%s", buff);
//}
