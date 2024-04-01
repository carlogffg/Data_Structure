#include <stdio.h>
long fid(int n)
{
	if(n>2) return(fid(n-1)+fid(n-2));
	else return(2);
}
int main()
{
	printf("%d\n",fid(3));
}
