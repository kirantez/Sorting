#include<stdio.h>
#include<string.h>

int ascending_order(int *array,int limit);
int dscending_order(int *array,int limit);
int print_array(int *array,int limit);

int main()
{
   int i=0,count=0,choice=0,limit=0;

   printf("Enter the limit\n");
   scanf("%d",&limit);
   
   int array[limit];
   bzero(array,sizeof(array));
   printf("Enter the values\n");

   for (i=0;i<limit;i++)
   {
       scanf("%d",&array[i]);
   }

   printf("1-Ascending order\n2-Descending order\n");
   scanf("%d",&choice);

   if (choice == 1)
   {
    ascending_order(array,limit);
    print_array(array,limit);
   }
   else if (choice ==2)
   {
    dscending_order(array,limit);
    print_array(array,limit);
    }
   return 0;
}

int ascending_order(int *array,int limit)
{
    int a=0,b=0,temp=0;
    for (a=0;a<limit;a++)
    {
	for (b=a;b<limit;b++)
	{
	    if (array[a] > array[b])
	    {
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	    }
	}
    }
    return 1;
}

int dscending_order(int *array,int limit)
{
    int a=0,b=0,temp=0;
    for (a=0;a<limit;a++)
    {
	for (b=a;b<limit;b++)
	{
	    if (array[a] < array[b])
	    {
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	    }
	}
    }
    return 1;
}
int print_array(int *array,int limit)
{
    int x=0;
    for (x=0; x<limit; x++)
   {
       printf("%d ",array[x]);
   }


}
