// A program to compare two timestamps using structures and function
#include<stdio.h>
typedef struct timestamp{
int date;
int month;
int year;
int hour;
int min;
int sec;
} timestamp;

 void display(timestamp t){
     printf("The timestamp is: %d/%d/%d/ %d:%d:%d\n", t.date,t.month,t.year,t.hour,t.min,t.sec);
 };

 int timestampCmp(timestamp t1,timestamp t2){
 if(t1.year>t2.year)
   {return 1;}

 if(t1.year<t2.year)
 {return -1;}

 if(t1.month>t2.month)
 {return 1;}

 if(t1.month<t2.month)
 {return -1;}

 if(t1.date>t2.date)
 {return 1;}

  if(t1.date<t2.date)
 {return -1;}

  if(t1.hour>t2.hour)
 {return 1;}

  if(t1.hour<t2.hour)
 {return -1;}

  if(t1.min>t2.min)
 {return 1;}

  if(t1.min<t2.min)
 {return -1;}

  if(t1.sec>t2.sec)
 {return 1;}

  if(t1.sec<t2.sec)
 {return -1;}

return 0;
};

int main(){
timestamp t1={12,3,22,12,56,59}; timestamp t2={30,9,22,5,56,45};

display(t1);
display(t2);

int a= timestampCmp(t1,t2);
printf("The Timestamps Comparison Function Returns: %d\n",a);
return 0;
}
