///*һ����������7ֻ�������ǵ����طֱ���3kg��5kg,1kg,3.4kg,2kg,5kg,8kg��
//������7ֻ�����������Ƕ��٣�ƽ�������Ƕ��٣�*/
//#include<stdio.h>
//void main() {
//	//1��������
//	double hens[7];
//	//2.��ʼ�������ÿ��Ԫ��
//	//[]���������������±�
//	hens[0] = 3;
//	hens[1] = 5;
//	hens[2] = 1;
//	hens[3] = 3.4;
//	hens[4] = 2;
//	hens[5] = 5;
//	hens[6] = 8;
//
//	double totalWeight = 0.0;
//	double avgWeight = 0.0;
//	//3.��������
//	//��εõ������С
//	//sizeof(hens)�����ܵĴ�С
//	double arrlen = 0.0;
//	printf("sizeof(hens) = %d\n", sizeof(hens));
//	//48,��Ϊ���ǵ���������6��Ԫ�أ�һ��doubleռ8�ֽڣ�����6������6*8=48
//	//���Ҫ�õ�Ԫ�ظ���ֻ��Ҫ������ĳ��ȳ�ȥ���͵ĳ���
//	arrlen = sizeof(hens) / sizeof(double);
//	printf("Ԫ�ظ���:%f\n", arrlen);
//	int i = 0;
//	for (i = 0; i < arrlen; i++) {
//		totalWeight += hens[i];//�ۼ�ÿֻ��������
//	}avgWeight = totalWeight / arrlen;
//	printf("������:%f\n", totalWeight);
//	printf("ƽ������:%f", avgWeight);
//}