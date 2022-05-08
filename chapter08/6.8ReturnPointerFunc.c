////返回指针的函数
//#include<stdio.h>
//#include<string.h>
//char* strlonger(char* str1, char* str2) {//函数返回的是指针
//	printf("\nstr1的原地址%p,str1的值%p", &str1, str1);
//	printf("\nstr1的长度%d str2的长度%d", strlen(str1), strlen(str2));
//	if (strlen(str1) > strlen(str2)) {
//		return str1;
//
//	}
//	else {
//		return str2;
//	}
//}
//int main() {
//	//char str3[30], str4[20], * str;
//	//printf("\n请输入第一个字符串");
//	//gets(str3);
//	//printf("\n请输入第二个字符串");
//	char* str;
//	 char str3[30] = { "helloa" };
//	printf("\nstr3的原地址:%p,str3的值%s" ,&str3,str3);
//	char str4[20] = { "hihi" };
//	printf("\nstr4的源地址:%p,str4的值%s", &str4,str4);
//	//gets(str4);
//	str = strlonger(str3, str4);//调用函数strlonger长度较大的字符串
//	printf("\nstr本身的地址%p,str的值%s",&str,str);
//	printf("\nlonger string:%s\n", str);
//	getchar();
//	return 0;
//}