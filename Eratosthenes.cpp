#include <iostream>
using namespace std;
#define MaxSize 1000
int main()
{
	bool a[MaxSize];
	int i,k,j;
	for(i=2;i<MaxSize;i++)
	{
		a[i]=true;            //初始化
	}
	a[0]=a[1]=false;
	i=2;
	while(i<MaxSize)
	{
		if(a[i]==true)
		{
		  k=2;
		  while(i*k<MaxSize)
		  {
			  a[i*k]=false;
			  k++;
		  }
		}
		i++;
	}
	for(i=1;i<MaxSize;i++)
	{
		if(a[i])cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
