void mergeSort(int*a,int left,int mid,int right)
{
   int i=left;
   int j=mid+1;
   int index=0;
   int temp[right-left+1];
   while(i<=mid&&j<=right)
   {
       if(a[i]<a[j])
	{
  	     temp[index++]=a[i++];
	}
	else
	{
	     temp[index++]=a[j++];
	}
   }
         while(i<=mid)
	{
 	   temp[index++]=a[i++];
	}
  	while(j<=right)
	{
 	   temp[index++]=a[j++];
	}
	  index=0;
        for(int i=left;i<=right;i++)
	{
	   a[i]=temp[index++];
	}
   	 
}

void merge(int* a,int left,int right)
{
     if(right>left)
	{
  	    int mid=(left+right)/2;
	    merge(a,left,mid);
	    merge(a,mid+1,right);
	    mergeSort(a,left,mid,right);
	}
	
}
