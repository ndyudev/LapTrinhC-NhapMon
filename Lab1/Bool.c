#include<stdio.h>
#include <stdbool.h>
 
int main() 
{ 
    bool value = false;
    if (value) { // tương đương với kiểm tra value == true
      printf("value is true");  
  } else {
    printf("value is false");
  } 
}
