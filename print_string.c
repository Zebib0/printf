#include "main.h"

void print_string(char* s){
  int size = strlen(s);
  for(int i = 0; i < size; i++){
    putchar(s[i]);
  }
}
