/*回文数就是从前往后和从后往前读都一样的数。由两个2位数相乘得到的最大回文乘积是 
9009 = 91 × 99。找出由两个3位数相乘得到的最大回文乘积。*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,result,data=0;
	int sum=0,x;
	for(i=999;i>99;i--)
	{
		for(j=i;j>99;j--)
		{
			result=i*j;//得到一个数据
			 x=result;
			/*判断是否为回文数*/
			while(x)  
			{  
				int num = x %10;  
				sum = sum*10 + num;  
				x/=10;  
			} 
			if(sum == result && result>data)
			{
				data=result;
			}
			else sum=0;
		}
	}
	printf("最大回文数是：%d",data);
	system("pause");
	return 0;
}

