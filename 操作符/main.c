#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//三目操作符
	int a = 0;
	int b = 0;
	int max = 0;
	printf("请输入两个数:> ");
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

//int main() {   //只能用于整数
//	//右移操作符 - >>
//	//移动的是二进制位
//	//两种移位的方法
//	//1.算术右移(目前大多数使用的是这种)
//	//	右边丢弃, 左边补原符号位
//	//2.逻辑右移
//	//	右边丢弃, 左边补0
//	
//	//左移操作符 - <<
//	//同样是移动二进制位, 左边丢弃，符号位跟随, 右边补0
//	int a = -8;
//	int b = a >> 1; 
//	int c = a << 1;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	//位操作符(只能用于整数)
//	int a = 10;
//	int b = 9;
//	//& - 按位与(二进制位)
//	//相同为真则为真, 一个为假即为假
//	int c = a & b;
//	printf("%d\n", c);
//	//| - 按位或(二进制位)
//	//一个为真即为真, 相同为假才为假
//	int d = a | b;
//	printf("%d\n", d);
//	//^ - 按位异或(二进制位)
//	//对应二进制位相同为0, 相异为1
//	int e = a ^ b;
//	printf("%d\n", e);
//	return 0;
//}

//int main() {
//	//在不创建临时变量的情况下，交换两个变量的值
//	int a = 5;
//	int b = 3;
//	printf("before: a = %d b = %d\n", a, b);
//	////加减法(空间有限, 可能会溢出)
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after : a = %d b = %d\n", a, b);
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after : a = %d b = %d\n", a, b);
//	return 0;
//}

//int main() {
//	//求一个整数存储在内存中的二进制中的 1 的个数
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
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
//	//复合赋值操作符
//	int a = 0;
//	//a =	a + 1;
//	a += 1;
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	//单目操作符 - 只有一个操作数
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof()内部表达式不参与运算
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
//	//按位取反(二进制位) - “ ~ ”
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//	return 0;
//}

//int main() {
//	//强制类型转换 - (类型)
//	//强制把3.14赋值给整形
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//创建一个结构体类型 - struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main() {
//	int a = 0;
//	//使用struct Stu这个类型创建了一个学生对象s1, 并初始化
//	struct Stu s1 =	{"马慧园",21,"2003010026"};
//	struct Stu* ps = &s1;
//	// -> 的使用方法, 结构体指针 -> 成员名
//	printf("name = %s\n", ps -> name);
//	printf("age  = %d\n", ps -> age);
//	printf("id   = %s\n", ps -> id);
//	// -> 和下面的 . 完全等价
//	/*printf("name = %s\n", (*ps).name);
//	printf("age  = %d\n", (*ps).age);
//	printf("id   = %s\n", (*ps).id);*/
//	//· 的使用方法
//	/*printf("name = %s\n", s1.name);
//	printf("age  = %d\n", s1.age);
//	printf("id   = %s\n", s1.id);*/
//	//结构体变量.成员名
//	return 0;
//}

//int main() {
//	//整形提升
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