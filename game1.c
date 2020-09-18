#include <drawlib.h>
#include <stdio.h>
#include <time.h>


int main(void) {
  float wait_time = 0.05;
  
  int a, b, x, y;
  int line1_l = 100, line1_r = 300,line1_t = 70, line1_b = 400;
  int heroix = 30, heroiy = 50, heror = 10;
  int herodx = 10;
  int herody = 10;
  int herox = heroix, heroy = heroiy;
  int hero_up = DL_KEY_UP;
  int hero_down = DL_KEY_DOWN;
  int hero_left = DL_KEY_LEFT;
  int hero_right =DL_KEY_RIGHT;
  
  int life = 3;
  int lifex = 45, lifey = 45; 
  char slife[] = "life:   ";
   

  
  dl_initialize(1.5);
     
   while (1){
   
   
     while (dl_get_event(&a, &b, &x, &y)) {
       if (a == DL_EVENT_KEY) {
        if(b == hero_up)
           heroy -= herody;
         else if (b == hero_down)
           heroy += herody;
         else if (b == hero_left)
           herox -= herodx;
         else if (b == hero_right)
           herox += herodx;
        }
      }
      
   /*if (line1y - heroy <= 0){
      life--;
      heroy = heroy - 10;
     }  
   */
    
    if ((line1_l <= herox) && (line1_r >= herox) && (line1_t <= heroy) && (line1_b >= heroy)){
      life--;
      if(line1_l <= herox)
        heroy = heroy + 10;
      else if (line1_r >= herox)
        herox = herox + 10;
      if (line1_t <= heroy)
        heroy = heroy + 10;
     else if (line1_b >= heroy)
        heroy = heroy - 10;
     }     
  
  
   dl_clear(dl_color_from_name("black")); 
   dl_circle(herox, heroy, heror, dl_color_from_name("white"), 1, 1);             
 /*  dl_line(100, line1y, 300, line1y, dl_color_from_name("green"), 2); */
   dl_line(line1_l, line1_t, line1_l, line1_b, dl_color_from_name("green"), 2);
   dl_line(line1_r, line1_t, line1_r, line1_b, dl_color_from_name("green"), 2);
   dl_line(line1_l, line1_t, line1_r, line1_t, dl_color_from_name("green"), 2);
   dl_line(line1_l, line1_b, line1_r, line1_b, dl_color_from_name("green"), 2);
/* dl_line( , , , , dl_color_from_name("green"), 2);
   dl_line( , , , , dl_color_from_name("green"), 2);
   dl_line( , , , , dl_color_from_name("green"), 2);
   dl_line( , , , , dl_color_from_name("green"), 2);
   dl_line( , , , , dl_color_from_name("green"), 2);
*/              
   dl_text("life", lifex, lifey, 1.0, dl_color_from_name("red"), 1);  
   
   sprintf(slife, "   :%d", life);
   dl_text(slife, lifex, lifey, 1.0, DL_C("red"), 2);
   
    
   dl_wait(wait_time); 
   } 
  
  while (1) {
    dl_wait(10);
   }
 
      
  return 0;
}
   
