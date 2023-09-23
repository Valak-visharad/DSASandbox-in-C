/*Program to print a star
      1
   1  2  1
1  2  3  2  1
   1  2  1
      1 
*/
#include<stdio.h>
#include<math.h>
void main(){

   /* n = main variable
      i = control variable for the first for loop
      j = control variable for second for loop   */

    int n, i ,j, k;
    scanf("%d",&n);

    // main (printing star)
    k = n;
    for(i = 1; i <= n; i++)// limiting range to be checked
    {
       for(j = 1; j <= n; j++){
          printf("%d",abs(j-i));
       }
      if(i = n-1){
         i = -i;
      }
      printf("\n");
    }
}