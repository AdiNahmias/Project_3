#include<stdio.h>
#include<math.h>
#define SIZE_ARR 50


void shift_element(int* arr, int i){
    for(int j=i; j>0; j--){
        *(arr+j+1)= *(arr + j);
    }

}


void insertion_sort(int* arr, int len){

    int count = 0;

    for(int j=0; j<len; j++){

        while (*(arr+j)<*(arr+j-count-1) && (count!=j)){
       
                count++;
            }

            int temp = *(arr+j);
              
            shift_element(arr+j-count-1, count);

            *(arr+j-count)=temp;

            count=0;
                      
        }
        
    }



void print(int *arr, int size_arr) {

	for(int i = 0; i < size_arr-1; i++){
    
	printf("%d,", *(arr++));

    }
    printf("%d", *(arr));     
	printf("\n");
}




int main(){

    int number[SIZE_ARR];
    
    for (int i = 0; i < SIZE_ARR; i++){
    
       scanf("%d",&(*(number+i)));  
    }

    insertion_sort(number,SIZE_ARR);
    
    print(number,SIZE_ARR);

    return 0;

}

    



