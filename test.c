#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
//1.����Ļ���������ͼ����
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
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������

/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
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
//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//���飺
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
//	printf("����Ϊ:\n");
//	for (i = 0; i<ROW; i++){
//		for (j = 0; j < COL; j++){
//			printf("%-3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("������:");
//	scanf("%d", &num);
//	if (Func2(a,num)){
//		printf("�ڸ�������!\n");
//	}
//	else{
//		printf("���ڸ�������!\n");
//	}
//	system("pause");
//	return 0;
//}
////1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <windows.h>
//void left_move(char* str, int k,int len) {
//	for (int i = 0; i < k; i++) {
//		char tmp = str[0];         //�ȱ����һ���ַ�
//		for (int j = 0; j < len - 1; j++) {
//			str[j] = str[j + 1];           //����һ���ַ���������е��ַ���������һλ
//		}
//		str[len - 1] = tmp;              //������ĵ�һ���ַ��������һλ
//	}
//}
//int main() {
//	char arr[] = "ABCD";
//	int k = 0;
//	int len = strlen(arr);
//	printf("��תǰ%s\n", arr);
//	printf("��������תλ��:");
//	scanf("%d", &k);
//	if (k>0 && k <= len) {
//		left_move(arr, k,len);
//		printf("��ת��%s", arr);
//	}
//	else{
//		printf("������������\n");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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
		printf("s1Ϊs2��ת����ַ���!\n");
	}
	else{
		printf("s1����s2��ת����ַ���!\n");
	}
	system("pause");
	return 0;
}
