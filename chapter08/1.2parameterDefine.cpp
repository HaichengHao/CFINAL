////#include<stdio.h>
////#define MAX(a,b) a>b? a:b
//////MAX���Ǵ������ĺ� ��
//////(a,b)�����βΣ�
//////(a>b?)a:b�Ǵ������ĺ��Ӧ���ַ��������ַ����п���ʹ���β�
////int main() {
////	int x, y, max;
////	printf("������������:");
////	scanf("%d %d", &x, &y);
////
////	//˵��
////	//MAX(x,y);���ô������궨�壬
////	//�ں��滻ʱ��Ԥ������Ԥ������ִ�У���������ַ����ĺ��滻��ͬʱ��ʹ��ʵ�Σ�ȥ�滻�βΣ�
////	//x,y����ʵ�λ��滻��MAX(a,b)����β�a,b
////	max = MAX(x, y);
////	printf("\n�����нϴ������:%d", max);
////	getchar();
////	return 0;
////}
//
//
////==demo2==�ں궨���У��ַ����ڵ��β�ͨ��Ҫ��С�����������������
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////#define SQ(y) y*y//�����������ԭ���������˼��ͬ������a+1*a+1=a+a+1
////#define SQ(y) (y)*(y) //�����ڵ��ú궨�������滻ʱ��ʵ��a+1���ܱ���������a+1�����Ż��Ϊ��a+1)*(a+1)
////time_t start_t, end_t;
////double diff_t = 0;
////int main() {
////	int a, sq;
////	printf("������һ������:");
////	scanf("%d", &a);
////	time(&start_t);
////	sq = SQ(a + 1);
////	printf("\nsq = %d", sq);
////	time(&end_t);
////	diff_t = difftime(end_t, start_t);
////	printf("��ʱ:%.10f", diff_t);
////	system("pause");
////	return 0;
////	
////}
//
//#include<stdio.h>
//int sqr(int a) {
//	int res = 0;
//	res = a * a;
//	return res;
//}
//int main() {
//	int a;
//	printf("����һ����:");
//	scanf_s("%d", &a);
//	sqr(a);
//	printf("\n%d��ƽ��Ϊ:%d", a, sqr(a));
//
//}