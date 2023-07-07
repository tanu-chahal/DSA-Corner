//creating custom arrays using adts
#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int totalSize;
    int usedSize;
    int *baseAdd;
};

void createArray(struct myArray * a,int tsize, int usize){
    a->totalSize = tsize;
    a->usedSize = usize;
    a->baseAdd = (int *)malloc(tsize*sizeof(int));
    printf("\nSuccesfully! Created your custom array.\n");
}

void inputArray(struct myArray * a){
    int n;
    for(int i=0;i<a->usedSize;i++){
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&n);
        a->baseAdd[i] = n;
    }
}

void showArray(struct myArray *a){
    printf("\nYour array is:\n");
    for(int i=0;i<a->usedSize;i++){
        printf("\nElement %d: %d",i+1,a->baseAdd[i]);
    }
}

int main(){
struct myArray marks;
int usize,tsize;
printf("\nWhat is the expected maximum size?\n: ");
scanf("%d",&tsize);
printf("\nHow many elements you wanna enter?\n: ");
scanf("%d",&usize);
createArray(&marks,10,usize);
inputArray(&marks);
showArray(&marks);
return 0;
}
