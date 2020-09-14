/*列出前6个素数，它们分别是2、3、5、7、11和13。我们可以看出，第6个素数是13。
第10,001个素数是多少？*/
#include<stdio.h>
#include<stdlib.h>
void fun1(int num);			//
bool fun2(int number); 	 	//
int num=10001;
int main(void)
{
	
/*printf("请输入一个数字：\n");
	scanf("%d",&num);*/
	fun1(num);
	return 0;
}
void  fun1(int num)
{
	int flag1=1;
	int flag2;
	for(int i=3;;i++)
	{
		fun2(i);
		int a =fun2(i);
		if(a!=1)
		{
			flag1+=1;
			flag2=i;
		}
		if(flag1==num)
		{
		printf("第%d个素数是%d",num,flag2);
		system("pause");
		}
	}
}
bool fun2(int number)
{
	for(int j=2;j<number;j++)
	{
		if((number%j)==0)
		{
			return true;
		}	
	}
	return false;
}