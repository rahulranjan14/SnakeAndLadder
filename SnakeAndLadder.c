
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()

{
    int p1,p2,sum1=0,sum2=0;
   srand(time(0));

int s1h= rand()%99;
int s1t=s1h-(rand()%s1h);

int l1e=rand()%99;
int l1s=l1e-(rand()%l1e);


    printf("The Ladder starts at %d and ends at %d\n",l1s,l1e);
    printf("\n");
    printf("The Snake's Head is at %d and Tail is at %d\n",s1h,s1t);

    printf("\n");

do{
    printf("Enter Player1 dice value\n");

    scanf("%d",&p1);
//  p1=rand()%6;
  printf("Player1 current dice value = %d \n",p1);
    if(p1>0&&p1<7)
    {

        if(sum1>93)
        {
            int temp=100-sum1;
            if(p1>temp)
            {
                printf("Player1 require less than or equal %d\n",temp);
            }
            else
            {
                sum1=sum1+p1;
                 printf("Player1  score = %d\n",sum1);

        if(sum1==100)
        {printf("Player1 won");
        exit(0);}


            }
        }

        else{
        sum1=sum1+p1;

        if(sum1 == s1h)
            sum1=s1t;

        if(sum1 == l1s)
            sum1=l1e;

        printf("Player1 score = %d\n",sum1);

        if(sum1>=100)
        {printf("Player1 won");
        exit(0);}

        }
    }
  else{
      do{printf("Invalid Input\n");
          printf("Enter Player1 dice value\n");

    scanf("%d",&p1);
    //p1=rand()%6;
    printf("Player1 current dice value = %d \n",p1);
      }while(p1!=1 && p1!=2 && p1!=3 && p1!=4 && p1!=5 && p1!=6 );



       if(sum1>93)
        {
            int temp=100-sum1;
            if(p1>temp)
            {
                printf("Player1 require less than or equal %d\n",temp);
            }
            else
            {
                sum1=sum1+p1;
                 printf("Player1 score = %d\n",sum1);

        if(sum1==100)
        {printf("Player1 won");
        exit(0);}


            }
        }


      else{
        sum1=sum1+p1;

        if(sum1 == s1h )
            sum1=s1t;

        if(sum1 == l1s)
            sum1=l1e;

         printf("Player1 score = %d\n",sum1);
        if(sum1>=100)
        {printf("Player1 won");
        exit(0);}
  }
  }

  printf("\n");

    printf("Enter Player2 dice value\n");
   // scanf("%d",&p2);
    p2=rand()%6;
    printf("Player2 current dice value = %d \n",p2);
     if(p2>0&&p2<7)
    {


         if(sum2>93)
        {
            int temp=100-sum2;
            if(p2>temp)
            {
                printf("Player2 require less than or equal %d\n",temp);
            }
            else
            {
                sum2=sum2+p2;
                 printf("Player2 score = %d\n",sum2);

        if(sum2==100)
        {printf("Player2 won");
        exit(0);}


            }
        }


       else{
        sum2=sum2+p2;

        if(sum2 == s1h)
            sum2=s1t;

        if(sum2 == l1s)
            sum2=l1e;

         printf("Player2 score = %d\n",sum2);
        if(sum2>=100)
        {printf("Player2 won");
        exit(0);}
    }}
    else{
      do{printf("Invalid Input\n");
          printf("Enter Player2 dice value\n");
    //scanf("%d",&p2);
      p2=rand()%6;
      printf("Player2 current dice value = %d \n",p2);
      }while(p2!=1 && p2!=2 && p2!=3 && p2!=4 && p2!=5 && p2!=6 );


      if(sum2>93)
        {
            int temp=100-sum2;
            if(p2>temp)
            {
                printf("Player2 require less than or equal %d\n",temp);
            }
            else
            {
                sum2=sum2+p2;
                 printf("Player2 score = %d\n",sum2);

        if(sum2==100)
        {printf("Player2 won");
        exit(0);}


            }
        }



     else{
      sum2=sum2+p2;

      if(sum2 == s1h)
        sum2=s1t;

      if(sum2 == l1s)
        sum2=l1e;

         printf("player2 score = %d\n",sum2);

        if(sum2>=100)
        {printf("Player2 won");
        exit(0);}
  }
    }


printf("\n");

//for the display board

    int i,j;
    int board[10][10];
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            board[i][j]=0;
        }
    }

   int ri=(sum1/10);
   int ci=(sum1%10)-1;
   board[ri][ci]=1;

   int rj=(sum2/10);
   int cj=(sum2%10)-1;
   board[rj][cj]=2;

        for(i=0;i<10;i++)
  {
      for(j=0;j<10;j++)
      {
          printf(" %d ",board[i][j]);
      }
      printf("\n");
  }


  printf("\n");

}while(sum1<=100 || sum2<=100);

    return 0;
}
