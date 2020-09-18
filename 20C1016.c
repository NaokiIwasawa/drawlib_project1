#include <drawlib.h>
#include <stdio.h>

int main(void) {
  float wait_time = 0.1;
  
  int a, b, x, y;
  int i, l;
  /*--15本文のライン宣言。lが左のx座標、rが右のx座標、tが上のy座標、bが下のy座標を示す--*/
  int line1_l = 20, line1_r = 170, line1_t = 200, line1_b = 340;
  int line2_l = 0, line2_r = 40, line2_t = 360, line2_b = 480;
  int line3_l = 160, line3_r = 200, line3_t = 400, line3_b = 480;
  int line4_l = 60, line4_r = 500, line4_t = 360, line4_b = 400;
  int line5_l = 0, line5_r = 190, line5_t = 140, line5_b = 180;
  int line6_l = 190, line6_r = 230, line6_t = 20, line6_b = 340;
  int line7_l = 230, line7_r = 620, line7_t = 40, line7_b = 80;
  int line8_l = 310, line8_r = 640, line8_t = 120, line8_b = 160;
  int line9_l = 270, line9_r = 310, line9_t = 100, line9_b = 200;
  int line10_l = 260, line10_r = 410, line10_t = 200, line10_b = 340;
  int line11_l = 430, line11_r = 480, line11_t = 180, line11_b = 360;
  int line12_l = 500, line12_r = 560, line12_t = 180, line12_b = 440;
  int line13_l = 560, line13_r = 640, line13_t = 340, line13_b = 480;
  int line14_l = 580, line14_r = 640, line14_t = 220, line14_b = 320;
  int line15_l = 300, line15_r = 400, line15_t = 420, line15_b = 470;
  
  /*---------heroに関する宣言------*/
  int heroix = 100, heroiy = 450, heror = 10;
  int herodx = 10;
  int herody = 10;
  int herox = heroix, heroy = heroiy;
  int hero_up = DL_KEY_UP;
  int hero_down = DL_KEY_DOWN;
  int hero_left = DL_KEY_LEFT;
  int hero_right =DL_KEY_RIGHT;
  
  /*----lifeに関する宣言----*/
  int life = 15;
  int lifex = 45, lifey = 45; 
  char slife[] = "life:   ";   
  
  dl_initialize(1.5);
     
   while (1){
   
  /*-----十字キーによる操作-----*/ 
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
      
   
  /*---壁にぶつかったかの判定。線によって実行内容が異なる物もある---*/  
    if ((line1_l <= herox) && (line1_r >= herox) && (line1_t <= heroy) && (line1_b >= heroy)){
    
     if ((herox == 90) && (heroy == 270)) {
        life = life + 2; 
     }
     
     if (line1_l <= herox)
        herox = herox + 10;
      else if (line1_r >= herox)
        herox = herox - 10;
      else if (line1_t < heroy)
        heroy = heroy + 10;
      else if (line1_b >= heroy)
        heroy = heroy - 10;
     }          
  
    if ((line2_l <= herox) && (line2_r >= herox) && (line2_t <= heroy) && (line2_b >= heroy)){
      life--;
      if (line2_l < herox)
        herox = herox + 10;
      if (line2_r >= herox)
        herox = herox - 10;
      if (line2_t < heroy)
        heroy = heroy + 10;
      if (line2_b >= heroy)
        heroy = heroy - 10;
     } 
  
     if ((line3_l <= herox) && (line3_r >= herox) && (line3_t <= heroy) && (line3_b >= heroy)){
      life = life - 5;
      if (line3_l < herox)
        herox = herox + 10;
      if (line3_r >= herox)
        herox = herox - 10;
      if (line3_t < heroy)
        heroy = heroy + 10;
      if (line3_b >= heroy)
        heroy = heroy - 10;
     } 
   
     if ((line4_l <= herox) && (line4_r >= herox) && (line4_t <= heroy) && (line4_b >= heroy)){
      life = life - 5 ;
      if (line4_l < herox)
        herox = herox + 10;
      if (line4_r >= herox)
        herox = herox - 10;
      if (line4_t < heroy)
        heroy = heroy + 10;
      if (line4_b >= heroy)
        heroy = heroy - 10;
     } 
  
     if ((line5_l <= herox) && (line5_r >= herox) && (line5_t <= heroy) && (line5_b >= heroy)){
      life--;
      if (line5_l < herox)
        herox = herox + 10;
      if (line5_r >= herox)
        herox = herox - 10;
      if (line5_t < heroy)
        heroy = heroy + 10;
      if (line5_b >= heroy)
        heroy = heroy - 10;
     } 
  
     if ((line6_l <= herox) && (line6_r >= herox) && (line6_t <= heroy) && (line6_b >= heroy)){
      life--;
      if (line6_l < herox)
        herox = herox + 10;
      if (line6_r >= herox)
        herox = herox - 10;
      if (line6_t < heroy)
        heroy = heroy + 10;
      if (line6_b >= heroy)
        heroy = heroy - 10;
     } 
  
    if ((line7_l <= herox) && (line7_r >= herox) && (line7_t <= heroy) && (line7_b >= heroy)){
      life--;
      if (line7_l < herox)
        herox = herox + 10;
      if (line7_r >= herox)
        herox = herox - 10;
      if (line7_t < heroy)
        heroy = heroy + 10;
      if (line7_b >= heroy)
        heroy = heroy - 10;
     } 
  
     if ((line8_l <= herox) && (line8_r >= herox) && (line8_t <= heroy) && (line8_b >= heroy)){
      life--;
      if (line8_l < herox)
        herox = herox + 10;
      if (line8_r >= herox)
        herox = herox - 10;
      if (line8_t < heroy)
        heroy = heroy + 10;
      if (line8_b >= heroy)
        heroy = heroy - 10;
     } 
     
     if ((line9_l <= herox) && (line9_r >= herox) && (line9_t <= heroy) && (line9_b >= heroy)){
      life--;
      if (line9_l < herox)
        herox = herox + 10;
      if (line9_r >= herox)
        herox = herox - 10;
      if (line9_t < heroy)
        heroy = heroy + 10;
      if (line9_b >= heroy)
        heroy = heroy - 10;
     } 
    
      if ((line10_l <= herox) && (line10_r >= herox) && (line10_t <= heroy) && (line10_b >= heroy)){
         
      if((herox == 340) && (heroy == 270)) {
        life = life + 2; 
     }
      if(line10_l < herox)
        heroy = heroy + 10;
      else if (line10_r >= herox)
        herox = herox + 10;
      else if (line10_t < heroy)
        heroy = heroy + 10;
      else if (line10_b >= heroy)
        heroy = heroy - 10;
      
     }     
  
    if ((line11_l <= herox) && (line11_r >= herox) && (line11_t <= heroy) && (line11_b >= heroy)){
      life--;
      if (line11_l < herox)
        herox = herox + 10;
      if (line11_r >= herox)
        herox = herox - 10;
      if (line11_t < heroy)
        heroy = heroy + 10;
      if (line11_b >= heroy)
        heroy = heroy - 10;
     } 
    
     if ((line12_l <= herox) && (line12_r >= herox) && (line12_t <= heroy) && (line12_b >= heroy)){
      life--;
      if (line12_l < herox)
        herox = herox + 10;
      if (line12_r >= herox)
        herox = herox - 10;
      if (line12_t < heroy)
        heroy = heroy + 10;
      if (line12_b >= heroy)
        heroy = heroy - 10;
     } 
    
    if ((line13_l <= herox) && (line13_r >= herox) && (line13_t <= heroy) && (line13_b >= heroy)){
      life--;
      if (line13_l < herox)
        herox = herox + 10;
      if (line13_r >= herox)
        herox = herox - 10;
      if (line13_t < heroy)
        heroy = heroy + 10;
      if (line13_b >= heroy)
        heroy = heroy - 10;
     } 
     
    if ((line14_l <= herox) && (line14_r >= herox) && (line14_t <= heroy) && (line14_b >= heroy)){
      life--;
      if (line14_l < herox)
        herox = herox + 10;
      if (line14_r >= herox)
        herox = herox - 10;
      if (line14_t < heroy)
        heroy = heroy + 10;
      if (line14_b >= heroy)
        heroy = heroy - 10;
     } 
    
   /*---枠外にいかないようにする。出たら初期の位置に飛ぶ。---*/ 
     if ((herox <= 0) || (herox >= 640) || (heroy <= 0) || (heroy >= 480)){
       herox = heroix;
       heroy = heroiy;
     }
     
   /*---ワープに関する設定---*/  
     if (herox == 490 && heroy == 350){
       herox = 90;
       heroy = 270;
     }  
     
      if (herox == 630 && heroy == 330){
       herox = 340;
       heroy = 270;
     }
     
       if (herox == 60 && heroy == 110 && life >= 30){
       herox = 520;
       heroy = 465;
     }   
             
       
   /*---壁以外の描画---*/    
   dl_clear(dl_color_from_name("black")); 
   dl_circle(herox, heroy, heror, dl_color_from_name("white"), 1, 1);   
   dl_text("life", lifex, lifey, 1.0, dl_color_from_name("red"), 1); 
         
   sprintf(slife, "   :%d", life);
   dl_text(slife, lifex, lifey, 1.0, DL_C("red"), 2);
   dl_circle(340, 270, heror, dl_color_from_name("red"), 1, 1);
   dl_circle(95, 270, heror, dl_color_from_name("red"), 1, 1);
   dl_circle(60, 110, heror, dl_color_from_name("cyan"), 1, 0);
   dl_circle(490, 350, heror, dl_color_from_name("cyan"), 1, 0);
   dl_circle(630, 330, heror, dl_color_from_name("cyan"), 1, 0);
   
   /*---GOALだけは条件を満たした時に表示されるようにしている---*/
   if (life >= 30){
       dl_text("GOAL", 310, 455, 1.0, dl_color_from_name("blue"), 2);
     }  
        
 /*---------------------------壁の描画----------------------------------------*/
 
   dl_line(line1_l, line1_t, line1_l, line1_b, dl_color_from_name("green"), 2);
   dl_line(line1_r, line1_t, line1_r, line1_b, dl_color_from_name("green"), 2);
   dl_line(line1_l, line1_t, line1_r, line1_t, dl_color_from_name("green"), 2);
   dl_line(line1_l, line1_b, line1_r, line1_b, dl_color_from_name("green"), 2);
   
   dl_line(line2_l, line2_t, line2_l, line2_b, dl_color_from_name("green"), 2);
   dl_line(line2_r, line2_t, line2_r, line2_b, dl_color_from_name("green"), 2);
   dl_line(line2_l, line2_t, line2_r, line2_t, dl_color_from_name("green"), 2);
   dl_line(line2_l, line2_b, line2_r, line2_b, dl_color_from_name("green"), 2);
   
   dl_line(line3_l, line3_t, line3_l, line3_b, dl_color_from_name("green"), 2);
   dl_line(line3_r, line3_t, line3_r, line3_b, dl_color_from_name("green"), 2);
   dl_line(line3_l, line3_t, line3_r, line3_t, dl_color_from_name("green"), 2);
   dl_line(line3_l, line3_b, line3_r, line3_b, dl_color_from_name("green"), 2);
   
   dl_line(line4_l, line4_t, line4_l, line4_b, dl_color_from_name("green"), 2);
   dl_line(line4_r, line4_t, line4_r, line4_b, dl_color_from_name("green"), 2);
   dl_line(line4_l, line4_t, line4_r, line4_t, dl_color_from_name("green"), 2);
   dl_line(line4_l, line4_b, line4_r, line4_b, dl_color_from_name("green"), 2);
   
   dl_line(line5_l, line5_t, line5_l, line5_b, dl_color_from_name("green"), 2);
   dl_line(line5_r, line5_t, line5_r, line5_b, dl_color_from_name("green"), 2);
   dl_line(line5_l, line5_t, line5_r, line5_t, dl_color_from_name("green"), 2);
   dl_line(line5_l, line5_b, line5_r, line5_b, dl_color_from_name("green"), 2);
   
   dl_line(line6_l, line6_t, line6_l, line6_b, dl_color_from_name("green"), 2);
   dl_line(line6_r, line6_t, line6_r, line6_b, dl_color_from_name("green"), 2);
   dl_line(line6_l, line6_t, line6_r, line6_t, dl_color_from_name("green"), 2);
   dl_line(line6_l, line6_b, line6_r, line6_b, dl_color_from_name("green"), 2);
   
   dl_line(line7_l, line7_t, line7_l, line7_b, dl_color_from_name("green"), 2);
   dl_line(line7_r, line7_t, line7_r, line7_b, dl_color_from_name("green"), 2);
   dl_line(line7_l, line7_t, line7_r, line7_t, dl_color_from_name("green"), 2);
   dl_line(line7_l, line7_b, line7_r, line7_b, dl_color_from_name("green"), 2);
   
   dl_line(line8_l, line8_t, line8_l, line8_b, dl_color_from_name("green"), 2);
   dl_line(line8_r, line8_t, line8_r, line8_b, dl_color_from_name("green"), 2);
   dl_line(line8_l, line8_t, line8_r, line8_t, dl_color_from_name("green"), 2);
   dl_line(line8_l, line8_b, line8_r, line8_b, dl_color_from_name("green"), 2);
   
   dl_line(line9_l, line9_t, line9_l, line9_b, dl_color_from_name("green"), 2);
   dl_line(line9_r, line9_t, line9_r, line9_b, dl_color_from_name("green"), 2);
   dl_line(line9_l, line9_t, line9_r, line9_t, dl_color_from_name("green"), 2);
   dl_line(line9_l, line9_b, line9_r, line9_b, dl_color_from_name("green"), 2);
   
   dl_line(line10_l, line10_t, line10_l, line10_b, dl_color_from_name("green"), 2);
   dl_line(line10_r, line10_t, line10_r, line10_b, dl_color_from_name("green"), 2);
   dl_line(line10_l, line10_t, line10_r, line10_t, dl_color_from_name("green"), 2);
   dl_line(line10_l, line10_b, line10_r, line10_b, dl_color_from_name("green"), 2);
   
   dl_line(line11_l, line11_t, line11_l, line11_b, dl_color_from_name("green"), 2);
   dl_line(line11_r, line11_t, line11_r, line11_b, dl_color_from_name("green"), 2);
   dl_line(line11_l, line11_t, line11_r, line11_t, dl_color_from_name("green"), 2);
   dl_line(line11_l, line11_b, line11_r, line11_b, dl_color_from_name("green"), 2);
   
   dl_line(line12_l, line12_t, line12_l, line12_b, dl_color_from_name("green"), 2);
   dl_line(line12_r, line12_t, line12_r, line12_b, dl_color_from_name("green"), 2);
   dl_line(line12_l, line12_t, line12_r, line12_t, dl_color_from_name("green"), 2);
   dl_line(line12_l, line12_b, line12_r, line12_b, dl_color_from_name("green"), 2);
   
   dl_line(line13_l, line13_t, line13_l, line13_b, dl_color_from_name("green"), 2);
   dl_line(line13_r, line13_t, line13_r, line13_b, dl_color_from_name("green"), 2);
   dl_line(line13_l, line13_t, line13_r, line13_t, dl_color_from_name("green"), 2);
   dl_line(line13_l, line13_b, line13_r, line13_b, dl_color_from_name("green"), 2);
   
   dl_line(line14_l, line14_t, line14_l, line14_b, dl_color_from_name("green"), 2);
   dl_line(line14_r, line14_t, line14_r, line14_b, dl_color_from_name("green"), 2);
   dl_line(line14_l, line14_t, line14_r, line14_t, dl_color_from_name("green"), 2);
   dl_line(line14_l, line14_b, line14_r, line14_b, dl_color_from_name("green"), 2);
   
   dl_line(line15_l, line15_t, line15_l, line15_b, dl_color_from_name("cyan"), 2);
   dl_line(line15_r, line15_t, line15_r, line15_b, dl_color_from_name("cyan"), 2);
   dl_line(line15_l, line15_t, line15_r, line15_t, dl_color_from_name("cyan"), 2);
   dl_line(line15_l, line15_b, line15_r, line15_b, dl_color_from_name("cyan"), 2);
   
   /*---drawlibのフレームレイト。点滅の原因？---*/
   dl_wait(wait_time);
             
   /*---GAME OVERになる判断とその際の描画---*/     
   if (life <= 0){
      dl_clear(dl_color_from_name("black")); 
      dl_text("GAME OVER", 70, 100, 3.0, DL_C("red"), 3);
      dl_text("Hint : Collect the life", 60, 150, 1.0, DL_C("red"), 3);
      dl_wait(1000);
     }
   /*---GOALになる条件とその際の描画---*/
   if ((line15_l <= herox) && (line15_r >= herox) && (line15_t <= heroy) && (line15_b >= heroy) &&(life >= 30)){  
      dl_clear(dl_color_from_name("black")); 
      
  
    for (i = 50; i > 0; i--) {
      dl_line(1350, 600, 400 * -i, i * -20, DL_C("green"), 2 - 1 / 3);
    }
   
  
    for (l = 50; l > 0; l--) {
      dl_line(0, 640, 600 - l * 50, l * -20, DL_C("red"), 2);
 
    } 
    
     dl_text("CLEAR!!", 240, 100, 3.0,  dl_color_from_rgb(230, 59 , 390), 4);
    
      
    dl_wait(1000); 
   }
    
  } 
  
 
      
  return 0;
}
   
