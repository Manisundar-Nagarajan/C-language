  #include<stdio.h>
  int main()
  {
          int a[2][3] = { {10,20,30},{11,22,33} };
          printf("&a   = %p\n",&a);
          printf("&a+1 = %p\n",(&a+1));
  
          printf("a   = %p\n",a);
          printf("a+1 = %p\n",(a+1));
  
          printf("a[0] = %p\n",a[0]);
          printf("a[0]+1 = %p\n",(a[0]+1));
  
          printf("a[0][0] = %d\n",a[0][0]);
          printf("a[0][2]+1 = %d\n",a[0][2]+1);
  }
