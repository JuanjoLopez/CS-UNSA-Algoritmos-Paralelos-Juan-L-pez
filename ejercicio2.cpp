#include <iostream>
#include <math.h>
#include <algorithm>
#define n 1000
#define BlockSize  100


using namespace std;
int main()
{
    int a[n][n],b[n][n],c[n][n];
    for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			a[i][j]=i*j+3;
			b[i][j]=i*j+2;
			c[i][j]=0;
		}
	}
    for( int i1=0;i1<(n/BlockSize);++i1)
    {
        for(int j1=0;j1<(n/BlockSize);++j1)
        {
            for(int k1=0;k1<(n/BlockSize);++k1)
            {
                for(int i=i1=0;i<min(i1+BlockSize-1);++i)
                {
                    for(int j=j1=0;j<min(j1+BlockSize-1);++j)
                    {
                        for(int k=k1;k<min(k1+BlockSize-1);++k)
                        {               
                            c[i][j] = c[i][j] + a[i][k] * b[k][j]
                        }
                    }
                }
		
            }
        }
   }
}
