//#include<stdio.h>
//void main() {
//	char a[10] = { 'a','b','tom' };
//	//char str[3] = { 't','o','m' };
//	/*str = tom烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫虜怑q ? ，
//	因为str的字符长度只有3，它遇不到\0的字符结束字符，所以
//	它只会遇到一个\0的结束字符才会输出\0之前的字符，所以会有乱码
//	*/
//	//改进办法
//	char str[4] = { 't','o','m' ,'\0'};//str = tom
//	char str2[] = { 'j','a','c','k' };//这个后面系统也不会自动添加'\0',可能会是乱码
//	printf("a=%s",a);
//	printf("\nstr = %s", str);
//	printf("\nstr2 = %s", str2);
//}