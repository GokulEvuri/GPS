#include "ringbuffer.h"

#define START 0
#define END 0
#define MAXSTACK 100
#define EMPTYSTACK -1

int start = START;
int end = END;
int mark = 0;
char items[MAXSTACK];

void push(char c) {
  if(mark>=MAXSTACK){
    printf("buffer is full");
  }
  else{
   items[end] = c;
   mark++;
   end++;
  }
}

char pop() {
  if(start==end){
    printf("buffer is empty");
    return -1;
  }
  else{
  int local = start;
  start++;
  mark--;
  return items[local]; 
  }
}

/*returns -1 if NOT full | in case of buffer is full returns 0*/
char full()  {
  return mark>=MAXSTACK
}

int empty()  {
   return start==end
}
