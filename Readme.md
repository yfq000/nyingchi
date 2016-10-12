
*这儿记录了一个酷爱programming的菜鸟，学习c++历程。望来此的诸位斧正指点！*
>友情提示，不要学习这个帖子的任何内容，这儿只有 <b>bad code</b>。 

### *Chapter One:*  Hello World   ###
第一步就是这段极端无聊程序了——大神级的“hello world"程序。  
```C++ 

    #include<iostream>
    
    int main()
    {
    	std::cout <<"悄悄我来了，正如她悄悄的走，  
                     挥一挥鼠标，留下一段代码" <<std::endl;
    	return 0;
    }

```    
这段代码无疑是本帖的最优秀的代码了，因为它出现在无数大神的书籍里。

### *Chapter Two：* 数组 ###
为什么先学数组？  
C++里的任何变量都必须先声明，才能使用，数组也是一种变量。可以在声明数组对数组进行初始化，值得注意的是，数组不可以直接赋值。

```C++

    int a1[] = {1,2,3}, a2[];
    int a3[] = a1; //错误，不允许一个数组初始化另一个数组
    a2 = {3,2,1};//错误，数组不能够直接赋值
    a2 = a1;//错误，一个数组不可赋值给另一数组

```

数组的声明、定义及其访问。下面的代码是正确的，^_^

```C++   
    
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

```

### *Chaper Three* 排序 ###
