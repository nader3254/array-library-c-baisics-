#include "a1d.h"
int a_sum(int arr1,int sz1)
//////////////////////////////////////////////////////////////
int a_max(int arr0[],int sz0)
{
    int r0,i;
    r0=arr[0];for(i=1;i<sz0;i++)
    {
        if(arr0[i]>r0)
          {
              r0=arr0[i];
          }
    }return r0;

}
/////////////////////////////////
void a_init(int arr2[],int sz2)
{
    printf("Enter arr elem : ");
    for(int i=0;i<sz2;i++)
    {
scanf("%d",&arr2[i]);
    }
}
////////////////////////////////
void a_prt(int arr3[],int sz3)
{
    for(int i=0;i<sz3;i++)
    {
        printf("%d\n",arr3[i]);
    }
    printf("Thank you\n");
}
/////////////////////////////////////
void a_insrt(int arr4[],int sz4)
{int n4=0,p4=0;int i=0;
printf("Enter the new value : ");scanf("%d",&n4);
printf("Enter the position : ");scanf("%d",&p4);
for(i=sz4-1;i>=p4-1;i--)
{
   arr4[i+1]=arr4[i];if(i==p4-1){arr4[i]=n4;}
}
printf("\nThank you\n");

}
void a_upd(int arr5[])
{int p5=0;
    printf("Enter the update position : \n")
    ;scanf("%d",&p5);
     printf("Enter the update value : \n")
;    int val=0;scanf("%d",&val);
    arr[p5-1]=val;
     printf("\nthank you\n");
}
void a_dlt(int arr6[],int sz6)
{
    int p6=0;
    printf("Enter the delet position : \n")
    ;scanf("%d",&p6);
    for(int i=p6-1;i<sz6;i++)
    {
        arr6[i]=arr6[i+1];
    }
    printf("\nthank you\n");
}
int a_srch(int arr7[],int sz7)//if returned value =4000 then no search value has founded
{int p7 =0;bool f=false;
     printf("Enter the search value : \n");
   int val7=0;scanf("%d",&val7);
   for (int i=0;i<sz7;i++)
    {
        if(arr7[i]==val7){p7=i;f=true;}
    }
    if(f==true)
   {

   printf("The position is : %d",p7+1);}
   else{

       printf("The value is not found in the array \n");
    p7=4000;
   }
   printf("Thank you \n");
   return p7;
}
///////////////////////////////////////////////////

//////////////////////////////////////////
int a_sum(int arr1,int sz1)
{int sum=0;//int * p =&arr;

    for(int i=0;i<sz;i++)
    {int* p = arr;
       // printf("arr[%d] = %d\n",i,*(p+i));
        sum=sum+(int)*(p+i);
    }
    return sum;
}
int a_modsrch(int arr9[],int sz9, int val9)//returned value is position
{int p9 =0;
    // printf("Enter the search value : \n");

   for (int i=0;i<sz9;i++)
    {
        if(arr9[i]==val9){p9=i;}
    }

   return p9;
}
/////////////////////////////////////////
void a_srt1(int arr10[],int sz10)
{
    for(int i=0;i<sz10;i++)
    {
        for(int j=0;j<sz;j++)
        {
            if(arr10[i]<arr10[j]&&j>i)
            {
                int x=arr10[i];
                arr10[i]=arr10[j];
                arr10[j]=x;
            }

        }

    }
}
///////////////////////////////////////////////////////
void a_srt2(int arr11[],int sz11)
{
    for(int i=0;i<sz11;i++)
    {
        for(int j=0;j<sz11;j++)
        {
            if(arr11[i]>arr11[j]&&j>i)
            {
                int x11=arr11[i];
                arr11[i]=arr11[j];
                arr11[j]=x;
            }

        }

    }
}
///////////////////////////////////////////////////////
int a_min(int arr12[],int sz12)
{
    int r12,i12;
    r12=arr12[0];for(i12=1;i12<sz12;i12++)
    {
        if(arr12[i12]<r12)
          {
              r12=arr12[i12];
          }
    }return r12;

}
int a_sub(int arr13,int sz13)
{int sum13=0;//int * p =&arr;

    for(int i=0;i<sz;i++)
    {int* p13 = arr13;
       // printf("arr[%d] = %d\n",i,*(p+i));
        sum13=sum13-(int)*(p13+i);
    }
    return sum13;
}
