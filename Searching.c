#include <stdio.h>
int main(){
    int Room[10] = {101,102,103,104,105,106,107,108,109,110};
    int target; 
    int i;
    int found = 0;

    printf("Enter a number from 101 to 110please:");
    scanf("%d", &target);


    for(i = 0; i < 10; i++){
        if(Room[i] == target){
            printf("Found at index:%d", i);
            break;
        
        }
       
        }
          return 0;
    }
  
