#include <iostream>

using namespace std;

int main ()
{
	int b;	
	cout<<"Insertar tam"<<endl;
	cin>>b;	
	int array[b][b];
	int array2[b][b];
	int result[b][b];
	for(int i=0;i<b;i++)
	{
		for (int j=0;j<b;j++)
		{
			array[i][j]=i*j+3;
			array2[i][j]=i*j+2;
			result[i][j]=0;
		}
	}
	for(int i=0;i<b;i++)
	{
		for (int j=0;j<b;j++)
		{
			for(int z=0;z<b;z++)
			{
				result[i][j]+=array[i][z]*array2[z][j];
				
			}
			cout<<result[i][j]<<"-";	
		}
		cout<<endl;
	}	
	
}
