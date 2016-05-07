#include<stdio.h>
main()
{ int i,j,k,n;
  printf("Enter n:\n");
  scanf("%d", &n);
for (i=1; i<=n; i++)
{
  for(j=n-i; j>=0; j--)
     printf(" ");
    for(k=2*i-1; k>0; k--)
      printf("*");
      printf("\n");

}
for(k=(2*i-1)/2;k>0;k--)
  printf(" ");
  printf("#");
  printf("\n");
}

/*

            i j k k= i + 1(i-1) = 2xi -1
   *        1 3 1 j = n - i
  ***       2 2 
 *****      3 1 5
*******
j i
3 1
2 3
1 5
0 7
# 1 1
## 2 2
### 3 3
####
#####
7403387094661641
*/
