#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//��Ŀ������
	int a = 0;
	int b = 0;
	int max = 0;
	printf("������������:> ");
	scanf("%d%d", &a, &b);
	max = (a > b ? a : b);
	printf("max = %d", max);
	return 0;
}

//+, -, *, /, %
//int main() {
//	int a = 5;
//	int b = 2;
//	int c = a + b;
//	printf("%d\n", c);
//	int d = a - b;
//	printf("%d\n", d);
//	int e = a * b;
//	printf("%d\n", e);
//	int f = a / b;
//	printf("%d\n", f);
//	int g = a % b;
//	printf("%d\n", g);
//	return 0;
//}

//int main() {   //ֻ����������
//	//���Ʋ����� - >>
//	//�ƶ����Ƕ�����λ
//	//������λ�ķ���
//	//1.��������(Ŀǰ�����ʹ�õ�������)
//	//	�ұ߶���, ��߲�ԭ����λ
//	//2.�߼�����
//	//	�ұ߶���, ��߲�0
//	
//	//���Ʋ����� - <<
//	//ͬ�����ƶ�������λ, ��߶���������λ����, �ұ߲�0
//	int a = -8;
//	int b = a >> 1; 
//	int c = a << 1;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	//λ������(ֻ����������)
//	int a = 10;
//	int b = 9;
//	//& - ��λ��(������λ)
//	//��ͬΪ����Ϊ��, һ��Ϊ�ټ�Ϊ��
//	int c = a & b;
//	printf("%d\n", c);
//	//| - ��λ��(������λ)
//	//һ��Ϊ�漴Ϊ��, ��ͬΪ�ٲ�Ϊ��
//	int d = a | b;
//	printf("%d\n", d);
//	//^ - ��λ���(������λ)
//	//��Ӧ������λ��ͬΪ0, ����Ϊ1
//	int e = a ^ b;
//	printf("%d\n", e);
//	return 0;
//}

//int main() {
//	//�ڲ�������ʱ����������£���������������ֵ
//	int a = 5;
//	int b = 3;
//	printf("before: a = %d b = %d\n", a, b);
//	////�Ӽ���(�ռ�����, ���ܻ����)
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after : a = %d b = %d\n", a, b);
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after : a = %d b = %d\n", a, b);
//	return 0;
//}

//int main() {
//	//��һ�������洢���ڴ��еĶ������е� 1 �ĸ���
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("num = %d\n", count);
//	return 0;
//}

//int main() {
//	//���ϸ�ֵ������
//	int a = 0;
//	//a =	a + 1;
//	a += 1;
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	//��Ŀ������ - ֻ��һ��������
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	*p = 20;//�����ò�����
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof()�ڲ����ʽ����������
//	printf("%d\n", s);
//
//	//int a = 0;
//	//char b = 'w';
//	//int arr[10] = { 0 };
//
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof(int));//4
//
//	//printf("%d\n", sizeof(b));//1
//	//printf("%d\n", sizeof(char));//1
//
//	//printf("%d\n", sizeof(arr));//10 * 4 = 40
//	//printf("%d\n", sizeof(int [10]));//40
//	return 0;
//}

//int main() {
//	//��λȡ��(������λ) - �� ~ ��
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//	return 0;
//}

//int main() {
//	//ǿ������ת�� - (����)
//	//ǿ�ư�3.14��ֵ������
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//����һ���ṹ������ - struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main() {
//	int a = 0;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1, ����ʼ��
//	struct Stu s1 =	{"���԰",21,"2003010026"};
//	struct Stu* ps = &s1;
//	// -> ��ʹ�÷���, �ṹ��ָ�� -> ��Ա��
//	printf("name = %s\n", ps -> name);
//	printf("age  = %d\n", ps -> age);
//	printf("id   = %s\n", ps -> id);
//	// -> ������� . ��ȫ�ȼ�
//	/*printf("name = %s\n", (*ps).name);
//	printf("age  = %d\n", (*ps).age);
//	printf("id   = %s\n", (*ps).id);*/
//	//�� ��ʹ�÷���
//	/*printf("name = %s\n", s1.name);
//	printf("age  = %d\n", s1.age);
//	printf("id   = %s\n", s1.id);*/
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int main() {
//	//��������
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	int d = a + b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}