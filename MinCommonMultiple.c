/*2520是最小的能够被1到10整除的数。最小的能够被1到20整除的正数是多少？
时间：2020.08.28
分析：从21开始，从2开始整除。能整除num+1，（num用来记录被整除的个数），
不能整除num还原为1，并且跳出当前循环，开启下一轮整除。（暴力法）




i:被除数
j:除数
num：被整除数个数
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num=1;
	for(i=21;;i++)
	{
		for(j=2;j<21;j++)
		{
			if((i % j)==0)
				num=num+1;
			else 
				{
					num=1;
					break;
				}
			if(num==20)
			{
				printf("%d",i);
				system("pause");
			}
		}
	}
	return 0;
}
/*方法2：
分析：其实就是求1到20的最小公倍数，1到n的最小公倍数也是n*(n-1)的倍数，
通过不断的乘以n*(n-1)的倍数来判断，如果1到n都能被他整除，则直接返回。*/
#include<stdio.h>
int fun(int num )
{
	int m;
	int data;
	data=num*(num-1);
	for(int i=1;i<Integer.MAX_VALUE;i++)//这个是Integer类中的一个int类型的常量MAX_VALUE它代表int所能表示的最大值 0x7FFFFFFF
	{
		m=data*i;
		for(int j=2;j<=num;j++)
		{
			if(m%j !=0)
				break;
			if(j==num)
			return m
		}
			
}
int main()
{
	int num;
	printf("请输入数据\n");
	scanf("%d",&num);
	printf("最小倍数为：%d\n",fun(num));
	system("pause");
	return 0;
}