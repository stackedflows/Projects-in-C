#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// calculates the largest digit in an array
int max(int * array, int len){
  int init = array[0];
  for(int i = 1; i < len; i++){
    if(array[i] > init){
      init = array[i];
    }else{
      continue;
    }
  }
  return init;
}

// calculates the number of powers of 10 in a number
int digits(int item){
  int magnitude = 0;
  int holder = item;
  while(holder >= 1){
    magnitude++;
    holder /= 10;
  }
  return magnitude;
}

// calculates the power of a number
int power(int arg, int pwr){
  int base = 1;
  for(int i = 0; i < pwr; i++){
    base *= arg;
  }
  return base;
}

// calculates the nth digit of a number
int high_sig_plc_val(int item, int digits){
  int divide = 10 * (digits - 1);
  return(floor(item / divide));
}

// useful for large digit arrays
void radix_sort(int * array, int size, int maxDigit){
}

// useful for small digit arrays
int * counting_sort(int * arr, int len){
  int mx = max(arr, len) + 1;
  int * index = malloc(mx * sizeof(int));
  for(int i = 0; i < mx; i++){
    index[i] = 0;
  }
  for(int i = 0; i < len; i++){
    int item = arr[i];
    index[item]++;
  }
  for(int i = 1; i < mx; i++){
    index[i] = index[i] + index[i - 1];
  }
  int * places = malloc(len * sizeof(int));
  for(int i = 0; i < len; i++){
    int loc = index[arr[i]] - 1;
    places[loc] = arr[i];
    index[arr[i]]--;
  }
  return places;
}

int main(void){
  int arr[] = {10, 4, 3, 5, 2, 7, 4, 5, 2, 11};

  return 0;
}
