/*Note:
 * <打印程序对象的字节表示>
 * 使用强制类型转换规避类型系统, 来访问和打印不同程序对象的字节表示.
 *1. 将数据类型byte_pointer定义为一个指向类型为"unsigned char"的对象的指针。
 *这样一个字节指针引用一个字节序列，其中每个字节都被认为是一个非负整数。
 *2. "%.2x" 表明整数必须用至少两个数字的十六进制格式输出
 *3. start[i]
 * C语言中能够用数组表示法来引用指针，同时也能用指针表示法来引用数组元素。
 * 引用start[i]表示读取以start指向的位置为起始的第i个位置处的字节。
 *4. sizeof(T), 使用sizeof而不是一个固定的值，在不同机器类型上具有可移植性
 **/
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
   size_t i;
   for (i = 0; i < len; i++)
   	   printf(" %.2x", start[i]);
   printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer)&x, sizeof(void *));
}

void test_show_bytes(int val) {
	int ival = val;
	float fval = (float)ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

