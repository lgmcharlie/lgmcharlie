void insertSort(int *h,unsigned int len)
{
    for(int i=1;i<len;i++)
	{
  	     int j=i-1;
             int temp=*(h+i);
	    while(j>=0&&temp<*(h+j))
		{
		   *(h+j+1)=*(h+j);
		   j--;
		}
   	      *(h+j+1)=temp;	
	}


}
