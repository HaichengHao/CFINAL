////预处理
//#include<stdio.h>
//#if _WIN32 //如果是windows平台，就执行#include<Windows.h>
//#include<Windows.h>
//#elif _linux_//否则判断是不是linux平台，如果是，就执行#include<unistd.h>
//#include<unistd.h>
//#endif
//int main() {
//#if _WIN32		//判断是win32
//	Sleep(5000);//等待5000ms=5s,注意Sleep大写S
//#elif _linux_ //判断是Linux
//	sleep(5); //等待5s,sleep的s不用大写
//#endif
//	puts("hello,ham");//也表示输出
//	getchar();
//	return 0;
//}