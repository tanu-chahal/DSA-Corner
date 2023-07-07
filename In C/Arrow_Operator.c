//Use of arrow operator with structures
#include<stdio.h>
#include<string.h>

typedef struct student{
char name[25];
int roll;
} stu;

int main(){
 stu s1; stu *ptr;
 printf("Using Pointer\n");
  *ptr = s1;
 // Giving values using pointer, here two ways are possible which are: (*ptr).name and ptr->name.
 // Both means the same gives same result.

 strcpy(ptr->name,"Tanu Chahal");
  //strcpy(s1.name,"Tanu Chahal");
  printf("Name is %s\n", ptr->name);

  ptr->roll = 30;
  //s1.roll = 30;
  printf("Roll No. is %d\n",ptr->roll);
 return 0;
}
