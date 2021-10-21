
/*
----------------------------------   Program details  -------------------------------------------------

 Author Name        : A.Arunmani

 Last Modified Date : 13-oct-2021

 program purpose    : Matrix add, subtract and multiplication of 
                      two n x n matrix.i.e ./mul 2 2 "1 2 3 4""4 3 2 1" do 2 x 2 matrix multiplication.

----------------------------------      Comment EOD   ---------------------------------------------------

*/


#include<stdio.h>
#define display printf


int main()
{
int a[100][100],b[100][100],c[100][100],i,j,k,l,o,p,get_operation,m;
printf("enter the nxn matrix for a=");
scanf("%d %d",&k,&l);
printf("enter the nxn matrix for b=");
scanf("%d %d",&o,&p);

for(i=0;i<k;i++)
{
	for(j=0;j<l;j++)
	{
		display("enter the value a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
}

for(i=0;i<o;i++)
{
	for(j=0;j<p;j++)
	{
		display("enter the value b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
	}
}

while(1)
{
printf("1.addition\n2.subtraction\n3.multiplication\n4.exit\n");
scanf("%d",&get_operation);
	switch(get_operation)
	{
		case 1:
			if(k==o && l==p)
			{

			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
			}
			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
						display("%10d",c[i][j]);
						if(j==l-1)
						{
							display("\n");
						}
				}
			}
			}
			else
				{
					printf("matrix should have the same size\n\n");
				}
			break;
		case 2:
			if(k==o && l==p)
			{

			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
					{
						c[i][j]=a[i][j]-b[i][j];
					}
			}
			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
						display("%10d",c[i][j]);
						if(j==l-1)
						{
							display("\n");
						}
				}
			}
			}
				else
				{
					printf("matrix should have the same size\n\n");
				}
			
			
			break;

		case 3:
			if(l==o)
			{
			for(i=0;i<k;i++)
			{
				for(j=0;j<p;j++)
					{
						c[i][j]=0;
						for(m=0;(m<p || m<k);m++)
						{
						c[i][j]=c[i][j]+a[i][m]*b[m][j];
						}
					}
			}
			for(i=0;i<k;i++)
			{
				for(j=0;j<p;j++)
				{
						display("%10d",c[i][j]);
						if(j==p-1)
						{
							display("\n");
						}
				}
			}
			}
			else
			{
				printf("number of column %d in the first matrix is equal to number of 						   rows in the second matrix %d\n\n",l,o); 
			}	
			break;


		case 4:
			//exit();
			
				//getch();
			return 0;
			}}}
