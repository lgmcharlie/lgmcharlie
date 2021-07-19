void heapSort(int *h,int left,int right)
   {
          int father=left;
         int child=2*father+1;
           while(child<=right)
          {
               if(child+1<right&&h[child]<h[child+1])
                  {
                          child++;
                 }
                   if(h[child]>h[father])
                    {
                          int temp=h[father];
                          h[father]=h[child];
                          h[child]=temp;
                          father=child;
                          child=father*2+1;
                     
                     }
                      else
                     {
                          break;
                     }
          }
 }
 void heap(int *h,int len)
 {
          for(int i=len/2-1;i>=0;i--)
          {
             heapSort(h,i,len-1);
         }
            while(--len)
            {
                int temp=h[0];
                   h[0]=h[len];
                   h[len]=temp;
                   heapSort(h,0,len-1);
           }
 }

