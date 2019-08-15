#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//void Func1(int n){
//	int i, j;
//	for (i = 1; i <= n; ++i){
//		for (j = 1; j <= 2 * i - 1; ++j){
//			putchar('*');
//		}
//		putchar('\n');
//		putchar('\n');
//	}
//	for (i = n ; i > 0 ; --i){
//		for (j = 1; j <= 2 * i - 1; ++j){
//			putchar('*');
//		}
//		putchar('\n');
//		putchar('\n');
//	}
//}
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/
//void Func2(){
//	int i;
//	int a, b, c;
//	int sum;
//	for (i = 100; i <= 999; i++){
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100;
//		sum = pow(a, 3) + pow(b, 3) + pow(c, 3);
//		if (sum == i){
//			printf("%d\n", sum);
//		}
//	}
//}
//void Func3(int n)
//{
//	int i, j;
//	int sum = 0;
//	int m = 1;
//	int flag = 10;
//	for (i = 0; i < n; i++)
//	{
//		if (flag == i)
//		{
//			m++;
//			flag *= 10;
//		}
//		for (j = i; j; j /= 10)
//		{
//			sum += pow(j % 10, m);
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//		sum = 0;
//	}
//}
//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int Func4(int m, int n)
//{
//	int i;
//	int tmp = 0, sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + m;
//		sum += tmp;
//	}
//	return sum;
//}
//int main(){
//	Func1(7);
//	Func2(10000);
//	Func3(10000);
//	int ret = Func4(1, 5);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
//1.调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//int Func1(int arr[],int len){
//	int i;
//	for (i = 0; i < len; ++i){
//		if (arr[i] % 2 != 0){
//			continue;
//		}
//		else{
//			arr[i] ^= arr[len];
//			arr[len] ^= arr[i];
//			arr[i] ^=arr[len];
//			--len;
//			--i;
//		}
//	}
//}
//int main(){
//	int arr[] = { 2, 1, 5, 4, 6, 8, 9, 13, 14, 16 };
//	int len = sizeof(arr) / sizeof(arr[0])-1;
//	int ret = Func1(arr,len);
//	int i;
//	for (i = 0; i <= len; ++i){
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//#define ROW 3
//#define COL 3
//int Func2(int arr[ROW][COL], int val){
//	int i = 0;
//	int j = COL - 1;
//	int tmp = arr[i][j];
//	while (1){
//		if (tmp == val){
//			return 1;
//		}
//		else if (tmp < val && j >= 0){
//			tmp = arr[++i][j];
//		}
//		else if (tmp > val &&j >= 0){
//			tmp = arr[i][--j];
//		}
//		else{
//			return 0;
//		}
//	}
//}
//int main(){
//	int a[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int j = 0;
//	int num;
//	printf("数组为:\n");
//	for (i = 0; i<ROW; i++){
//		for (j = 0; j < COL; j++){
//			printf("%-3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("请输入:");
//	scanf("%d", &num);
//	if (Func2(a,num)){
//		printf("在该数组中!\n");
//	}
//	else{
//		printf("不在该数组中!\n");
//	}
//	system("pause");
//	return 0;
//}
////1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <windows.h>
//void left_move(char* str, int k,int len) {
//	for (int i = 0; i < k; i++) {
//		char tmp = str[0];         //先保存第一个字符
//		for (int j = 0; j < len - 1; j++) {
//			str[j] = str[j + 1];           //将第一个字符后面的所有的字符依次左移一位
//		}
//		str[len - 1] = tmp;              //将保存的第一个字符移至最后一位
//	}
//}
//int main() {
//	char arr[] = "ABCD";
//	int k = 0;
//	int len = strlen(arr);
//	printf("旋转前%s\n", arr);
//	printf("请输入旋转位数:");
//	scanf("%d", &k);
//	if (k>0 && k <= len) {
//		left_move(arr, k,len);
//		printf("旋转后%s", arr);
//	}
//	else{
//		printf("您的输入有误\n");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
int compare(char str1[], char str2[]){
	int i = 0;
	int j = 0;
	int length = strlen(str1);
	for (j = 1; j <= length; j++){
		int tmp = str1[0];
		for (i = 0; i < length - 1; i++){
			str1[i] = str1[i + 1];
		}
		str1[length - 1] = tmp;
		if (0 == strcmp(str1, str2)){
			return 1;
		}
	}
	return 0;
}
int main(){
	char s1[10] = "ABCDEFGH";
	char s2[10] = "EFGHABCD";
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	if (1 == compare(s1, s2)){
		printf("s1为s2旋转后的字符串!\n");
	}
	else{
		printf("s1不是s2旋转后的字符串!\n");
	}
	system("pause");
	return 0;
}
