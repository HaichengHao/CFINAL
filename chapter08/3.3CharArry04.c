//#include<stdio.h>
//void main() {
//	char str1[] = { "i am happy" };//字符串后默认自动加\0 ok
//	char str2[] = "i am happy";//省略{}，字符串后默认加\0 ok
//	char str3[] = { 'i','a','m','h','a','p','p','y' };//字符数组后不会自动加\0,可能会有乱码
//	char str4[5] = { 'f','i','r','e','!'};//字符数组后不会自动加\0，可能会有乱码
//	char str5[6] = { 'f','i','r','e','!' };//字符个数小于定义的数组长度，会在后面剩余的空间放\0 ok
//	char* pstr = "hello";
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//	printf("%s\n", str5);
//	printf("%s\n", pstr);
//}
//
///*
//i am happy
//i am happy
//iamhappy烫烫烫烫烫烫烫烫烫烫fire!烫烫烫烫烫烫烫烫烫烫烫烫烫蘤ire!
//fire!烫烫烫烫烫烫烫烫烫烫烫烫烫蘤ire!
//fire!
//hello
//*/