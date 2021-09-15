#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int second, minute, houre;
	scanf("%d", &second);
	minute = second / 60;
	houre = minute / 60;
	second %= 60;
	minute %= 60;
	printf("%d:%d:%d", houre, minute, second);
}