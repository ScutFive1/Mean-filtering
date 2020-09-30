#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "iostream"
using namespace std;
int main()
{
	int a[9][9],b[9][9];
	int i,j;
	srand((int)time(NULL));
	
	for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
				{
					a[i][j]=rand()%99;
					b[i][j]=a[i][j];
				}
		}
	for(i=1;i<8;i++)
		{
			for(j=1;j<8;j++)
				{
					b[i][j]=(a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+
							a[i][j-1]+a[i][j]+a[i][j+1]+
							a[i+1][j-1]+a[i+1][j]+a[i][j+1])/9;
				}
		}
	for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
				{
					printf("%d",a[i][j]);
					cout<<" ";
					if(a[i][j]<10)
					{cout<<" ";}
				}
			cout<<endl;
		}
	cout<<endl;
	for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
				{
					printf("%d",b[i][j]);
					cout<<" ";
					if(b[i][j]<10)
					{cout<<" ";}
				}
			cout<<endl;
		}
}