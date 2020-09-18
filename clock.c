#include <drawlib.h>
#include <stdio.h>
#include <time.h>


int main(void) {
  char sclock[] = "time:   ";
  int clockx = 85, clocky = 45; 
  char clock; 
   for (int i = 60; i >= 0; i--) {
       clock_t t = clock();
       while ((clock() - t) > CLOCKS_PER_SEC);
         sprintf(sclock, "    :%d", clock);
         dl_text(sclock, clockx, clocky, 1.0, DL_C("red"), 2);
      fflush(stdout);
   }   
}
