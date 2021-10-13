
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
int a[100][100],b[100][100],c[100][100],i,j,k,l,get_operation,m;
printf("enter the nxn matrix=");
scanf("%d %d",&k,&l);

for(i=0;i<k;i++)
{
	for(j=0;j<l;j++)
	{
		display("enter the value a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<k;i++)
{
	for(j=0;j<l;j++)
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
						display("%7d",c[i][j]);
						if(j==l-1)
						{
							display("\n");
						}
				}
			}
			break;
		case 2:

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
						display("%4d",c[i][j]);
						if(j==l-1)
						{
							display("\n");
						}
				}
			}
			break;

		case 3:
			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
					{
						c[i][j]=0;
						for(m=0;(m<l || m<k);m++)
						{
						c[i][j]=c[i][j]+a[i][m]*b[m][j];
						}
					}
			}
			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
						display("%4d",c[i][j]);
						if(j==l-1)
						{
							display("\n");
						}
				}
			}
			break;


		case 4:
			//exit();
			
				//getch();
			return 0;
			}}}
