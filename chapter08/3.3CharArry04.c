//#include<stdio.h>
//void main() {
//	char str1[] = { "i am happy" };//�ַ�����Ĭ���Զ���\0 ok
//	char str2[] = "i am happy";//ʡ��{}���ַ�����Ĭ�ϼ�\0 ok
//	char str3[] = { 'i','a','m','h','a','p','p','y' };//�ַ�����󲻻��Զ���\0,���ܻ�������
//	char str4[5] = { 'f','i','r','e','!'};//�ַ�����󲻻��Զ���\0�����ܻ�������
//	char str5[6] = { 'f','i','r','e','!' };//�ַ�����С�ڶ�������鳤�ȣ����ں���ʣ��Ŀռ��\0 ok
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
//iamhappy��������������������fire!���������������������������fire!
//fire!���������������������������fire!
//fire!
//hello
//*/