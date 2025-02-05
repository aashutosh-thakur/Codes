#include<stdio.h>
#include<conio.h>

//Bubble Sort
void bubble_sort(int array[],int size)
{
	int i,j,k,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("Sorted array!\n");
	for(k=0;k<size;k++)
	{
		printf("%d\t",array[k]);	
	}	
}

//Insertion Sort
void insertion_sort(int array[],int size)
{
	int i,j,k,temp;
	for(i=1;i<size;i++)
	{
		temp=array[i];
		j=i-1;
		while(j>=0&&array[j]>temp)
		{
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=temp;
	}
	printf("Sorted array!\n");
	for(k=0;k<size;k++)
	{
		printf("%d\t",array[k]);	
	}	
}

//Selection Sort
void sort(int *array,int *array1)
{
	int temp;
	temp=*array;
	*array=*array1;
	*array1=temp;
}
void selection_sort(int array[],int size)
{
	int i,j,min_inx,k;
	for(i=0;i<size-1;i++)
	{
		min_inx=i;
		for(j=i+1;j<size;j++)
		{
			if(array[j]<array[min_inx])
			{
				min_inx=j;
			}
		}
		sort(&array[i],&array[min_inx]);
	}
	for(k=0;k<size;k++)
	{
		printf("%d\t",array[k]);	
	}
}

//Quick Sort

int main()
{
	int size;
	int choose;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int array[size];
	int i,high=size-1,low=0;
	for(i=0;i<size;i++)
	{
		printf("Enter the element at %d: ",i);
		scanf("%d",&array[i]);
	}
	printf("Choose \n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n4.Quick Sort\n>> ");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			bubble_sort(array,size);
			break;
		case 2:
			insertion_sort(array,size);
			break;
		case 3:
			selection_sort(array,size);
			break;
//		case 4:
//			quick_sort(array[],size,high,low);
//			break;
		default:
			printf("Invalid Number");
			break;
	}
}