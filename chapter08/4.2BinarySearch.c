////���ֲ���
//
//#include<stdio.h>
//
//	//��һ������������ж��ֲ���{1,8,10,89,1000,1234}
//	//����һ���������������Ƿ���ڸ�����������±�
//	//���û�о�����ʾ��û��������������ֲ��ҵ�ǰ���ǣ���������һ����������
//
//	//˼·����
//	//1.���ҵ������м������midVal,��findVal�Ƚ�
//	//2.���midValue>findValue,˵��Ӧ����midValue����߲��ң�
//	//3.���midValue<findValue��˵��Ӧ����midValue���ұ߲��ң�
//	//4.���midValue==findValue,˵���ҵ�
//	//5.��Ҫ����û���ҵ������
//	int binasc(int arr[], int leftid, int rightid, int findval){
//		//1.���ҵ��м�������±�
//		int midid = (leftid + rightid) / 2;
//		int midval = arr[midid];
//
//		//0.���leftid>rightid,˵��������鶼�ȽϹ��ˣ�����û�ҵ�
//		if (leftid > rightid) {
//			return -1;
//		}
//
//		//2.���midValue > findValue, ˵��Ӧ����midValue����߲��ң�
//		if (midval > findval) {
//			binasc(arr, leftid, midid - 1, findval);
//		}
//		else if (midval < findval) {
//			binasc(arr, midid + 1, rightid, findval);
//		}
//		else {
//			return midid;
//		}
//	}
//
//void main() {
//	int arr1[] = { 1,8,10,89,1000,1234 };
//	int arrlen = sizeof(arr1) / sizeof(int);
//	int index = binasc(arr1, 0, arrlen - 1, 89);
//	if (index != -1) {
//		printf("�ҵ�index = %d", index);
//	}else{
//		printf("������������ڲ��ҷ�Χ��");
//	}
//}