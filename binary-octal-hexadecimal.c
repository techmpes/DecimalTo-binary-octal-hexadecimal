#include <stdio.h>
#include <math.h>
int main()
{
int i=0, pl=0, bash, arith, ypol[100],S=0;
printf("Dwse ena akeraio thetiko arithmo:" );
scanf("%d", &arith);
printf("Dwse th bash tou arithmitikou susthmatos:");
scanf("%d", &bash);

if (bash==2)
     {
      while (arith!=0)
             {
              ypol[i]=arith%2;
              arith=arith/2;
              i++;
              pl++;
            }
      printf("O arithmos sto duadiko susthma einai:");
      for (i=pl-1; i>-1; i--)
           {
            printf("%d", ypol[i]);
           }
      for (i=pl-1; i>-1; i--)
          {
           S=S+ypol[i]*(pow(2,i));
          }
    printf("\nO arithmos sto dekadiko susthma einai:%d", S);
    }

else if (bash==8)
         {
          while (arith!=0)
          {   
                ypol[i]=arith%8;
                arith=arith/8;
                i++;
                pl++;
          }
          printf("O arithmos sto oktadiko susthma einai:");
          for (i=pl-1; i>-1; i--)
               {
                printf("%d",ypol[i]);
               }
          for (i=pl-1; i>-1; i--)
               {
                S=S+ypol[i]*pow(8,i);
               }
          printf("\nO arithmos sto dekadiko susthma einai:%d", S);
               }
else if (bash==16)
         {
          while (arith!=0)
                 {
                  ypol[i]=arith%16;
                  arith=arith/16;
                  i++;
                  pl++;
                 }
          printf("O arithmos sto dekaeksadiko susthma einai:");
          for(i=pl-1; i>-1; i--)
              {
               if(ypol[i]==10)
                  {
                   printf("A");
                  }
               else if (ypol[i]==11)
                        {
                         printf("B");
                        }
               else if (ypol[i]==12)
                        {
                         printf("G");
                        }
               else if (ypol[i]==13)
                        {
                         printf("D");
                        }
               else if (ypol[i]==14)
                        {
                         printf("E");
                        }
               else if (ypol[i]==15)
                        {
                         printf("F");
                        }
               else {
                     printf("%d", ypol[i]);
                    }
            }
            for (i=pl-1; i>-1; i--)
                 {
                  S=S+ypol[i]*pow(16,i);
                 }
            printf("\nO arithmos sto dekadiko susthma einai:%d",S);
            }
return 0;
}
