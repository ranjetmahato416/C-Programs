#include<stdio.h>
void main()
{
	int heap[10], no, i , J, c, root, temp;
	printf("Enter no. of elements in array: ");
	scanf("%d", &no);
	printf("\nEnter the elements:");
	for(i=0;i<no;i++)
	{
		scanf("%d", &heap[i]);
	}
	for(i=1;i<no;i++)
	{
		c=i;
		do
		{
			root = (c-1)/2;
			if(heap[root]<heap[c])
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c]= temp;
			}
			c=root;
		} while(c!=0);
	}
	printf("Heap array:");
	for(i=0;i<no;i++)
	{
		printf("%d\t", heap[i]);
	}
	for(J=no-1;J>0;J--)
	{
		temp= heap[0];
		heap[0] = heap[J];
		heap[J] = temp;
		root=0;
		do{
			c=2*root+1;
			if((heap[c]<heap[c+1]) && c<J-1)
			{c++;
			}
			if(heap[root]<heap[c] && c<J)
			{
				temp=heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while(c<J);
	}
	printf("\n The sorted array is: ");
	for(i=0;i<no;i++){
		printf("\t %d", heap[i]);
	}
}
