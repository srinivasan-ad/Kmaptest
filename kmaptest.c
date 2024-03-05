#include <stdio.h>
int arr[8];
int input[8];
int size = 0;
int quad,octet=0;
int quad5val[3],quad6val[3];
int sizearr(int size) {
    return size;
}
// storing input in array fo map
void storing(int input[], int size) {
    int i, j = 0;
    for (i = 0; i < 8; i++) {
        if (j < size) {
            if (input[j] == i) {
                arr[i] = 1;
                j++; 
            } else {
                arr[i] = 0;
            }
        } else {
            arr[i] = 0;
        }
    }
}

void display() {
    int i = 0;
    for (i = 0; i < 8; i++) {
        printf("%d \t", arr[i]);
    }
}
int quadandoctet(int arr[]){
int i,j,k=0;
int mid =4;
int start =0;
int end=8;
int quad1=0;
int quad2=0;
int quad3=0;
int quad4 =0;
int quad5=0;
int quad6=0;
printf("\n%d\n",quad1);

for ( j = 0; j < mid; j++)
{
    // center and roll map
    if (arr[2*j] == 1){
        quad1++;
        if(quad1==4){
            quad++;
        }
    }
    if (arr[2*j+1] == 1){
        quad2++;
        if(quad2==4){
            quad++;
        }
    }
//  checking rows 
    if(arr[j]==1){
        quad3++;
           if(quad3==4){
            quad++;
        }
    }
    if(arr[j+4]==1){
        quad4++;
           if(quad4==4){
            quad++;
        }
    }
}
for ( k = 1; k <= 2; k++)
{
//   checking 2 vetical halves of map
    if(arr[end-k]==1 && arr[mid-k]==1){
        quad5++;
          if(quad5==2){
            quad++;
        } 
    }
    if(arr[start+(k-1)]==1 && arr[mid+(k-1)]==1){
        quad6++;
          if(quad6==2){
            quad++;
        } 
    }
}
printf("quad1 :%d",quad1);
printf("quad2 :%d",quad2);
printf("quad3 :%d",quad3);
printf("quad4 :%d",quad4);
printf("quad5 :%d",quad5);
printf("quad6 :%d",quad6);
    printf("quad 5 values : \n");
for(int o =0 ; quad5val[o]!='\0';i++){
    printf("%d\t",quad5val[o]);
}




return quad;


}
//Starting pairs
int pairs(int arr[],int input[]){
    if(quad==0){
 
    }
}

int main() {
    int i = 0;
    char l;
    printf("Enter the values of the input array , in the start press n :\n");
    for (i = 0; i < 8; i++) {
        printf("To terminate input press y \n");
        scanf("%c", &l);
        if (l == 'y') {
            break;
        } else {
            printf("Enter input %d\n", i);
            scanf("%d", &input[i]);
            size++;
        }
    }
printf("%d\n",size);
    storing(input, size);
    display();
    int q=quadandoctet(arr);
    if(q<6){

 printf("\nNumber of quads are : %d ",q);
    }
   else{
    printf("Number of octets are : 1\n");
   }
printf("quad : %d",quad);
    return 0;
}
