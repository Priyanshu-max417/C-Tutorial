#include <stdio.h>
int main(){

int aadher[5];
int *ptr = &aadher[0];

// for Input in Array
for(int i = 0; i<5; i++){
    printf("%d indax: ",i);
    scanf("%d",(ptr + i));
}
// For Give Output in Array
for(int i = 0; i<5; i++){
    printf("%d indax = %d\n", i , *(ptr + i));
}

    return 0;
}

//////////////////////////// Find the odd numbers in an array 

#include <stdio.h>
void newFunc(int arr[] , int n);

int main(){

    int arr[] = {10, 22,23,78,97,57,45,32,11,90};
    newFunc( arr ,10 );
    return 0;    
}

 void newFunc(int arr[] , int n){
    for(int i = 0; i<n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}

///////////////////////////// Find the odd numbers in an array by using Pointer 
#include <stdio.h>
void newFunc(int* ptr , int n);

int main(){

    int arr[] = {10, 22,23,78,97,57,45,32,11,90};
    int *ptr =&arr[0];
    newFunc( ptr ,10 );
    return 0;    
}

 void newFunc(int* ptr , int n){
    for(int i = 0; i<n; i++){
        if(*(ptr + i) % 2 != 0){
            printf("%d ", *(ptr + i));
        }
    }
 }


 /////////////////////////////////////// Reverse an Array /////
 #include <stdio.h>

void reverseArray(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5};
    reverseArray(arr, 5);
    printArr(arr, 5);
    return 0;    
}

void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

void reverseArray(int arr[], int n) {
    for(int i = 0; i < n/2; i++){
        int first = arr[i];
        int second = arr[n - i - 1];
        arr[i] = second;
        arr[n - i - 1] = first;
    }
}

//////////////////////////////// Fibonacci Series using Array /////
#include <stdio.h>
    int main(){
    int n;
    printf("Enter your (Number >2) :  ");
    scanf("%d", &n);
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    printf("%d \n", arr[0]);
    printf("%d \n", arr[1]);
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d \n", arr[i]);
    }
    return 0;
}

////////////////////////////////// Store Table in 2D Array
#include <stdio.h>
void printTable(int arr[2][10],int row, int colm, int num); 
int main(){
    int num = 2;
    int arr[2][10];
    printTable(arr,1,10,2);
    printTable(arr,2,10,5);
    return 0;
}
void printTable(int arr[2][10],int row, int colm, int num){
    
    for(int i = 0; i<=colm; i++){
        arr[row][i]= num * (i+1);
        printf("%d * %d = %d\n",num,(i+1),arr[row][i]);
    }
}

