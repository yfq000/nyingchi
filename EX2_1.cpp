/*
 * ���Ա���:C++11
 */

#include<iostream>

int main()
{
	//int arr[10]; //����һ������
        int arr[] = {1,2,3,4,5,6,7,8,9,10} ; //�������飬����ʼ��
        
	//����Ҳ�У��ȼ���int arr[] = {1,2,3,4,5,6,7,8,9,10,0,0}
        //int arr[12] = {1,2,3,4,5,6,7,8,9,10} ; 
       
       	
	/*
	 * ��������Ԫ�صļ��ַ���
	 * �±ꡢ���á�ָ�롢����
	 */
	//�±�
	for (int i = 0; i < 10 ; ++i)
		arr[i] = i;
		
	//����
	for (auto &x : arr)
		x = 1;

	//ָ�����
	for (int *pb = arr, *pe = &arr[10]; pb != pe; ++pb)
		*pb = 2;

	//����
	for (int *pbeg = std::begin(arr), *pend = std::end(arr); pbeg != pend; ++pbeg)
		*pbeg = 3;
	
        //����﷨��ʵ�ںܶ������ﶼ���ڣ�˭֪��C++��Ϯ���ĸ�����
        for(auto x : arr)
        	std::cout << x << std::endl; 
	
        return 0;
}
