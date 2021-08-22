#include<stdio.h>
void quicksort(int a[],int beg,int end);
int partition(int a[],int beg,int end);
void main()
{
	int a[5]={1,6,4,3,8};
	int beg,end,i;
	beg=0;
	end=4;
	quicksort(a,beg,end);
	printf("\n the elements after sorting are:");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
int partition(int a[],int beg,int end)
{
	int pivot=a[beg];
	int temp,i,j;
	i=beg;
	j=end;
	if(i<j)
	{
		while(a[i]<=pivot&&i<end)
		{
			i++;
		}
		while(a[j]>pivot&&j>beg)
		{
			j--;
			
	    }
	    if(i<j)
	    {
	    	temp=a[i];
	    	a[i]=a[j];
	    	a[j]=temp;
		}
		
	}
	temp=a[pivot];
	a[pivot]=a[j];
	a[j]=temp;
	return j;
}
void quicksort(int a[],int beg,int end)
{
    int i;
	if(beg<end)
	{
	i=partition(a,beg,end);
	quicksort(a,beg,i-1);
	quicksort(a,i+1,end);
    }
}
