#include<iostream>
using namespace std;
int main()
{
	int a[5][5],b[5][5],c[5][5],sum,r1,c1,r2,c2,i,j,k,choice;
	cout<<"Enter rows and columns of first matrix:";
	cin>>r1>>c1;
	cout<<"Enter rows and columns of second matrix:";
	cin>>r2>>c2;
	cout<<"\nEnter first matrix:\n";
	for(i=0;i<r1;++i)
		{
            for(j=0;j<c1;++j)
			{
                cin>>a[i][j];
            }
        }
		cout<<"\nEnter second matrix:\n";
	for(i=0;i<r2;++i)
		{
            for(j=0;j<c2;++j)
			{
                cin>>b[i][j];
            }
        }
    do
    {
        cout << "Matrix operations\n1: Addition\n2: Subtract\n3: Multiply\n4: Transpose\n5: Exit\nEnter your choice :";
        cin>>choice;
        switch (choice)
		{
		case 1:
			for(i=0;i<r1;++i)
            {
                for(j=0;j<c1;++j)
                {
                    c[i][j]=a[i][j]+b[i][j];
                }
            }
                cout<<"Addition of the two matrices is:\n";
            for(i=0; i<r1; ++i)
            {
                for(j=0; j<c1; ++j)
                {
                    cout<<c[i][j]<<" ";
                }
            cout<<"\n";
            }
			break;
		case 2:
			for(i=0; i<r1; i++)
        	{
	        	for(j=0; j<c1; j++)
	        	{
		        	c[i][j]=a[i][j]-b[i][j];
	        	}
        	}
	            cout<<"Subtraction of the two matrices is :\n";
	        for(i=0; i<r1; i++)
        	{
	        	for(j=0; j<c1; j++)
	        	{
	        		cout<<c[i][j]<<" ";
	        	}
		    cout<<"\n";
        	}
			break;
		case 3:
        	for(i=0; i<r1; i++)
        	{
	        	for(j=0; j<c1; j++)
	        	{
	        		sum=0;
	        		for(k=0; k<r1; k++)
			        {
			        	sum = sum + a[i][k] * b[k][j];
	        		}
	        		c[i][j] = sum;
	        	}
        	}
        	cout<<"\nMultiplication of two Matrices : \n";
	        for(i=0; i<r1; i++)
        	{
	        	for(j=0; j<c1; j++)
	        	{
	        		cout<<c[i][j]<<" ";
	        	}
	        	cout<<"\n";
        	}
			break;
		case 4:
            for(i=0; i<r1; i++)
	        {
		        for(j=0; j<c1; j++)
        		{
		        	c[i][j]=a[j][i];
	        	}
        	}
	        cout<<"Transpose of the Matrix is :\n";
        	for(i=0; i<r1; i++)
        	{
	        	for(j=0; j<c1; j++)
	        	{
		        	cout<<c[i][j]<<" ";
	        	}
        		cout<<"\n";
        	}
			break;
		case 5:
			break;
		default:
			cout << "Invalid input" << endl;
		}
	}while (choice <= 5);
}