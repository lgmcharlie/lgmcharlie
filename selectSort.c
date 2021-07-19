void selectSort(int* a,int len)
{
    int n=len;
   for(int i=0;i<n;i++)
	{
             int max=i;
		for(int j=i+1;j<n;j++)
			{
   			   if(a[j]<a[max])
				max=j;
			}
			int temp=a[max];
			a[max]=a[i];
			a[i]=temp;
	}
}
