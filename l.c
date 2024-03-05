#include <stdio.h>
#include <string.h>

int arr[8];
int input[8];
int size = 0;
int quad,octet=0;
int sizearr(int size) {
    return size;
}

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
for ( i = 0; i < 4; i++)
{
    // center and roll map
    if (arr[2*i] == 1){
        quad1++;
        if(quad1==4){
            quad++;
        }
    }
    if (arr[2*i+1] == 1){
        quad1++;
        if(quad2==4){
            quad++;
        }
    }
}
for ( j = 0; j < mid; j++)
{
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
    if(arr[end-k]==1 || arr[mid-k]==1){
        quad5++;
          if(quad5==4){
            quad++;
        } 
    }
    if(arr[start+(i-k)]==1 || arr[mid+(i-k)]==1){
        quad6++;
          if(quad6==4){
            quad++;
        } 
    }
}
printf("%d",quad1);
if(quad3==4 && quad4==4){
    octet=1;
    return octet;
}
else{

return quad;
}

}

int main() {
    int i = 0;
    char l;
    printf("Enter the values of the input array :\n");
    for (i = 0; i < 8; i++) {
        printf("To terminate input press 9 \n");
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
    if(q==quad){
        printf("Number of quads are : %d , Number of octets are : 0",q);
    }
    else{
        printf("Number of quads are : 0, Number of octets are : %d",q);
    }
printf("quad : %d",quad);
    return 0;
}
