/*˵����
 * ��^��ָ�룬��������������ֵ
 *ע: �뷽����������λ����ʱ�����һ��ֵ����ȣ����ֽ�����ʽ��û�������ϵ����ƣ�
 *������������Ϸ
 *note: ��ϰ��2.10
 **/
 void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
 }

 void reverse_array(int a[], int cnt) {
	int first, last;
	for(first = 0, last = cnt-1;
		first < last;/*first <= last; �˷������������������м�һ��Ԫ�ص�ֵ�ᱻ��0*/
		first++, last--)
		inplace_swap(&a[first], &a[last]);
 } 
