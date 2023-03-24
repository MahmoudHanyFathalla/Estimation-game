#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>

#define SIZE 52
 struct p1
 {
     int score1;

 };
 struct p2
 {
     int score2;
 };
 struct p3
 {
      int score3;
 };
 struct p4
 {
      int score4;
 };
 //score ......
int calco(int scoor,int n)
{
    int point1=0;
    if(scoor==n)
   {
     if(n==0)
     {
         point1=point1 + 35;
     }
     if(n==1)
     {
         point1=point1+ 11;
     }
    if(n==2)
     {
         point1=point1+ 15;
     }
    if(n==3)
     {
         point1=point1+ 18;
     }
    if(n==4)
     {
         point1=point1+ 21;
     }
    if(n==5)
     {
         point1=point1+ 25;
     }
    if(n==6)
     {
         point1=point1+ 28;
     }
    if(n==7)
     {
         point1=point1+ 31;
     }
    if(n==8)
     {
         point1=point1+ 64;
     }
    if(n==9)
     {
         point1=point1+ 74;
     }
    if(n==10)
     {
         point1=point1+ 84;
     }
    if(n==11)
     {
         point1=point1+ 94;
     }
    if(n==12)
     {
         point1=point1+ 104;
     }
    if(n==13)
     {
         point1=point1 + 120;
     }

   }
  else if(scoor != n)
   {
    if(n==0)
    {
        point1=point1 - 31;
    }
    if(n==1)
     {
         point1=point1 - 5;
     }
    if(n==2)
     {
         point1=point1 - 7;
     }
    if(n==3)
     {
         point1=point1- 11;
     }
    if(n==4)
     {
         point1=point1- 15;
     }
    if(n==5)
     {
         point1=point1- 20;
     }
    if(n==6)
     {
         point1=point1- 24;
     }
    if(n==7)
     {
         point1=point1- 28;
     }
    if(n==8)
     {
         point1=point1- 40;
     }
    if(n==9)
     {
         point1=point1- 51;
     }
    if(n==10)
     {
         point1=point1- 60;
     }
    if(n==11)
     {
         point1=point1- 70;
     }
    if(n==12)
     {
         point1=point1- 80;
     }
    if(n==13)
     {
         point1=point1- 85;
     }


   }
      return point1;
}
//
//check avoid.....
void avoid(char *player[])
{
    char *t[14]={"1t","2t","3t","4t","5t","6t","7t","8t","9t","10t","11t","12t","13t"};
    char *d[14]={"1d","2d","3d","4d","5d","6d","7d","8d","9d","10d","11d","12d","13d"};
    char *h[14]={"1h","2h","3h","4h","5h","6h","7h","8h","9h","10h","11h","12h","13h"};
    char *s[14]={"1s","2s","3s","4s","5s","6s","7s","8s","9s","10s","11s","12s","13s"};
   int w =0;
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<13;j++)
        {
            if(strcmp(player[i],t[j])==0)
            {
                 w =1;
            }
        }
    }

   int x =0;
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<13;j++)
        {
            if(strcmp(player[i],d[j])==0)
            {
                 x =1;
            }
        }
    }

   int y =0;
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<13;j++)
        {
            if(strcmp(player[i],h[j])==0)
            {
                 y =1;
            }
        }
    }

   int z =0;
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<13;j++)
        {
            if(strcmp(player[i],s[j])==0)
            {
                 z =1;
            }
        }
    }

  if(w==0||x==0||y==0||z==0)
  {
      printf("( AVOID )");
  }
}
//10,11,12,13 case.....
// simple way...
/*void comp(char *strings[])
{
   char *v[30] ={"10t","11t","12t","13t","1t","10d","11d","12d","13d","1d","10h","11d","12d","13d","1d","10h","11h","12h"."13h","1h","10s","11s","12s","13s","1s"};
   char *m[30]={"9v","9vv","9vvv","9vvvv","9vvvvv","9w","9ww","9www","9wwww","9wwwww","9x","9xx","9xxx","9xxxx","9xxxxx","9y","9yy","9yyy","9yyyy","9yyyyy"};
  //int d=0;
  for(int i=0;i<4;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(strcmp(strings[i],v[j])==0)
            {

                strcpy(strings[i],m[j]);
            }

        }

    }
}
 */
void comp(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"10t") ==0)
      {
         strcpy(strings[i],"9v");
      }
    if(strcmp(strings[i],"11t") ==0)
      {
         strcpy(strings[i],"9vv");
      }
    if(strcmp(strings[i],"12t") ==0)
      {
         strcpy(strings[i],"9vvv");
      }
    if(strcmp(strings[i],"13t") ==0)
      {
         strcpy(strings[i],"9vvvv");
      }
    if(strcmp(strings[i],"1t") ==0)
      {
         strcpy(strings[i],"9vvvvv");
      }
    if(strcmp(strings[i],"10d") ==0)
      {
         strcpy(strings[i],"9w");
      }
    if(strcmp(strings[i],"11d") ==0)
      {
         strcpy(strings[i],"9ww");
      }
    if(strcmp(strings[i],"12d") ==0)
      {
         strcpy(strings[i],"9www");
      }
    if(strcmp(strings[i],"13d") ==0)
      {
         strcpy(strings[i],"9wwww");
      }
    if(strcmp(strings[i],"1d") ==0)
      {
         strcpy(strings[i],"9wwwww");
      }
    if(strcmp(strings[i],"10h") ==0)
      {
         strcpy(strings[i],"9x");
      }
    if(strcmp(strings[i],"11h") ==0)
      {
         strcpy(strings[i],"9xx");
      }
    if(strcmp(strings[i],"12h") ==0)
      {
         strcpy(strings[i],"9xxx");
      }
    if(strcmp(strings[i],"13h") ==0)
      {
         strcpy(strings[i],"9xxxx");
      }
    if(strcmp(strings[i],"1h") ==0)
      {
         strcpy(strings[i],"9xxxxx");
      }
    if(strcmp(strings[i],"10s") ==0)
      {
         strcpy(strings[i],"9y");
      }
    if(strcmp(strings[i],"11s") ==0)
      {
         strcpy(strings[i],"9yy");
      }
    if(strcmp(strings[i],"12s") ==0)
      {
         strcpy(strings[i],"9yyy");
      }
    if(strcmp(strings[i],"13s") ==0)
      {
         strcpy(strings[i],"9yyyy");
      }
    if(strcmp(strings[i],"1s") ==0)
      {
         strcpy(strings[i],"9yyyyy");
      }
  }
}
 //returning the real valus of 10,11,12,13.....
void recomp(char *strings[])
{
    for(int i=0;i<4;i++)
  {
     if(strcmp(strings[i],"9v") ==0)
         {
           strcpy(strings[i],"10t");
         }
     if(strcmp(strings[i],"9vv") ==0)
         {
           strcpy(strings[i],"11t");
         }
     if(strcmp(strings[i],"9vvv") ==0)
         {
           strcpy(strings[i],"12t");
         }
     if(strcmp(strings[i],"9vvvv") ==0)
         {
           strcpy(strings[i],"13t");
         }
    if(strcmp(strings[i],"9vvvvv") ==0)
       {
           strcpy(strings[i],"1t");
       }
    if(strcmp(strings[i],"9w") ==0)
      {
         strcpy(strings[i],"10d");
      }
    if(strcmp(strings[i],"9ww") ==0)
      {
         strcpy(strings[i],"11d");
      }
    if(strcmp(strings[i],"9www") ==0)
      {
         strcpy(strings[i],"12d");
      }
    if(strcmp(strings[i],"9wwww") ==0)
      {
         strcpy(strings[i],"13d");
      }
    if(strcmp(strings[i],"9wwwww") ==0)
      {
         strcpy(strings[i],"1d");
      }
    if(strcmp(strings[i],"9x") ==0)
      {
         strcpy(strings[i],"10h");
      }
    if(strcmp(strings[i],"9xx") ==0)
      {
         strcpy(strings[i],"11h");
      }
    if(strcmp(strings[i],"9xxx") ==0)
      {
         strcpy(strings[i],"12h");
      }
    if(strcmp(strings[i],"9xxxx") ==0)
      {
         strcpy(strings[i],"13h");
      }
    if(strcmp(strings[i],"9xxxxx") ==0)
      {
         strcpy(strings[i],"1h");
      }
    if(strcmp(strings[i],"9y") ==0)
      {
         strcpy(strings[i],"10s");
      }
    if(strcmp(strings[i],"9yy") ==0)
      {
         strcpy(strings[i],"11s");
      }
    if(strcmp(strings[i],"9yyy") ==0)
      {
         strcpy(strings[i],"12s");
      }
    if(strcmp(strings[i],"9yyyy") ==0)
      {
         strcpy(strings[i],"13s");
      }
    if(strcmp(strings[i],"9yyyyy") ==0)
      {
         strcpy(strings[i],"1s");
      }

  }

}
//Aatoo3 calcolations.......
void atoo_t(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"1t") ==0)
      {
         strcpy(strings[i],"zz4");
      }
    if(strcmp(strings[i],"2t") ==0)
      {
         strcpy(strings[i],"z2");
      }
    if(strcmp(strings[i],"3t") ==0)
      {
         strcpy(strings[i],"z3");
      }
    if(strcmp(strings[i],"4t") ==0)
      {
         strcpy(strings[i],"z4");
      }
    if(strcmp(strings[i],"5t") ==0)
      {
         strcpy(strings[i],"z5");
      }
    if(strcmp(strings[i],"6t") ==0)
      {
         strcpy(strings[i],"z6");
      }
    if(strcmp(strings[i],"7t") ==0)
      {
         strcpy(strings[i],"z7");
      }
    if(strcmp(strings[i],"8t") ==0)
      {
         strcpy(strings[i],"z8");
      }
    if(strcmp(strings[i],"9t") ==0)
      {
         strcpy(strings[i],"z9");
      }
    if(strcmp(strings[i],"10t") ==0)
      {
         strcpy(strings[i],"zz");
      }
    if(strcmp(strings[i],"11t") ==0)
      {
         strcpy(strings[i],"zz1");
      }
    if(strcmp(strings[i],"12t") ==0)
      {
         strcpy(strings[i],"zz2");
      }
    if(strcmp(strings[i],"13t") ==0)
      {
         strcpy(strings[i],"zz3");
      }
  }
}
void atoo_d(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"1d") ==0)
      {
         strcpy(strings[i],"zz4");
      }
    if(strcmp(strings[i],"2d") ==0)
      {
         strcpy(strings[i],"z2");
      }
    if(strcmp(strings[i],"3d") ==0)
      {
         strcpy(strings[i],"z3");
      }
    if(strcmp(strings[i],"4d") ==0)
      {
         strcpy(strings[i],"z4");
      }
    if(strcmp(strings[i],"5d") ==0)
      {
         strcpy(strings[i],"z5");
      }
    if(strcmp(strings[i],"6d") ==0)
      {
         strcpy(strings[i],"z6");
      }
    if(strcmp(strings[i],"7d") ==0)
      {
         strcpy(strings[i],"z7");
      }
    if(strcmp(strings[i],"8d") ==0)
      {
         strcpy(strings[i],"z8");
      }
    if(strcmp(strings[i],"9d") ==0)
      {
         strcpy(strings[i],"z9");
      }
    if(strcmp(strings[i],"10d") ==0)
      {
         strcpy(strings[i],"zz");
      }
    if(strcmp(strings[i],"11d") ==0)
      {
         strcpy(strings[i],"zz1");
      }
    if(strcmp(strings[i],"12d") ==0)
      {
         strcpy(strings[i],"zz2");
      }
    if(strcmp(strings[i],"13d") ==0)
      {
         strcpy(strings[i],"zz3");
      }
  }
}
void atoo_h(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"1h") ==0)
      {
         strcpy(strings[i],"zz4");
      }
    if(strcmp(strings[i],"2h") ==0)
      {
         strcpy(strings[i],"z2");
      }
    if(strcmp(strings[i],"3h") ==0)
      {
         strcpy(strings[i],"z3");
      }
    if(strcmp(strings[i],"4h") ==0)
      {
         strcpy(strings[i],"z4");
      }
    if(strcmp(strings[i],"5h") ==0)
      {
         strcpy(strings[i],"z5");
      }
    if(strcmp(strings[i],"6h") ==0)
      {
         strcpy(strings[i],"z6");
      }
    if(strcmp(strings[i],"7h") ==0)
      {
         strcpy(strings[i],"z7");
      }
    if(strcmp(strings[i],"8h") ==0)
      {
         strcpy(strings[i],"z8");
      }
    if(strcmp(strings[i],"9h") ==0)
      {
         strcpy(strings[i],"z9");
      }
    if(strcmp(strings[i],"10h") ==0)
      {
         strcpy(strings[i],"zz");
      }
    if(strcmp(strings[i],"11h") ==0)
      {
         strcpy(strings[i],"zz1");
      }
    if(strcmp(strings[i],"12h") ==0)
      {
         strcpy(strings[i],"zz2");
      }
    if(strcmp(strings[i],"13h") ==0)
      {
         strcpy(strings[i],"zz3");
      }
  }
}
void atoo_s(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"1s") ==0)
      {
         strcpy(strings[i],"zz4");
      }
    if(strcmp(strings[i],"2s") ==0)
      {
         strcpy(strings[i],"z2");
      }
    if(strcmp(strings[i],"3s") ==0)
      {
         strcpy(strings[i],"z3");
      }
    if(strcmp(strings[i],"4s") ==0)
      {
         strcpy(strings[i],"z4");
      }
    if(strcmp(strings[i],"5s") ==0)
      {
         strcpy(strings[i],"z5");
      }
    if(strcmp(strings[i],"6s") ==0)
      {
         strcpy(strings[i],"z6");
      }
    if(strcmp(strings[i],"7s") ==0)
      {
         strcpy(strings[i],"z7");
      }
    if(strcmp(strings[i],"8s") ==0)
      {
         strcpy(strings[i],"z8");
      }
    if(strcmp(strings[i],"9s") ==0)
      {
         strcpy(strings[i],"z9");
      }
    if(strcmp(strings[i],"10s") ==0)
      {
         strcpy(strings[i],"zz");
      }
    if(strcmp(strings[i],"11s") ==0)
      {
         strcpy(strings[i],"zz1");
      }
    if(strcmp(strings[i],"12s") ==0)
      {
         strcpy(strings[i],"zz2");
      }
    if(strcmp(strings[i],"13s") ==0)
      {
         strcpy(strings[i],"zz3");
      }
  }
}
//returning Atoo3 real values...............
void reatoo_t(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"zz4") ==0)
      {
         strcpy(strings[i],"1t");
      }
    if(strcmp(strings[i],"z2") ==0)
      {
         strcpy(strings[i],"2t");
      }
    if(strcmp(strings[i],"z3") ==0)
      {
         strcpy(strings[i],"3t");
      }
    if(strcmp(strings[i],"z4") ==0)
      {
         strcpy(strings[i],"4t");
      }
    if(strcmp(strings[i],"z5") ==0)
      {
         strcpy(strings[i],"5t");
      }
    if(strcmp(strings[i],"z6") ==0)
      {
         strcpy(strings[i],"6t");
      }
    if(strcmp(strings[i],"z7") ==0)
      {
         strcpy(strings[i],"7t");
      }
    if(strcmp(strings[i],"z8") ==0)
      {
         strcpy(strings[i],"8t");
      }
    if(strcmp(strings[i],"z9") ==0)
      {
         strcpy(strings[i],"9t");
      }
    if(strcmp(strings[i],"zz") ==0)
      {
         strcpy(strings[i],"10t");
      }
    if(strcmp(strings[i],"zz1") ==0)
      {
         strcpy(strings[i],"11t");
      }
    if(strcmp(strings[i],"zz2") ==0)
      {
         strcpy(strings[i],"12t");
      }
    if(strcmp(strings[i],"zz3") ==0)
      {
         strcpy(strings[i],"13t");
      }
  }
}
void reatoo_d(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"zz4") ==0)
      {
         strcpy(strings[i],"1d");
      }
    if(strcmp(strings[i],"z2") ==0)
      {
         strcpy(strings[i],"2d");
      }
    if(strcmp(strings[i],"z3") ==0)
      {
         strcpy(strings[i],"3d");
      }
    if(strcmp(strings[i],"z4") ==0)
      {
         strcpy(strings[i],"4d");
      }
    if(strcmp(strings[i],"z5") ==0)
      {
         strcpy(strings[i],"5d");
      }
    if(strcmp(strings[i],"z6") ==0)
      {
         strcpy(strings[i],"6d");
      }
    if(strcmp(strings[i],"z7") ==0)
      {
         strcpy(strings[i],"7d");
      }
    if(strcmp(strings[i],"z8") ==0)
      {
         strcpy(strings[i],"8d");
      }
    if(strcmp(strings[i],"z9") ==0)
      {
         strcpy(strings[i],"9d");
      }
    if(strcmp(strings[i],"zz") ==0)
      {
         strcpy(strings[i],"10d");
      }
    if(strcmp(strings[i],"zz1") ==0)
      {
         strcpy(strings[i],"11d");
      }
    if(strcmp(strings[i],"zz2") ==0)
      {
         strcpy(strings[i],"12d");
      }
    if(strcmp(strings[i],"zz3") ==0)
      {
         strcpy(strings[i],"13d");
      }
  }
}
void reatoo_h(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"zz4") ==0)
      {
         strcpy(strings[i],"1h");
      }
    if(strcmp(strings[i],"z2") ==0)
      {
         strcpy(strings[i],"2h");
      }
    if(strcmp(strings[i],"z3") ==0)
      {
         strcpy(strings[i],"3h");
      }
    if(strcmp(strings[i],"z4") ==0)
      {
         strcpy(strings[i],"4h");
      }
    if(strcmp(strings[i],"z5") ==0)
      {
         strcpy(strings[i],"5h");
      }
    if(strcmp(strings[i],"z6") ==0)
      {
         strcpy(strings[i],"6h");
      }
    if(strcmp(strings[i],"z7") ==0)
      {
         strcpy(strings[i],"7h");
      }
    if(strcmp(strings[i],"z8") ==0)
      {
         strcpy(strings[i],"8h");
      }
    if(strcmp(strings[i],"z9") ==0)
      {
         strcpy(strings[i],"9h");
      }
    if(strcmp(strings[i],"zz") ==0)
      {
         strcpy(strings[i],"10h");
      }
    if(strcmp(strings[i],"zz1") ==0)
      {
         strcpy(strings[i],"11h");
      }
    if(strcmp(strings[i],"zz2") ==0)
      {
         strcpy(strings[i],"12h");
      }
    if(strcmp(strings[i],"zz3") ==0)
      {
         strcpy(strings[i],"13h");
      }
  }
}
void reatoo_s(char *strings[])
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(strings[i],"zz4") ==0)
      {
         strcpy(strings[i],"1s");
      }
    if(strcmp(strings[i],"z2") ==0)
      {
         strcpy(strings[i],"2s");
      }
    if(strcmp(strings[i],"z3") ==0)
      {
         strcpy(strings[i],"3s");
      }
    if(strcmp(strings[i],"z4") ==0)
      {
         strcpy(strings[i],"4s");
      }
    if(strcmp(strings[i],"z5") ==0)
      {
         strcpy(strings[i],"5s");
      }
    if(strcmp(strings[i],"z6") ==0)
      {
         strcpy(strings[i],"6s");
      }
    if(strcmp(strings[i],"z7") ==0)
      {
         strcpy(strings[i],"7s");
      }
    if(strcmp(strings[i],"z8") ==0)
      {
         strcpy(strings[i],"8s");
      }
    if(strcmp(strings[i],"z9") ==0)
      {
         strcpy(strings[i],"9s");
      }
    if(strcmp(strings[i],"zz") ==0)
      {
         strcpy(strings[i],"10s");
      }
    if(strcmp(strings[i],"zz1") ==0)
      {
         strcpy(strings[i],"11s");
      }
    if(strcmp(strings[i],"zz2") ==0)
      {
         strcpy(strings[i],"12s");
      }
    if(strcmp(strings[i],"zz3") ==0)
      {
         strcpy(strings[i],"13s");
      }
  }
}
// اي ورقه بتتلعب مختلفه عن اول ورقه اتلعبت بتكون صغيره ومبتلمش
//its value== 1
void t_0(char *strings[],char *str_0123[])
{
    if(strcmp(strings[0],"1t")!=0&&strcmp(strings[0],"2t")!=0&&strcmp(strings[0],"3t")!=0&&strcmp(strings[0],"4t")!=0&&strcmp(strings[0],"5t")!=0&&strcmp(strings[0],"6t")!=0&&strcmp(strings[0],"7t")!=0&&strcmp(strings[0],"8t")!=0&&strcmp(strings[0],"9t")!=0&&strcmp(strings[0],"10t")!=0&&strcmp(strings[0],"11t")!=0&&strcmp(strings[0],"12t")!=0&&strcmp(strings[0],"13t")!=0)
     {
         if(strcmp(strings[0],"zz4")!=0&&strcmp(strings[0],"z2")!=0&&strcmp(strings[0],"z3")!=0&&strcmp(strings[0],"z4")!=0&&strcmp(strings[0],"z5")!=0&&strcmp(strings[0],"z6")!=0&&strcmp(strings[0],"z7")!=0&&strcmp(strings[0],"z8")!=0&&strcmp(strings[0],"z9")!=0&&strcmp(strings[0],"zz")!=0&&strcmp(strings[0],"zz1")!=0&&strcmp(strings[0],"zz2")!=0&&strcmp(strings[0],"zz3")!=0)
          {
              str_0123[0]=strdup(strings[0]);
              strings[0]=strdup("1");
              //strcpy(strings[0],"1");
          }
     }
}
void t_1(char *strings[],char *str_0123[])
{
   if(strcmp(strings[1],"1t")!=0&&strcmp(strings[1],"2t")!=0&&strcmp(strings[1],"3t")!=0&&strcmp(strings[1],"4t")!=0&&strcmp(strings[1],"5t")!=0&&strcmp(strings[1],"6t")!=0&&strcmp(strings[1],"7t")!=0&&strcmp(strings[1],"8t")!=0&&strcmp(strings[1],"9t")!=0&&strcmp(strings[1],"10t")!=0&&strcmp(strings[1],"11t")!=0&&strcmp(strings[1],"12t")!=0&&strcmp(strings[1],"13t")!=0)
     {
       if(strcmp(strings[1],"zz4")!=0&&strcmp(strings[1],"z2")!=0&&strcmp(strings[1],"z3")!=0&&strcmp(strings[1],"z4")!=0&&strcmp(strings[1],"z5")!=0&&strcmp(strings[1],"z6")!=0&&strcmp(strings[1],"z7")!=0&&strcmp(strings[1],"z8")!=0&&strcmp(strings[1],"z9")!=0&&strcmp(strings[1],"zz")!=0&&strcmp(strings[1],"zz1")!=0&&strcmp(strings[1],"zz2")!=0&&strcmp(strings[1],"zz3")!=0)
          {
              str_0123[1]=strdup(strings[1]);
              strings[1]=strdup("1");
             // strcpy(strings[1],"1");
          }
     }
}
void t_2(char *strings[],char *str_0123[])
{
    if(strcmp(strings[2],"1t")!=0&&strcmp(strings[2],"2t")!=0&&strcmp(strings[2],"3t")!=0&&strcmp(strings[2],"4t")!=0&&strcmp(strings[2],"5t")!=0&&strcmp(strings[2],"6t")!=0&&strcmp(strings[2],"7t")!=0&&strcmp(strings[2],"8t")!=0&&strcmp(strings[2],"9t")!=0&&strcmp(strings[2],"10t")!=0&&strcmp(strings[2],"11t")!=0&&strcmp(strings[2],"12t")!=0&&strcmp(strings[2],"13t")!=0)
     {
         if(strcmp(strings[2],"zz4")!=0&&strcmp(strings[2],"z2")!=0&&strcmp(strings[2],"z3")!=0&&strcmp(strings[2],"z4")!=0&&strcmp(strings[2],"z5")!=0&&strcmp(strings[2],"z6")!=0&&strcmp(strings[2],"z7")!=0&&strcmp(strings[2],"z8")!=0&&strcmp(strings[2],"z9")!=0&&strcmp(strings[2],"zz")!=0&&strcmp(strings[2],"zz1")!=0&&strcmp(strings[2],"zz2")!=0&&strcmp(strings[2],"zz3")!=0)
          {
             str_0123[2]=strdup(strings[2]);
             strings[2]=strdup("1");
             // strcpy(strings[2],"1");
          }
     }
}
void t_3(char *strings[],char *str_0123[])
{
    if(strcmp(strings[3],"1t")!=0&&strcmp(strings[3],"2t")!=0&&strcmp(strings[3],"3t")!=0&&strcmp(strings[3],"4t")!=0&&strcmp(strings[3],"5t")!=0&&strcmp(strings[3],"6t")!=0&&strcmp(strings[3],"7t")!=0&&strcmp(strings[3],"8t")!=0&&strcmp(strings[3],"9t")!=0&&strcmp(strings[3],"10t")!=0&&strcmp(strings[3],"11t")!=0&&strcmp(strings[3],"12t")!=0&&strcmp(strings[3],"13t")!=0)
     {
        if(strcmp(strings[3],"zz4")!=0&&strcmp(strings[3],"z2")!=0&&strcmp(strings[3],"z3")!=0&&strcmp(strings[3],"z4")!=0&&strcmp(strings[3],"z5")!=0&&strcmp(strings[3],"z6")!=0&&strcmp(strings[3],"z7")!=0&&strcmp(strings[3],"z8")!=0&&strcmp(strings[3],"z9")!=0&&strcmp(strings[3],"zz")!=0&&strcmp(strings[3],"zz1")!=0&&strcmp(strings[3],"zz2")!=0&&strcmp(strings[3],"zz3")!=0)
          {
              str_0123[3]=strdup(strings[3]);
              strings[3]=strdup("1");
              //strcpy(strings[3],"1");
          }
     }
}
void d_0(char *strings[],char *str_0123[])
{
    if(strcmp(strings[0],"1d")!=0&&strcmp(strings[0],"2d")!=0&&strcmp(strings[0],"3d")!=0&&strcmp(strings[0],"4d")!=0&&strcmp(strings[0],"5d")!=0&&strcmp(strings[0],"6d")!=0&&strcmp(strings[0],"7d")!=0&&strcmp(strings[0],"8d")!=0&&strcmp(strings[0],"9d")!=0&&strcmp(strings[0],"10d")!=0&&strcmp(strings[0],"11d")!=0&&strcmp(strings[0],"12d")!=0&&strcmp(strings[0],"13d")!=0)
     {
        if(strcmp(strings[0],"zz4")!=0&&strcmp(strings[0],"z2")!=0&&strcmp(strings[0],"z3")!=0&&strcmp(strings[0],"z4")!=0&&strcmp(strings[0],"z5")!=0&&strcmp(strings[0],"z6")!=0&&strcmp(strings[0],"z7")!=0&&strcmp(strings[0],"z8")!=0&&strcmp(strings[0],"z9")!=0&&strcmp(strings[0],"zz")!=0&&strcmp(strings[0],"zz1")!=0&&strcmp(strings[0],"zz2")!=0&&strcmp(strings[0],"zz3")!=0)
          {
              str_0123[0]=strdup(strings[0]);
              strings[0]=strdup("1");
              //strcpy(strings[0],"1");
          }
     }
}
void d_1(char *strings[],char *str_0123[])
{
    if(strcmp(strings[1],"1d")!=0&&strcmp(strings[1],"2d")!=0&&strcmp(strings[1],"3d")!=0&&strcmp(strings[1],"4d")!=0&&strcmp(strings[1],"5d")!=0&&strcmp(strings[1],"6d")!=0&&strcmp(strings[1],"7d")!=0&&strcmp(strings[1],"8d")!=0&&strcmp(strings[1],"9d")!=0&&strcmp(strings[1],"10d")!=0&&strcmp(strings[1],"11d")!=0&&strcmp(strings[1],"12d")!=0&&strcmp(strings[1],"13d")!=0)
     {
         if(strcmp(strings[1],"zz4")!=0&&strcmp(strings[1],"z2")!=0&&strcmp(strings[1],"z3")!=0&&strcmp(strings[1],"z4")!=0&&strcmp(strings[1],"z5")!=0&&strcmp(strings[1],"z6")!=0&&strcmp(strings[1],"z7")!=0&&strcmp(strings[1],"z8")!=0&&strcmp(strings[1],"z9")!=0&&strcmp(strings[1],"zz")!=0&&strcmp(strings[1],"zz1")!=0&&strcmp(strings[1],"zz2")!=0&&strcmp(strings[1],"zz3")!=0)
          {
              str_0123[1]=strdup(strings[1]);
              strings[1]=strdup("1");
             // strcpy(strings[1],"1");
          }
     }
}
void d_2(char *strings[],char *str_0123[])
{
     if(strcmp(strings[2],"1d")!=0&&strcmp(strings[2],"2d")!=0&&strcmp(strings[2],"3d")!=0&&strcmp(strings[2],"4d")!=0&&strcmp(strings[2],"5d")!=0&&strcmp(strings[2],"6d")!=0&&strcmp(strings[2],"7d")!=0&&strcmp(strings[2],"8d")!=0&&strcmp(strings[2],"9d")!=0&&strcmp(strings[2],"10d")!=0&&strcmp(strings[2],"11d")!=0&&strcmp(strings[2],"12d")!=0&&strcmp(strings[2],"13d")!=0)
     {
        if(strcmp(strings[2],"zz4")!=0&&strcmp(strings[2],"z2")!=0&&strcmp(strings[2],"z3")!=0&&strcmp(strings[2],"z4")!=0&&strcmp(strings[2],"z5")!=0&&strcmp(strings[2],"z6")!=0&&strcmp(strings[2],"z7")!=0&&strcmp(strings[2],"z8")!=0&&strcmp(strings[2],"z9")!=0&&strcmp(strings[2],"zz")!=0&&strcmp(strings[2],"zz1")!=0&&strcmp(strings[2],"zz2")!=0&&strcmp(strings[2],"zz3")!=0)
          {
             str_0123[2]=strdup(strings[2]);
             strings[2]=strdup("1");
              //strcpy(strings[2],"1");
          }
     }

}
void d_3(char *strings[],char *str_0123[])
{
     if(strcmp(strings[3],"1d")!=0&&strcmp(strings[3],"2d")!=0&&strcmp(strings[3],"3d")!=0&&strcmp(strings[3],"4d")!=0&&strcmp(strings[3],"5d")!=0&&strcmp(strings[3],"6d")!=0&&strcmp(strings[3],"7d")!=0&&strcmp(strings[3],"8d")!=0&&strcmp(strings[3],"9d")!=0&&strcmp(strings[3],"10d")!=0&&strcmp(strings[3],"11d")!=0&&strcmp(strings[3],"12d")!=0&&strcmp(strings[3],"13d")!=0)
     {
         if(strcmp(strings[3],"zz4")!=0&&strcmp(strings[3],"z2")!=0&&strcmp(strings[3],"z3")!=0&&strcmp(strings[3],"z4")!=0&&strcmp(strings[3],"z5")!=0&&strcmp(strings[3],"z6")!=0&&strcmp(strings[3],"z7")!=0&&strcmp(strings[3],"z8")!=0&&strcmp(strings[3],"z9")!=0&&strcmp(strings[3],"zz")!=0&&strcmp(strings[3],"zz1")!=0&&strcmp(strings[3],"zz2")!=0&&strcmp(strings[3],"zz3")!=0)
          {
              str_0123[3]=strdup(strings[3]);
              strings[3]=strdup("1");
              //strcpy(strings[3],"1");
          }
     }
}
void h_0(char *strings[],char *str_0123[])
{
    if(strcmp(strings[0],"1h")!=0&&strcmp(strings[0],"2h")!=0&&strcmp(strings[0],"3h")!=0&&strcmp(strings[0],"4h")!=0&&strcmp(strings[0],"5h")!=0&&strcmp(strings[0],"6h")!=0&&strcmp(strings[0],"7h")!=0&&strcmp(strings[0],"8h")!=0&&strcmp(strings[0],"9h")!=0&&strcmp(strings[0],"10h")!=0&&strcmp(strings[0],"11h")!=0&&strcmp(strings[0],"12h")!=0&&strcmp(strings[0],"13h")!=0)
     {
         if(strcmp(strings[0],"zz4")!=0&&strcmp(strings[0],"z2")!=0&&strcmp(strings[0],"z3")!=0&&strcmp(strings[0],"z4")!=0&&strcmp(strings[0],"z5")!=0&&strcmp(strings[0],"z6")!=0&&strcmp(strings[0],"z7")!=0&&strcmp(strings[0],"z8")!=0&&strcmp(strings[0],"z9")!=0&&strcmp(strings[0],"zz")!=0&&strcmp(strings[0],"zz1")!=0&&strcmp(strings[0],"zz2")!=0&&strcmp(strings[0],"zz3")!=0)
          {
              str_0123[0]=strdup(strings[0]);
              strings[0]=strdup("1");
              //strcpy(strings[0],"1");
          }
     }
}
void h_1(char *strings[],char *str_0123[])
{
    if(strcmp(strings[1],"1h")!=0&&strcmp(strings[1],"2h")!=0&&strcmp(strings[1],"3h")!=0&&strcmp(strings[1],"4h")!=0&&strcmp(strings[1],"5h")!=0&&strcmp(strings[1],"6h")!=0&&strcmp(strings[1],"7h")!=0&&strcmp(strings[1],"8h")!=0&&strcmp(strings[1],"9h")!=0&&strcmp(strings[1],"10h")!=0&&strcmp(strings[1],"11h")!=0&&strcmp(strings[1],"12h")!=0&&strcmp(strings[1],"13h")!=0)
     {
         if(strcmp(strings[1],"zz4")!=0&&strcmp(strings[1],"z2")!=0&&strcmp(strings[1],"z3")!=0&&strcmp(strings[1],"z4")!=0&&strcmp(strings[1],"z5")!=0&&strcmp(strings[1],"z6")!=0&&strcmp(strings[1],"z7")!=0&&strcmp(strings[1],"z8")!=0&&strcmp(strings[1],"z9")!=0&&strcmp(strings[1],"zz")!=0&&strcmp(strings[1],"zz1")!=0&&strcmp(strings[1],"zz2")!=0&&strcmp(strings[1],"zz3")!=0)
          {
              str_0123[1]=strdup(strings[1]);
              strings[1]=strdup("1");
              //strcpy(strings[1],"1");
          }
     }
}
void h_2(char *strings[],char *str_0123[])
{
    if(strcmp(strings[2],"1h")!=0&&strcmp(strings[2],"2h")!=0&&strcmp(strings[2],"3h")!=0&&strcmp(strings[2],"4h")!=0&&strcmp(strings[2],"5h")!=0&&strcmp(strings[2],"6h")!=0&&strcmp(strings[2],"7h")!=0&&strcmp(strings[2],"8h")!=0&&strcmp(strings[2],"9h")!=0&&strcmp(strings[2],"10h")!=0&&strcmp(strings[2],"11h")!=0&&strcmp(strings[2],"12h")!=0&&strcmp(strings[2],"13h")!=0)
     {
         if(strcmp(strings[2],"zz4")!=0&&strcmp(strings[2],"z2")!=0&&strcmp(strings[2],"z3")!=0&&strcmp(strings[2],"z4")!=0&&strcmp(strings[2],"z5")!=0&&strcmp(strings[2],"z6")!=0&&strcmp(strings[2],"z7")!=0&&strcmp(strings[2],"z8")!=0&&strcmp(strings[2],"z9")!=0&&strcmp(strings[2],"zz")!=0&&strcmp(strings[2],"zz1")!=0&&strcmp(strings[2],"zz2")!=0&&strcmp(strings[2],"zz3")!=0)
          {
             str_0123[2]=strdup(strings[2]);
             strings[2]=strdup("1");
              //strcpy(strings[2],"1");
          }
     }
}
void h_3(char *strings[],char *str_0123[])
{
    if(strcmp(strings[3],"1h")!=0&&strcmp(strings[3],"2h")!=0&&strcmp(strings[3],"3h")!=0&&strcmp(strings[3],"4h")!=0&&strcmp(strings[3],"5h")!=0&&strcmp(strings[3],"6h")!=0&&strcmp(strings[3],"7h")!=0&&strcmp(strings[3],"8h")!=0&&strcmp(strings[3],"9h")!=0&&strcmp(strings[3],"10h")!=0&&strcmp(strings[3],"11h")!=0&&strcmp(strings[3],"12h")!=0&&strcmp(strings[3],"13h")!=0)
     {
         if(strcmp(strings[3],"zz4")!=0&&strcmp(strings[3],"z2")!=0&&strcmp(strings[3],"z3")!=0&&strcmp(strings[3],"z4")!=0&&strcmp(strings[3],"z5")!=0&&strcmp(strings[3],"z6")!=0&&strcmp(strings[3],"z7")!=0&&strcmp(strings[3],"z8")!=0&&strcmp(strings[3],"z9")!=0&&strcmp(strings[3],"zz")!=0&&strcmp(strings[3],"zz1")!=0&&strcmp(strings[3],"zz2")!=0&&strcmp(strings[3],"zz3")!=0)
          {
              str_0123[3]=strdup(strings[3]);
              strings[3]=strdup("1");
              //strcpy(strings[3],"1");
          }
     }
}
void s_0(char *strings[],char *str_0123[])
{
     if(strcmp(strings[0],"1s")!=0&&strcmp(strings[0],"2s")!=0&&strcmp(strings[0],"3s")!=0&&strcmp(strings[0],"4s")!=0&&strcmp(strings[0],"5s")!=0&&strcmp(strings[0],"6s")!=0&&strcmp(strings[0],"7s")!=0&&strcmp(strings[0],"8s")!=0&&strcmp(strings[0],"9s")!=0&&strcmp(strings[0],"10s")!=0&&strcmp(strings[0],"11s")!=0&&strcmp(strings[0],"12s")!=0&&strcmp(strings[0],"13s")!=0)
     {
         if(strcmp(strings[0],"zz4")!=0&&strcmp(strings[0],"z2")!=0&&strcmp(strings[0],"z3")!=0&&strcmp(strings[0],"z4")!=0&&strcmp(strings[0],"z5")!=0&&strcmp(strings[0],"z6")!=0&&strcmp(strings[0],"z7")!=0&&strcmp(strings[0],"z8")!=0&&strcmp(strings[0],"z9")!=0&&strcmp(strings[0],"zz")!=0&&strcmp(strings[0],"zz1")!=0&&strcmp(strings[0],"zz2")!=0&&strcmp(strings[0],"zz3")!=0)
          {
              str_0123[0]=strdup(strings[0]);
              strings[0]=strdup("1");
              //strcpy(strings[0],"1");
          }
     }
}
void s_1(char *strings[],char *str_0123[])
{
     if(strcmp(strings[1],"1s")!=0&&strcmp(strings[1],"2s")!=0&&strcmp(strings[1],"3s")!=0&&strcmp(strings[1],"4s")!=0&&strcmp(strings[1],"5s")!=0&&strcmp(strings[1],"6s")!=0&&strcmp(strings[1],"7s")!=0&&strcmp(strings[1],"8s")!=0&&strcmp(strings[1],"9s")!=0&&strcmp(strings[1],"10s")!=0&&strcmp(strings[1],"11s")!=0&&strcmp(strings[1],"12s")!=0&&strcmp(strings[1],"13s")!=0)
     {
        if(strcmp(strings[1],"zz4")!=0&&strcmp(strings[1],"z2")!=0&&strcmp(strings[1],"z3")!=0&&strcmp(strings[1],"z4")!=0&&strcmp(strings[1],"z5")!=0&&strcmp(strings[1],"z6")!=0&&strcmp(strings[1],"z7")!=0&&strcmp(strings[1],"z8")!=0&&strcmp(strings[1],"z9")!=0&&strcmp(strings[1],"zz")!=0&&strcmp(strings[1],"zz1")!=0&&strcmp(strings[1],"zz2")!=0&&strcmp(strings[1],"zz3")!=0)
          {
              str_0123[1]=strdup(strings[1]);
              strings[1]=strdup("1");
              //strcpy(strings[1],"1");
          }
     }
}
void s_2(char *strings[],char *str_0123[])
{
     if(strcmp(strings[2],"1s")!=0&&strcmp(strings[2],"2s")!=0&&strcmp(strings[2],"3s")!=0&&strcmp(strings[2],"4s")!=0&&strcmp(strings[2],"5s")!=0&&strcmp(strings[2],"6s")!=0&&strcmp(strings[2],"7s")!=0&&strcmp(strings[2],"8s")!=0&&strcmp(strings[2],"9s")!=0&&strcmp(strings[2],"10s")!=0&&strcmp(strings[2],"11s")!=0&&strcmp(strings[2],"12s")!=0&&strcmp(strings[2],"13s")!=0)
     {
         if(strcmp(strings[2],"zz4")!=0&&strcmp(strings[2],"z2")!=0&&strcmp(strings[2],"z3")!=0&&strcmp(strings[2],"z4")!=0&&strcmp(strings[2],"z5")!=0&&strcmp(strings[2],"z6")!=0&&strcmp(strings[2],"z7")!=0&&strcmp(strings[2],"z8")!=0&&strcmp(strings[2],"z9")!=0&&strcmp(strings[2],"zz")!=0&&strcmp(strings[2],"zz1")!=0&&strcmp(strings[2],"zz2")!=0&&strcmp(strings[2],"zz3")!=0)
          {
              str_0123[2]=strdup(strings[2]);
              strings[2]=strdup("1");
              //strcpy(strings[2],"1");
          }
     }
}
void s_3(char *strings[],char *str_0123[])
{
    if(strcmp(strings[3],"1s")!=0&&strcmp(strings[3],"2s")!=0&&strcmp(strings[3],"3s")!=0&&strcmp(strings[3],"4s")!=0&&strcmp(strings[3],"5s")!=0&&strcmp(strings[3],"6s")!=0&&strcmp(strings[3],"7s")!=0&&strcmp(strings[3],"8s")!=0&&strcmp(strings[3],"9s")!=0&&strcmp(strings[3],"10s")!=0&&strcmp(strings[3],"11s")!=0&&strcmp(strings[3],"12s")!=0&&strcmp(strings[3],"13s")!=0)
     {
        if(strcmp(strings[3],"zz4")!=0&&strcmp(strings[3],"z2")!=0&&strcmp(strings[3],"z3")!=0&&strcmp(strings[3],"z4")!=0&&strcmp(strings[3],"z5")!=0&&strcmp(strings[3],"z6")!=0&&strcmp(strings[3],"z7")!=0&&strcmp(strings[3],"z8")!=0&&strcmp(strings[3],"z9")!=0&&strcmp(strings[3],"zz")!=0&&strcmp(strings[3],"zz1")!=0&&strcmp(strings[3],"zz2")!=0&&strcmp(strings[3],"zz3")!=0)
          {
              str_0123[3]=strdup(strings[3]);
              strings[3]=strdup("1");
              //strcpy(strings[3],"1");
          }
     }
}
















///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{

system("COLOR 0A");
 int point1=0,point2=0,point3=0,point4=0;
printf("                         ESTIMATION GAME                   \n");
printf("By :    Mahmoud Hany Fathalla\n");
printf("ID :    20104375\n");
printf("\n");
printf(" trefl = t | dimond = d | heart = h | spead = s | suns = u | pass = 0 \n");
int n;
printf("enter the number of rounds you want : ");
scanf(" %d",&n);
sndPlaySound(TEXT("WhatsApp-Audio-2022-01-14-at-8.36.16-AM.wav"),SND_ASYNC);

//system("COLOR 2A");

for(int i =0;i<n;i++)
{

  int numbers[52]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51};
  char *cards[53]={"1t","2t","3t","4t","5t","6t","7t","8t","9t","10t","11t","12t","13t","1d","2d","3d","4d","5d","6d","7d","8d","9d","10d","11d","12d","13d","1h","2h","3h","4h","5h","6h","7h","8h","9h","10h","11h","12h","13h","1s","2s","3s","4s","5s","6s","7s","8s","9s","10s","11s","12s","13s"};
  int i, n,j, tmp,count=0;
  char *player1[14];
   char *player2[14];
    char *player3[14];
     char *player4[14];
 // randomizing

  srand(time(NULL));
  for(i = 0;i < 52;++i)
  {
    n = rand() % 13;
    tmp = numbers[n];
    numbers[n] = numbers[i];
    numbers[i] = tmp;
  }
  for(i = 0;i < 52;++i)
  {
    n = rand() % 13;
    tmp = numbers[n];
    numbers[n] = numbers[i];
    numbers[i] = tmp;
  }
 /* for(i = 0;i < 52;++i)
  {
    n = rand() % 13;
    tmp = numbers[n];
    numbers[n] = numbers[i];
    numbers[i] = tmp;
  }
  for(i = 0;i < 52;++i)
  {
    n = rand() % 13;
    tmp = numbers[n];
    numbers[n] = numbers[i];
    numbers[i] = tmp;
  }
 for(i = 0;i < 52;++i)
  {
    n = rand() % 13;
    tmp = numbers[n];
    numbers[n] = numbers[i];
    numbers[i] = tmp;
  }*/

    printf("\nplayer1-----------------------------\n");
//print player1 cards and saving it
   for(i = 0,j=0;i <13 && j<13 ;++i,++j)
    {
         player1[j]=cards[numbers[i]];
        printf("%s | ", cards[numbers[i]]);
         count=count+1;
    }
      avoid(player1);
    printf("\nplayer2-----------------------------\n");
//print player2 cards and saving it
  for(i = 13,j=0;i <26 && j<13;++i,++j)
    {
         player2[j]=cards[numbers[i]];
        printf("%s | ", cards[numbers[i]]);
         count=count+1;

    }
    avoid(player2);
    printf("\nplayer3-----------------------------\n");
//print player3 cards and saving it
  for(i =26 ,j=0;i <39 && j<13 ;++i,++j)
    {
         player3[j]=cards[numbers[i]];
        printf("%s | ", cards[numbers[i]]);
         count=count+1;
    }
    avoid(player3);
    printf("\nplayer4-----------------------------\n");
//print player4 cards and saving it
 for(i = 39,j=0;i <52 && j<13 ;++i,++j)
     {
         player4[j]=cards[numbers[i]];
         printf("%s | ", cards[numbers[i]]);
         count=count+1;
     }
     avoid(player4);
     printf("\n-----------------------------\n");
//taking the calls
     int call1=0,call2=0,call3=0,call4=0;
     char color1,color2,color3,color4;

  printf("player1 call and color: ");
  scanf("%d%c",&call1,&color1);
  printf("player2 call and color: ");
  scanf("%d%c",&call2,&color2);
  printf("player3 call and color: ");
  scanf("%d%c",&call3,&color3);
  printf("player4 call and color: ");
  scanf("%d%c",&call4,&color4);



//decide the bigst call
int c =0;
  if(call1>call2 &&call1>call3 &&call1>call4)
  {

      printf("player1 has the call with %d %c",call1,color1);
      c=1;
  }
   else if(call2>call1 &&call2>call3 &&call2>call4)
  {
      printf("player2 has the call with %d %c",call2,color2);
      c=2;
  }
   else if(call3>call1 &&call3>call2 &&call3>call4)
  {
      printf("player3 has the call with %d %c",call3,color3);
      c=3;
  }
   else if(call4>call1 &&call4>call2 &&call4>call3)
  {
      printf("player4 has the call with %d %c",call4,color4);
      c=4;
  }
 // t ---> a  (t (a)--->d---->h----->s)
  if(color1=='t')
  {
      color1='a';
  }
   if(color2=='t')
  {
      color2='a';
  }
   if(color3=='t')
  {
      color3='a';
  }
   if(color4=='t')
  {
      color4='a';
  }




//if there is two calls in same
// decide the cololr
  if(call1==call2&&call1>call3&&call1>call4)
  {
      if(color1>=color2)
      {
           if(color1=='a')
             {
                 color1='t';
             }
          printf("player1 has the call with %d %c ",call1,color1);
         c=1;
      }
       if(color1<color2)
      {
          printf("player2 has the call with %d %c ",call1,color2);
          c=2;
      }
  }
  if(call1==call3&&call1>call2&&call1>call4)
  {
      if(color1>=color3)
      {
           if(color1=='a')
             {
                 color1='t';
             }
          printf("player1 has the call with %d %c ",call1,color1);
         c=1;
      }
       if(color1<color3)
      {
          printf("player3 has the call with %d %c ",call1,color3);
          c=3;
      }
  }
  if(call1==call4&&call1>call2&&call1>call3)
  {
      if(color1>=color4)
      {
           if(color1=='a')
             {
                 color1='t';
             }
          printf("player1 has the call with %d %c ",call1,color1);
          c=1;

      }
       if(color1<color4)
      {
          printf("player4 has the call with %d %c ",call1,color4);
          c=4;
      }
  }
  if(call2==call3&&call2>call1&&call2>call4)
  {
      if(color2>=color3)
      {
           if(color2=='a')
             {
                 color2='t';
             }
          printf("player2 has the call with %d %c ",call2,color2);
         c=2;
      }
       if(color2<color3)
      {
          printf("player3 has the call with %d %c ",call2,color3);
          c=3;
      }
  }
  if(call2==call4&&call2>call1&&call2>call3)
  {
      if(color2>=color4)
      {
           if(color2=='a')
             {
                 color2='t';
             }
          printf("player2 has the call with %d %c ",call2,color2);
           c=2;
      }
       if(color2<color4)
      {
          printf("player4 has the call with %d %c ",call2,color4);
          c=4;
      }
  }
  if(call3==call4&&call3>call1&&call3>call2)
  {
      if(color3>=color4)
      {
           if(color3=='a')
             {
                 color3='t';
             }
          printf("player3 has the call with %d %c ",call3,color3);
          c=3;
      }
       if(color3<color4)
      {
          printf("player4 has the call with %d %c ",call3,color4);
          c=4;
      }
  }
 //if there is three calls in same
// decide the cololr
 if(call1==call2&&call1==call3&&call1>call4)
  {
      if(color1>=color2&&color1>=color3)
      {
           if(color1=='a')
             {
                 color1='t';
             }
          printf("player1 has the call with %d %c ",call1,color1);
         c=1;
      }
       if(color1<color2&&color3<=color2)
       {
          printf("player2 has the call with %d %c ",call1,color2);
          c=2;
       }
       if(color1<color3&&color2<color3)
       {
          printf("player3 has the call with %d %c ",call3,color3);
          c=3;
       }
  }
 if(call1==call2&&call1==call4&&call1>call3)
  {
      if(color1>=color2&&color1>=color4)
      {
           if(color1=='a')
             {
                 color1='t';
             }
          printf("player1 has the call with %d %c ",call1,color1);
         c=1;
      }
       if(color1<color2&&color4<=color2)
       {
          printf("player2 has the call with %d %c ",call1,color2);
          c=2;
       }
       if(color1<color4&&color2<color4)
       {
          printf("player4 has the call with %d %c ",call4,color4);
          c=4;
       }
  }
 if(call4==call2&&call4==call3&&call4>call1)
  {
      if(color2>=color3&&color2>=color4)
      {
           if(color2=='a')
             {
                 color2='t';
             }
          printf("player2 has the call with %d %c ",call2,color2);
         c=2;
      }
       if(color4<=color3&&color2<color3)
       {
          printf("player3 has the call with %d %c ",call3,color3);
          c=3;
       }
       if(color3<color4&&color2<color4)
       {
          printf("player4 has the call with %d %c ",call4,color4);
          c=4;
       }
  }
 //if there is four calls in same
// decide the cololr
 if(call1==call2&&call1==call3&&call1==call4)
  {
      if(color1>=color2&&color1>=color3&&color1>=color4)
      {
           if(color1=='a')
             {
                 color1='t';
             }
          printf("player1 has the call with %d %c ",call1,color1);
         c=1;
      }
       if(color1<color2&&color3<=color2&&color4<=color2)
       {
          printf("player2 has the call with %d %c ",call1,color2);
          c=2;
       }
       if(color1<color3&&color2<color3&&color4<=color3)
       {
          printf("player3 has the call with %d %c ",call3,color3);
          c=3;
       }
      if(color1<color4&&color2<color4&&color3<color4)
       {
          printf("player4 has the call with %d %c ",call4,color4);
          c=4;
       }

  }

//the calls in the 2atoo3
char atooo;
if(c==1)
{
    atooo=color1;
}
if(c==2)
{
    atooo=color2;
}
if(c==3)
{
    atooo=color3;
}
if(c==4)
{
     atooo=color4;
}
 int n1,n2,n3,n4;

 printf("\n--------------------------------------\n");
 printf("The 2atoo3 is [ %c ]\n",atooo);

 if(c==1)
  {
      int a=0;
      while(a==0)
       {
           printf("player1 enter your call in numbers :");
           scanf("%d",&n1);
            a=1;
          if(n1<call1)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player2 enter your call in numbers :");
      scanf("%d",&n2);
      printf("player3 enter your call in numbers :");
      scanf("%d",&n3);
      printf("player4 enter your call in numbers :");
      scanf("%d",&n4);
      b=1;
       if(n2>n1||n3>n1||n4>n1)
       {
           printf("Error\n");
           b=0;
       }
    }
 }
 if(c==2)
  {
     int a=0;
      while(a==0)
       {
           printf("player2 enter your call in numbers :");
           scanf("%d",&n2);
            a=1;
          if(n2<call2)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player3 enter your call in numbers :");
      scanf("%d",&n3);
      printf("player4 enter your call in numbers :");
      scanf("%d",&n4);
      printf("player1 enter your call in numbers :");
      scanf("%d",&n1);
      b=1;
       if(n1>n2||n3>n2||n4>n2)
       {
           printf("Error\n");
           b=0;
       }
    }
  }
 if(c==3)
  {
      int a=0;
      while(a==0)
       {
           printf("player3 enter your call in numbers :");
           scanf("%d",&n3);
            a=1;
          if(n3<call3)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player4 enter your call in numbers :");
      scanf("%d",&n4);
      printf("player1 enter your call in numbers :");
      scanf("%d",&n1);
      printf("player2 enter your call in numbers :");
      scanf("%d",&n2);
      b=1;
       if(n1>n3||n2>n3||n4>n3)
       {
           printf("Error\n");
           b=0;
       }
    }
  }
  if(c==4)
  {
      int a=0;
      while(a==0)
       {
           printf("player4 enter your call in numbers :");
           scanf("%d",&n4);
            a=1;
          if(n4<call4)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player1 enter your call in numbers :");
      scanf("%d",&n1);
      printf("player2 enter your call in numbers :");
      scanf("%d",&n2);
      printf("player3 enter your call in numbers :");
      scanf("%d",&n3);
      b=1;
       if(n1>n4||n2>n4||n3>n4)
       {
           printf("Error\n");
           b=0;
       }
    }
  }
 int game=0;
 int what=0;
 game=n1+n2+n3+n4;
//decide the game (over/under)
 if(game>13)
 {

     what = game - 13;
     printf("the game is over +%d in 2atoo3 %c \n",what,atooo);
 }
 else if(game<13)
 {
     what= 13 - game;
     printf("the game is under -%d in 2atoo3 %c \n",what,atooo);
 }
 //if the game is 13
if(game == 13)
{
 while(game ==13)
 {
    printf("the game can not be played cuse the sum of calls is 13 ....please re-enter your calls  \n");

  if(c==1)
  {
      int a=0;
      while(a==0)
       {
           printf("player1 enter your call in numbers :");
           scanf("%d",&n1);
            a=1;
          if(n1<call1)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player2 enter your call in numbers :");
      scanf("%d",&n2);
      printf("player3 enter your call in numbers :");
      scanf("%d",&n3);
      printf("player4 enter your call in numbers :");
      scanf("%d",&n4);
      b=1;
       if(n2>n1||n3>n1||n4>n1)
       {
           printf("Error\n");
           b=0;
       }
    }
 }
 if(c==2)
  {
     int a=0;
      while(a==0)
       {
           printf("player2 enter your call in numbers :");
           scanf("%d",&n2);
            a=1;
          if(n2<call2)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player3 enter your call in numbers :");
      scanf("%d",&n3);
      printf("player4 enter your call in numbers :");
      scanf("%d",&n4);
      printf("player1 enter your call in numbers :");
      scanf("%d",&n1);
      b=1;
       if(n1>n2||n3>n2||n4>n2)
       {
           printf("Error\n");
           b=0;
       }
    }
  }
 if(c==3)
  {
      int a=0;
      while(a==0)
       {
           printf("player3 enter your call in numbers :");
           scanf("%d",&n3);
            a=1;
          if(n3<call3)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player4 enter your call in numbers :");
      scanf("%d",&n4);
      printf("player1 enter your call in numbers :");
      scanf("%d",&n1);
      printf("player2 enter your call in numbers :");
      scanf("%d",&n2);
      b=1;
       if(n1>n3||n2>n3||n4>n3)
       {
           printf("Error\n");
           b=0;
       }
    }
  }
  if(c==4)
  {
      int a=0;
      while(a==0)
       {
           printf("player4 enter your call in numbers :");
           scanf("%d",&n4);
            a=1;
          if(n4<call4)
           {
              printf("Error\n");
               a=0;
            }
       }
       int b=0;
    while(b==0)
    {
      printf("player1 enter your call in numbers :");
      scanf("%d",&n1);
      printf("player2 enter your call in numbers :");
      scanf("%d",&n2);
      printf("player3 enter your call in numbers :");
      scanf("%d",&n3);
      b=1;
       if(n1>n4||n2>n4||n3>n4)
       {
           printf("Error\n");
           b=0;
       }
    }
  }

      game=n1+n2+n3+n4;
      what=0;
       if(game>13)
        {
          what = game - 13;
          printf("the game is over +%d in 2atoo3 %c \n",what,atooo);
        }
        if(game<13)
        {
          what= 13 - game;
          printf("the game is under -%d in 2atoo3 %c \n",what,atooo);
        }
 }
}
 int g=0;
 int colo=0;
 //to know wich player should play first
 if(n1>=n2&&n1>=n3&&n1>=n4)
 {
     g=1;
 }
 if(n2>n1&&n2>=n3&&n2>=n4)
 {
     g=2;
 }
 if(n3>n2&&n3>n1&&n3>=n4)
 {
     g=3;
 }
 if(n4>n2&&n4>n3&&n4>n1)
 {
     g=4;
 }
 if(atooo=='t')
 {
     colo=1;
 }
 if(atooo=='d')
 {
     colo=2;
 }
 if(atooo=='h')
 {
     colo=3;
 }
 if(atooo=='s')
 {
     colo=4;
 }

     char temp[256];
     char *strings[4];
//taking cards for 13 round
 int score1 =0,score2=0,score3=0,score4=0;
 int w=g;
for(int i=0;i<13;i++)////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
{

printf("\n-------------------\n");
//taking cards from players
if(g==1)
{
    int b=0;
   while(b==0)
   {
    printf("player1 enter your card \n");
    scanf("%s",temp);
    strings[0]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[0],player1[i])==0)
        {
            b=1;
        }
    }
      if(b==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }
   }
   int t=0;
   while(t==0)
   {
    printf("player2 enter your card \n");
    scanf("%s",temp);
    strings[1]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[1],player2[i])==0)
        {
            t=1;
        }
    }
      if(t==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int u=0;
   while(u==0)
   {
    printf("player3 enter your card \n");
    scanf("%s",temp);
    strings[2]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[2],player3[i])==0)
        {
            u=1;
        }
    }
      if(u==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int k=0;
   while(k==0)
   {
    printf("player4 enter your card \n");
    scanf("%s",temp);
    strings[3]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[3],player4[i])==0)
        {
            k=1;
        }
    }
      if(k==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }



}
if(g==2)
{

   int t=0;
   while(t==0)
   {
    printf("player2 enter your card \n");
    scanf("%s",temp);
    strings[1]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[1],player2[i])==0)
        {
            t=1;
        }
    }
      if(t==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int u=0;
   while(u==0)
   {
    printf("player3 enter your card \n");
    scanf("%s",temp);
    strings[2]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[2],player3[i])==0)
        {
            u=1;
        }
    }
      if(u==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int k=0;
   while(k==0)
   {
    printf("player4 enter your card \n");
    scanf("%s",temp);
    strings[3]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[3],player4[i])==0)
        {
            k=1;
        }
    }
      if(k==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int b=0;
   while(b==0)
   {
    printf("player1 enter your card \n");
    scanf("%s",temp);
    strings[0]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[0],player1[i])==0)
        {
            b=1;
        }
    }
      if(b==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }
   }
}
if(g==3)
{

  int u=0;
   while(u==0)
   {
    printf("player3 enter your card \n");
    scanf("%s",temp);
    strings[2]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[2],player3[i])==0)
        {
            u=1;
        }
    }
      if(u==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int k=0;
   while(k==0)
   {
    printf("player4 enter your card \n");
    scanf("%s",temp);
    strings[3]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[3],player4[i])==0)
        {
            k=1;
        }
    }
      if(k==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int b=0;
   while(b==0)
   {
    printf("player1 enter your card \n");
    scanf("%s",temp);
    strings[0]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[0],player1[i])==0)
        {
            b=1;
        }
    }
      if(b==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }
   }
  int t=0;
   while(t==0)
   {
    printf("player2 enter your card \n");
    scanf("%s",temp);
    strings[1]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[1],player2[i])==0)
        {
            t=1;
        }
    }
      if(t==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
}
if(g==4)
{

  int k=0;
   while(k==0)
   {
    printf("player4 enter your card \n");
    scanf("%s",temp);
    strings[3]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[3],player4[i])==0)
        {
            k=1;
        }
    }
      if(k==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int b=0;
   while(b==0)
   {
    printf("player1 enter your card \n");
    scanf("%s",temp);
    strings[0]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[0],player1[i])==0)
        {
            b=1;
        }
    }
      if(b==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }
   }
  int t=0;
   while(t==0)
   {
    printf("player2 enter your card \n");
    scanf("%s",temp);
    strings[1]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[1],player2[i])==0)
        {
            t=1;
        }
    }
      if(t==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
  int u=0;
   while(u==0)
   {
    printf("player3 enter your card \n");
    scanf("%s",temp);
    strings[2]= strdup(temp);
    for(int i=0;i<13;i++)
    {
        if(strcmp(strings[2],player3[i])==0)
        {
            u=1;
        }
    }
      if(u==0)
      {
       printf("Error(there is no card like this in player cards)\n");
      }

   }
}

//Any color in deffrence with the first color is weak


if(colo==1)
{
  atoo_t(strings);
}
if(colo==2)
{
  atoo_d(strings);
}
if(colo==3)
{
  atoo_h(strings);
}
if(colo==4)
{
  atoo_s(strings);
}

char *str_0123[4];
if(g==1)
{
if(strcmp(strings[0],"1t")==0||strcmp(strings[0],"2t")==0||strcmp(strings[0],"3t")==0||strcmp(strings[0],"4t")==0||strcmp(strings[0],"5t")==0||strcmp(strings[0],"6t")==0||strcmp(strings[0],"7t")==0||strcmp(strings[0],"8t")==0||strcmp(strings[0],"9t")==0||strcmp(strings[0],"10t")==0||strcmp(strings[0],"11t")==0||strcmp(strings[0],"12t")==0||strcmp(strings[0],"13t")==0)
{
   /* if(strcmp(strings[1],"1t")!=0&&strcmp(strings[1],"2t")!=0&&strcmp(strings[1],"3t")!=0&&strcmp(strings[1],"4t")!=0&&strcmp(strings[1],"5t")!=0&&strcmp(strings[1],"6t")!=0&&strcmp(strings[1],"7t")!=0&&strcmp(strings[1],"8t")!=0&&strcmp(strings[1],"9t")!=0&&strcmp(strings[1],"10t")!=0&&strcmp(strings[1],"11t")!=0&&strcmp(strings[1],"12t")!=0&&strcmp(strings[1],"13t")!=0)
     {

        if(strcmp(strings[1],"z1")!=0&&strcmp(strings[1],"z2")!=0&&strcmp(strings[1],"z3")!=0&&strcmp(strings[1],"z4")!=0&&strcmp(strings[1],"z5")!=0&&strcmp(strings[1],"z6")!=0&&strcmp(strings[1],"z7")!=0&&strcmp(strings[1],"z8")!=0&&strcmp(strings[1],"z9")!=0&&strcmp(strings[1],"zz")!=0&&strcmp(strings[1],"zz1")!=0&&strcmp(strings[1],"zz2")!=0&&strcmp(strings[1],"zz3")!=0)
          {


              str_0123[1]=strdup(strings[1]);

              strings[1]=strdup("1");


              // strings[1]=strdup(str_0123[1]);

             // strcpy(strings[1],"1");

          }
     }/*
    if(strcmp(strings[2],"1t")!=0&&strcmp(strings[2],"2t")!=0&&strcmp(strings[2],"3t")!=0&&strcmp(strings[2],"4t")!=0&&strcmp(strings[2],"5t")!=0&&strcmp(strings[2],"6t")!=0&&strcmp(strings[2],"7t")!=0&&strcmp(strings[2],"8t")!=0&&strcmp(strings[2],"9t")!=0&&strcmp(strings[2],"10t")!=0&&strcmp(strings[2],"11t")!=0&&strcmp(strings[2],"12t")!=0&&strcmp(strings[2],"13t")!=0)
     {
         strcpy(strings[2],"1");
     }
    if(strcmp(strings[3],"1t")!=0&&strcmp(strings[3],"2t")!=0&&strcmp(strings[3],"3t")!=0&&strcmp(strings[3],"4t")!=0&&strcmp(strings[3],"5t")!=0&&strcmp(strings[3],"6t")!=0&&strcmp(strings[3],"7t")!=0&&strcmp(strings[3],"8t")!=0&&strcmp(strings[3],"9t")!=0&&strcmp(strings[3],"10t")!=0&&strcmp(strings[3],"11t")!=0&&strcmp(strings[3],"12t")!=0&&strcmp(strings[3],"13t")!=0)
     {
         strcpy(strings[3],"1");
     }*/
     t_1(strings,str_0123);
     t_2(strings,str_0123);
     t_3(strings,str_0123);


}
if(strcmp(strings[0],"1d")==0||strcmp(strings[0],"2d")==0||strcmp(strings[0],"3d")==0||strcmp(strings[0],"4d")==0||strcmp(strings[0],"5d")==0||strcmp(strings[0],"6d")==0||strcmp(strings[0],"7d")==0||strcmp(strings[0],"8d")==0||strcmp(strings[0],"9d")==0||strcmp(strings[0],"10d")==0||strcmp(strings[0],"11d")==0||strcmp(strings[0],"12d")==0||strcmp(strings[0],"13d")==0)
{

     d_1(strings,str_0123);
     d_2(strings,str_0123);
     d_3(strings,str_0123);


}
if(strcmp(strings[0],"1h")==0||strcmp(strings[0],"2h")==0||strcmp(strings[0],"3h")==0||strcmp(strings[0],"4h")==0||strcmp(strings[0],"5h")==0||strcmp(strings[0],"6h")==0||strcmp(strings[0],"7h")==0||strcmp(strings[0],"8h")==0||strcmp(strings[0],"9h")==0||strcmp(strings[0],"10h")==0||strcmp(strings[0],"11h")==0||strcmp(strings[0],"12h")==0||strcmp(strings[0],"13h")==0)
{

     h_1(strings,str_0123);
     h_2(strings,str_0123);
     h_3(strings,str_0123);


}
if(strcmp(strings[0],"1s")==0||strcmp(strings[0],"2s")==0||strcmp(strings[0],"3s")==0||strcmp(strings[0],"4s")==0||strcmp(strings[0],"5s")==0||strcmp(strings[0],"6s")==0||strcmp(strings[0],"7s")==0||strcmp(strings[0],"8s")==0||strcmp(strings[0],"9s")==0||strcmp(strings[0],"10s")==0||strcmp(strings[0],"11s")==0||strcmp(strings[0],"12s")==0||strcmp(strings[0],"13s")==0)
{

     s_1(strings,str_0123);
     s_2(strings,str_0123);
     s_3(strings,str_0123);


}
}
if(g==2)
{
if(strcmp(strings[1],"1t")==0||strcmp(strings[1],"2t")==0||strcmp(strings[1],"3t")==0||strcmp(strings[1],"4t")==0||strcmp(strings[1],"5t")==0||strcmp(strings[1],"6t")==0||strcmp(strings[1],"7t")==0||strcmp(strings[1],"8t")==0||strcmp(strings[1],"9t")==0||strcmp(strings[1],"10t")==0||strcmp(strings[1],"11t")==0||strcmp(strings[1],"12t")==0||strcmp(strings[1],"13t")==0)
{

     t_0(strings,str_0123);
     t_2(strings,str_0123);
     t_3(strings,str_0123);


}
if(strcmp(strings[1],"1d")==0||strcmp(strings[1],"2d")==0||strcmp(strings[1],"3d")==0||strcmp(strings[1],"4d")==0||strcmp(strings[1],"5d")==0||strcmp(strings[1],"6d")==0||strcmp(strings[1],"7d")==0||strcmp(strings[1],"8d")==0||strcmp(strings[1],"9d")==0||strcmp(strings[1],"10d")==0||strcmp(strings[1],"11d")==0||strcmp(strings[1],"12d")==0||strcmp(strings[1],"13d")==0)
{

     d_0(strings,str_0123);
     d_2(strings,str_0123);
     d_3(strings,str_0123);

}
if(strcmp(strings[1],"1h")==0||strcmp(strings[1],"2h")==0||strcmp(strings[1],"3h")==0||strcmp(strings[1],"4h")==0||strcmp(strings[1],"5h")==0||strcmp(strings[1],"6h")==0||strcmp(strings[1],"7h")==0||strcmp(strings[1],"8h")==0||strcmp(strings[1],"9h")==0||strcmp(strings[1],"10h")==0||strcmp(strings[1],"11h")==0||strcmp(strings[1],"12h")==0||strcmp(strings[1],"13h")==0)
{

     h_0(strings,str_0123);
     h_2(strings,str_0123);
     h_3(strings,str_0123);

}
if(strcmp(strings[1],"1s")==0||strcmp(strings[1],"2s")==0||strcmp(strings[1],"3s")==0||strcmp(strings[1],"4s")==0||strcmp(strings[1],"5s")==0||strcmp(strings[1],"6s")==0||strcmp(strings[1],"7s")==0||strcmp(strings[1],"8s")==0||strcmp(strings[1],"9s")==0||strcmp(strings[1],"10s")==0||strcmp(strings[1],"11s")==0||strcmp(strings[1],"12s")==0||strcmp(strings[1],"13s")==0)
{

     s_0(strings,str_0123);
     s_2(strings,str_0123);
     s_3(strings,str_0123);


}
}
if(g==3)
{
if(strcmp(strings[2],"1t")==0||strcmp(strings[2],"2t")==0||strcmp(strings[2],"3t")==0||strcmp(strings[2],"4t")==0||strcmp(strings[2],"5t")==0||strcmp(strings[2],"6t")==0||strcmp(strings[2],"7t")==0||strcmp(strings[2],"8t")==0||strcmp(strings[2],"9t")==0||strcmp(strings[2],"10t")==0||strcmp(strings[2],"11t")==0||strcmp(strings[2],"12t")==0||strcmp(strings[2],"13t")==0)
{

     t_0(strings,str_0123);
     t_1(strings,str_0123);
     t_3(strings,str_0123);


}
if(strcmp(strings[2],"1d")==0||strcmp(strings[2],"2d")==0||strcmp(strings[2],"3d")==0||strcmp(strings[2],"4d")==0||strcmp(strings[2],"5d")==0||strcmp(strings[2],"6d")==0||strcmp(strings[2],"7d")==0||strcmp(strings[2],"8d")==0||strcmp(strings[2],"9d")==0||strcmp(strings[2],"10d")==0||strcmp(strings[2],"11d")==0||strcmp(strings[2],"12d")==0||strcmp(strings[2],"13d")==0)
{

     d_0(strings,str_0123);
     d_1(strings,str_0123);
     d_3(strings,str_0123);

}
if(strcmp(strings[2],"1h")==0||strcmp(strings[2],"2h")==0||strcmp(strings[2],"3h")==0||strcmp(strings[2],"4h")==0||strcmp(strings[2],"5h")==0||strcmp(strings[2],"6h")==0||strcmp(strings[2],"7h")==0||strcmp(strings[2],"8h")==0||strcmp(strings[2],"9h")==0||strcmp(strings[2],"10h")==0||strcmp(strings[2],"11h")==0||strcmp(strings[2],"12h")==0||strcmp(strings[2],"13h")==0)
{

     h_0(strings,str_0123);
     h_1(strings,str_0123);
     h_3(strings,str_0123);


}
if(strcmp(strings[2],"1s")==0||strcmp(strings[2],"2s")==0||strcmp(strings[2],"3s")==0||strcmp(strings[2],"4s")==0||strcmp(strings[2],"5s")==0||strcmp(strings[2],"6s")==0||strcmp(strings[2],"7s")==0||strcmp(strings[2],"8s")==0||strcmp(strings[2],"9s")==0||strcmp(strings[2],"10s")==0||strcmp(strings[2],"11s")==0||strcmp(strings[2],"12s")==0||strcmp(strings[2],"13s")==0)
{

     s_0(strings,str_0123);
     s_1(strings,str_0123);
     s_3(strings,str_0123);

}
}
if(g==4)
{
if(strcmp(strings[3],"1t")==0||strcmp(strings[3],"2t")==0||strcmp(strings[3],"3t")==0||strcmp(strings[3],"4t")==0||strcmp(strings[3],"5t")==0||strcmp(strings[3],"6t")==0||strcmp(strings[3],"7t")==0||strcmp(strings[3],"8t")==0||strcmp(strings[3],"9t")==0||strcmp(strings[3],"10t")==0||strcmp(strings[3],"11t")==0||strcmp(strings[3],"12t")==0||strcmp(strings[3],"13t")==0)
{

     t_0(strings,str_0123);
     t_1(strings,str_0123);
     t_2(strings,str_0123);


}
if(strcmp(strings[3],"1d")==0||strcmp(strings[3],"2d")==0||strcmp(strings[3],"3d")==0||strcmp(strings[3],"4d")==0||strcmp(strings[3],"5d")==0||strcmp(strings[3],"6d")==0||strcmp(strings[3],"7d")==0||strcmp(strings[3],"8d")==0||strcmp(strings[3],"9d")==0||strcmp(strings[3],"10d")==0||strcmp(strings[3],"11d")==0||strcmp(strings[3],"12d")==0||strcmp(strings[3],"13d")==0)
{

     d_0(strings,str_0123);
     d_1(strings,str_0123);
     d_2(strings,str_0123);

}
if(strcmp(strings[3],"1h")==0||strcmp(strings[3],"2h")==0||strcmp(strings[3],"3h")==0||strcmp(strings[3],"4h")==0||strcmp(strings[3],"5h")==0||strcmp(strings[3],"6h")==0||strcmp(strings[3],"7h")==0||strcmp(strings[3],"8h")==0||strcmp(strings[3],"9h")==0||strcmp(strings[3],"10h")==0||strcmp(strings[3],"11h")==0||strcmp(strings[3],"12h")==0||strcmp(strings[3],"13h")==0)
{

     h_0(strings,str_0123);
     h_1(strings,str_0123);
     h_2(strings,str_0123);


}
if(strcmp(strings[3],"1s")==0||strcmp(strings[3],"2s")==0||strcmp(strings[3],"3s")==0||strcmp(strings[3],"4s")==0||strcmp(strings[3],"5s")==0||strcmp(strings[3],"6s")==0||strcmp(strings[3],"7s")==0||strcmp(strings[3],"8s")==0||strcmp(strings[3],"9s")==0||strcmp(strings[3],"10s")==0||strcmp(strings[3],"11s")==0||strcmp(strings[3],"12s")==0||strcmp(strings[3],"13s")==0)
{
     s_0(strings,str_0123);
     s_1(strings,str_0123);
     s_2(strings,str_0123);

}
}

















//solving ASCII case
comp(strings);
printf("\n-------------\n");
//taking the biget card
if(strcmp(strings[0],strings[1])>0&&strcmp(strings[0],strings[2])>0&&strcmp(strings[0],strings[3])>0)
{

    recomp(strings);//returning the 11,12,13
     printf("player1 take it  \n");
    score1=score1+1;

    g=1;

}
comp(strings);
if(strcmp(strings[1],strings[0])>0&&strcmp(strings[1],strings[2])>0&&strcmp(strings[1],strings[3])>0)
{

    recomp(strings);
     printf("player2 take it  \n");
     score2=score2+1;
     g=2;
}
comp(strings);
if(strcmp(strings[2],strings[0])>0&&strcmp(strings[2],strings[1])>0&&strcmp(strings[2],strings[3])>0)
{

    recomp(strings);
     printf("player3 take it  \n");
     score3=score3+1;
     g=3;
}
comp(strings);
if(strcmp(strings[3],strings[0])>0&&strcmp(strings[3],strings[2])>0&&strcmp(strings[3],strings[1])>0)
{

    recomp(strings);
     printf("player4 take it  \n");
     score4=score4+1;
     g=4;
}
recomp(strings);

    //reterning the zzz to t,d,h,s
    if(colo==1)
     {
         reatoo_t(strings);
     }
    if(colo==2)
     {
         reatoo_d(strings);
     }
    if(colo==3)
     {
         reatoo_h(strings);
     }
    if(colo==4)
     {
         reatoo_s(strings);
     }
   //returning the 1

   for(int i=0;i<4;i++)
   {
      if(strcmp(strings[i],"1")==0)
       {
         strings[i]=strdup(str_0123[i]);
       }
   }

//deleting cards from players
 char str[100]={""};
  for(int i=0;i<13;i++)
  {
      if(strcmp(strings[0],player1[i])==0)
      {
           player1[i]=strdup(str);
      }
  }
  for(int i=0;i<13;i++)
  {
      if(strcmp(strings[1],player2[i])==0)
      {
           player2[i]=strdup(str);
      }
  }
  for(int i=0;i<13;i++)
  {
      if(strcmp(strings[2],player3[i])==0)
      {
           player3[i]=strdup(str);
      }
  }
  for(int i=0;i<13;i++)
  {
      if(strcmp(strings[3],player4[i])==0)
      {
           player4[i]=strdup(str);
      }
  }
//printing the cards after delete
printf("player1 cards are :\n");
 for(int i=0;i<13;i++)
 {
     printf("%s | ",player1[i]);
 }
printf("\nplayer2 cards are :\n");
 for(int i=0;i<13;i++)
 {
     printf("%s | ",player2[i]);
 }
printf("\nplayer3 cards are :\n");
 for(int i=0;i<13;i++)
 {
     printf("%s | ",player3[i]);
 }
printf("\nplayer4 cards are :\n");
 for(int i=0;i<13;i++)
 {
     printf("%s | ",player4[i]);
 }
//print the score
printf("\nthe score of player1 is %d/%d || player2 is %d/%d || player3 is %d/%d || player4 is %d/%d \n",score1,n1,score2,n2,score3,n3,score4,n4);


}//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//check who wins/loses
 int p1,p2,p3,p4;
  if(score1==n1)
   {
      p1= calco(score1,n1);
      point1=point1+ p1;
      printf("player1 asked for %d and got %d so he wins and his score is %d \n",n1,score1,point1);
   }
  else if(score1 != n1)
   {
      p1= calco(score1,n1);
      point1=point1+ p1;
       printf("player1 asked for %d and got %d so he loses and his score is %d \n",n1,score1,point1);
   }
  if(score2==n2)
   {
      p2= calco(score2,n2);
      point2=point2+ p2;
      printf("player2 asked for %d and got %d so he wins and his score is %d \n",n2,score2,point2);
   }
  else if(score2 != n2)
   {
      p2= calco(score2,n2);
      point2=point2+ p2;
       printf("player2 asked for %d and got %d so he loses and his score is %d \n",n2,score2,point2);
   }
  if(score3==n3)
   {
      p3= calco(score3,n3);
      point3=point3+ p3;
      printf("player3 asked for %d and got %d so he wins and his score is %d \n",n3,score3,point3);
   }
  else if(score3 != n3)
   {
      p3= calco(score3,n3);
      point3=point3+ p3;
       printf("player3 asked for %d and got %d so he loses and his score is %d \n",n3,score3,point3);
   }
  if(score4==n4)
   {
      p4= calco(score4,n4);
      point4=point4+ p4;
      printf("player4 asked for %d and got %d so he wins and his score is %d \n",n4,score4,point4);
   }
  else if(score4 != n4)
   {
      p4= calco(score4,n4);
      point4=point4+ p4;
       printf("player4 asked for %d and got %d so he loses and his score is %d \n",n4,score4,point4);
   }






}
//the king / the kooz
int a[4]={point1,point2,point3,point4};
int max=a[0];
int min = a[0];
for(int i=0;i<4;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
    if(min>a[i])
    {
        min=a[i];
    }
}
for(int i=0;i<4;i++)
{
    if(max==a[i])
    {
        printf("   | --------       player%d is the KING :)   -------   |       \n",i+1);
    }
}
for(int i=0;i<4;i++)
{
    if(min==a[i])
    {
        printf("    | --------       player%d is the KOZZ :(   -------    |     \n",i+1);
    }
}

int x=5;
scanf("%d",&x);
  return 0;
}
