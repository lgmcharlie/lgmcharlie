void shellSort(int* h,unsigned int len)
{
     for(int gap=len/2;gap>0;gap/=2)
	{
            
		 for(int i=gap;i<len;i++)
		
		{
			for(int j=i-gap;j>=0;j-=gap)
                    {
            
                            if(h[j]>h[j+gap])
                          { 
                             int temp=h[j];
                             h[j]=h[j+gap];
                             h[j+gap]=temp;
                          }
                      }
            
		}
	}
}
