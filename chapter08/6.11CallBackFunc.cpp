//#include<stdio.h>
//#include<stdlib.h>
////1.int(*f)(void)
////2.f���Ǻ���ָ�룬�����Խ��յĺ����Ƿ���һ��intû���βεĺ���
////3.����GetNextRandomValue��ʵ���̾���int(*f)(void)=GetNextRandomValue,������f�������ָ��ָ��GetNextRandomValue,�����Ϳ��Ե����������
////4.f���ﱻinitArry���ã��䵱�˻ص������Ľ�ɫ��Ҳ���Ǳ���ĺ������õĺ�����
//void initArry(int* array, int arraySize, int(*f)(void)) {
//	int i;
//	for (i = 0; i < arraySize; i++)
//		array[i] = (*f)();//����ͨ������ָ�������GetNextRandomValue
//	//������ʽ2 array[i] = f();
//}
//
////��ȡ���ֵ
//int GetNextRandomValue() {
//	return rand();//rand�����᷵�����������
//}
//
//int main() {
//	int myarray[10], i;//������һ�������һ��int����
//
//	//˵��
//	//1.������initArry����
//	//2.������һ�����������������ı��ʾ���һ����ַ������Ҫ�ú���ָ��������
//	initArry(myarray, 10, GetNextRandomValue);
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", myarray[i]);
//	}
//	printf("\n");
//	getchar();
//	return 0;
//}