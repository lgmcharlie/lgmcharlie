void bucketSort(int *h,int len)
{
     int bucket[len+1];
//     memset(bucket,0,(len+1)*sizeof(len));//将数组内打元素置零
         for(int i=0;i<len+1;i++)
		bucket[i]=0;
	for(int i=0;i<len;i++)
	{
	   bucket[h[i]]++;
	}
         int j=0;	
  	for(int i=0;i<len+1;i++)
	{
	   while(bucket[i])
	  {
		h[j]=i;
		j++;
   		bucket[i]--;

	  }
	}
 

}
