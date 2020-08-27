/*13195的所有质因数为5、7、13和29。
600851475143最大的质因数是多少？
求解最大质因数
*/
#include<stdio.h>
int MaxPrimeFoctor(int Num);
int main()
{
	while(1)
	{
	int result;
	int Num;
	printf("请输入一个数\n");
	scanf("%d",&Num);
	result = MaxPrimeFoctor(Num);
	printf("这个数的最大质因数是：%d",result);
	}
}
int MaxPrimeFoctor(int Num)
{
	while(Num==1)			
		return 1;
	for(int i=2;i<Num;i++)
		{
			if((Num % i) == 0)
				return MaxPrimeFoctor(Num / i);//递归
		}
	return Num;
}
