////二分查找
//
//#include<stdio.h>
//
//	//对一个有序数组进行二分查找{1,8,10,89,1000,1234}
//	//输入一个数看看该数组是否存在该数，并求出下标
//	//如果没有就是提示“没有这个数”。二分查找的前提是，该数组是一个有序数组
//
//	//思路分析
//	//1.先找到数组中间这个数midVal,和findVal比较
//	//2.如果midValue>findValue,说明应该在midValue的左边查找，
//	//3.如果midValue<findValue，说明应该在midValue的右边查找，
//	//4.如果midValue==findValue,说明找到
//	//5.需要考虑没有找到的情况
//	int binasc(int arr[], int leftid, int rightid, int findval){
//		//1.先找到中间的数的下标
//		int midid = (leftid + rightid) / 2;
//		int midval = arr[midid];
//
//		//0.如果leftid>rightid,说明这个数组都比较过了，但是没找到
//		if (leftid > rightid) {
//			return -1;
//		}
//
//		//2.如果midValue > findValue, 说明应该在midValue的左边查找，
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
//		printf("找到index = %d", index);
//	}else{
//		printf("你输入的数不在查找范围内");
//	}
//}