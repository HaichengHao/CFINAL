///*
//
//��дһ��dog�ṹ�壬����name(char[10])��age(int)��weight(double)����
//��дһ��say�����������ַ�����������Ϣ�а������г�Աֵ
//��main�����У�����Dog�ṹ�����������say�����������ý����ӡ���
//
//
//*/
//
//
//
//
////#include<stdio.h>
////void main() {
////	struct Dog {
////		char* name;
////		int age;
////		float weight;
////	}dog1={"wangwang",10,12.4},dog2={"wowo",8,8.2};
////	printf("����:%s,����:%d,����:%.2f\n", dog1.name, dog1.age, dog1.weight);
////	printf("����:%s,����:%d,����:%.2f", dog2.name, dog2.age, dog2.weight);
////}
//
//
//#include<stdio.h>
////����Dog�ṹ��
//struct Dog {
//	char* name;
//	int age;
//	double weight;
//};
////say����
//char* say(struct Dog dog) {
//	//�������Ϣ����һ���ַ������ַ����飩
//	static char info[50];//�ֲ�������Ҫ��static����
//	sprintf(info,"name =%s age = %d weight = %.2f",dog.name,dog.age,dog.weight);
//	return info;//�ַ��������Ʊ���ʹ����ŵ�ַ
//}
//void main() {
//	//����
//	struct Dog dog;
//	char* info = NULL;
//	dog.name = "С��";
//	dog.age = 1;
//	dog.weight = 3.4;
//	info = say(dog);//�ṹ�����Ĭ����ֵ����
//	printf("\nС������ϢΪ:%s", info);
//}