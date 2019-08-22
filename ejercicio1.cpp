#include <iostream>
using namespace std;

void sumar(int A[3][3],int B[3][3], int C[3][3],int i,int j,int t)
{
     if(i<t)
     {
	  if(j<t)
	  {
		C[i][j]=A[i][j]+B[i][j];
		j++;
		sumar(A,B,C,i,j,t);
	  }
	  j=0;
	  i++;
	  sumar(A,B,C,i,j,t);
     }
}


void llenar(int C[3][3],int t)
{
	int i,j;
	cout <<"\nMatriz C: \n\n\t";
	for(i=0;i<t;i++)
	{
	       for(j=0;j<t;j++)
	       {
		  cout<<C[i][j]<<" ";
	       }
	       cout<<"\n";
	       cout<<"\t";
	}
}

int main()
{
	cout<<"\tEjercicio #1\n";
	int A[3][3];
	int B[3][3];
	int C[3][3];
	int i;
	int j;
	int t = 3;

	cout<<"\nIngrese valores de la Matriz A:\n";
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			cin>>A[i][j];
		}
	}
	printf("\nIngrese valores de la Matriz B:\n");
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			cin>>B[i][j];
		}
	}
	sumar(A,B,C,0,0,t);
	llenar(C,t);

}
