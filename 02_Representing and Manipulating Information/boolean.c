/*说明：
 * 用^和指针，交换两个变量的值
 *注: 与方法“第三个位置临时存放另一个值”相比，这种交换方式并没有性能上的优势，
 *仅仅是智力游戏
 *note: 练习题2.10
 **/
 void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
 }

 void reverse_array(int a[], int cnt) {
	int first, last;
	for(first = 0, last = cnt-1;
		first < last;/*first <= last; 此方法奇数长度数组最中间一个元素的值会被清0*/
		first++, last--)
		inplace_swap(&a[first], &a[last]);
 } 
