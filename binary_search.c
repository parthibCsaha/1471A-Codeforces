 #include<stdio.h>

 int binary_search(int arr[],int x,int low,int high)
 {
     while(low<=high)
     {
         int mid=(low+high)/2;
         if(x==arr[mid])
         {
             return 1;
         }
         if(x<arr[mid])
         {
             high=mid-1;
         }
         else
         {
             low=mid+1;
         }
     }
     return 0;
 }
 int main()
 {
     int arr[]={1,2,3,4,5,6};
     int n=sizeof(arr)/sizeof(arr[0]);
     if(binary_search(arr,5,0,n-1))
        printf("YES");
     else
        printf("NO");
 }
