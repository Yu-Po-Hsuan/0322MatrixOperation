#include<iostream>
#define m 3
using namespace std;
int main(){
	int a[m][m]={
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};
	int b[m][m]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int c[m][m];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			int sum=0;
			for(int k=0;k<m;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}

	int d[m][m];

	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			d[i][j]=a[i][j]+b[i][j];
		}
	}

	cout<<endl;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
		
			
}

