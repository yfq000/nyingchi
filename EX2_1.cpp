/*
 * 语言本版:C++11
 */

#include<iostream>

int main()
{
	//int arr[10]; //声明一个数组
        int arr[] = {1,2,3,4,5,6,7,8,9,10} ; //声明数组，并初始化
        
	//这样也行，等价于int arr[] = {1,2,3,4,5,6,7,8,9,10,0,0}
        //int arr[12] = {1,2,3,4,5,6,7,8,9,10} ; 
       
       	
	/*
	 * 访问数组元素的几种方法
	 * 下标、引用、指针、迭代
	 */
	//下标
	for (int i = 0; i < 10 ; ++i)
		arr[i] = i;
		
	//引用
	for (auto &x : arr)
		x = 1;

	//指针迭代
	for (int *pb = arr, *pe = &arr[10]; pb != pe; ++pb)
		*pb = 2;

	//迭代
	for (int *pbeg = std::begin(arr), *pend = std::end(arr); pbeg != pend; ++pbeg)
		*pbeg = 3;
	
        //这个语法其实在很多语言里都存在，谁知道C++抄袭的哪个语言
        for(auto x : arr)
        	std::cout << x << std::endl; 
	
        return 0;
}
