void quickSort(int *h,int left,int right)
{
   
   if(left<right)
    {
         int i=left;
	 int j=right;
	 int temp=h[left];
	while(i<j)
	{
 	      while(i<j&&h[j]>=temp)
		{
		  j--;
		}
		 if(i<j)
		{
		  h[i++]=h[j];
		}
 		while(i<j&&h[i]<temp)
		{
		  i++;
		}
		if(i<j)
		{
		  h[j--]=h[i];
		}
	}
       h[i]=temp;
       quickSort(h,left,i-1);
	quickSort(h,i+1,right);
    }
}
