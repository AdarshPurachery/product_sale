#include<stdio.h>
int main()
{
        int n1,n2,n3,sum=0,total=0,p1,p2,p3,price,gift_price=0,y=1,n=0, ans,ship,a,b,c;
        p1=20;
        p2=40;
        p3=50;
        printf("product list \n");
        printf("product A \n product B \n product c \n");
        printf("enter the quantity of products \n ");
        printf("product A :");
        scanf("%d",&n1);
        printf("product B :");
        scanf("%d",&n2);
        printf("product C :");
        scanf("%d",&n3);
        printf("do you want to wrap (gift) your product press(1 for yes, 0 for no  :");
        scanf("%d",&ans);
        if(ans==1)
        {
            gift_price=n1+n2+n3;
            printf("gift wrapping price=%d \n",gift_price );
        }
        
        sum=n1+n2+n3;
        ship=(sum/10)*5 ;
        printf("shipping charge=%d", ship);
        printf("\n total quantity : %d ",sum );
        total=(p1*n1)+(p2*n2)+(p3*n3);
        printf("\n discounts are ");
       
        printf("\n");
        if(total>200)
        {
           a=10;
           printf("%d",a);
          /*  total=total-10;
            printf("flat_10 discount \n total amount : %d", total);*/
        }
       printf("\n");
      
        if(n1>10 || n2>10 || n3>10)
        {
            b=(total*5)/100;
             printf("%d",b);
         /*   printf("bulk_5 discount \n total price: %d",total);*/
        }
       
       
     printf("\n");
    
        if((n1+n2+n3)>20)
        {
            c=(total*10)/100;
             printf("%d",c);
           /* printf("bulk_10 discount \n total price: %d",total);*/
        }
    printf("\n");
    
        if((n1+n2+n3)>30 )
        {
            if(n1>15)
            {
                price=(p1*n1)/2;
               /* total=total-price_1;
                printf("tiered_50 discount \n amount : %d",total);*/
            }
            else if(n2>15)
            {
                price=(p2*n2)/2;
               /* total=total-price_2;
                printf("tiered_50 discount \n amount : %d",total);*/
            }
            else if(n3>15)
            {
                price=(p3*n3)/2;
             /*   total=total-price_3;
                printf("tiered_50 discount \n amount : %d",total);*/
            }
            else
            {
                return 0;
                
            }
             printf("%d",price);
            
        }
        if(a>b && a>c && a>price)
        {
            printf("flat_10_discount \n");
            total=(total-10)+ship+gift_price;
            printf(" \n total amount: :%d \n",total);
        }
        else if(b>c && b>price)
            {
                    printf("bulk_5_discount \n");
                    total=(total-b)+ship+gift_price;
                    printf(" \n total amount: :%d \n",total);
             
            }
        else if(c>price)
            {
                    printf("\nbulk_10_discount \n");
                    total=(total-c)+gift_price+ship;
                    printf(" \n total amount: :%d",total);
             }
        else if(price>a && price>b && price>c)
        {
            printf("\ntiered_50_discount");
            total=(total-price)+ship+gift_price;
            printf(" \n total amount: :%d",total);
        }
        else
        {
            printf("\n no discount");
            total=total+ship+gift_price;
             printf(" \n total amount: :%d",total);
        }
        
        
}