#include <stdio.h>
#include <math.h>

double dist(double x1,double x2,double y1,double y2);
   /*----------決められた2点間の距離を出力する----------*/
double main(void) {
      double x_1 = 2.0, x_2 = 6.0, y_1 = 3.0, y_2 = 12.0;
      double z;
      
      z = dist(x_1, x_2, y_1, y_2);
 
      printf(" x1:%.2lf x2:%.2lf\n y1:%.2lf y2:%.2lf  であるときの2点間の距離は%2.3lf\n",
              x_1, x_2, y_1, y_2, z);
   /*---------ここからは三角形の形状判断---------*/   
        /*---------各辺の長さを示す------*/   
double x1, x2, x3, y1, y2, y3, side1, side2, side3;
       
       printf("三角形の三点の座標 x1, x2, x3, y1, y2, y3 の値を入力するので一つ入力したらエンターを押してください\n");
       scanf("%lf\n", &x1);
       scanf("%lf\n", &x2);
       scanf("%lf\n", &x3);
       scanf("%lf\n", &y1);
       scanf("%lf\n", &y2);
       scanf("%lf", &y3);      
       printf("入力された値\n x1:%lf  x2:%lf  x3:%lf\n y1:%lf  y2:%lf  y3:%lf\n", x1, x2, x3, y1, y2, y3);
       
       side1 = dist(x1, x2, y1, y2);
        printf("\n x1:%.2lf x2:%.2lf\n y1:%.2lf y2:%.2lf  であるときの2点間の距離は%2.3lf\n",
              x1, x2, y1, y2, side1);
              
       side2 = dist(x2, x3, y2, y3);
        printf("\n x2:%.2lf x3:%.2lf\n y2:%.2lf y3:%.2lf  であるときの2点間の距離は%2.3lf\n",
              x2, x3, y2, y3, side2);
              
       side3 = dist(x1, x3, y1, y3);
        printf("\n x1:%.2lf x3:%.2lf\n y1:%.2lf y3:%.2lf  であるときの2点間の距離は%2.3lf\n",
              x1, x3, y1, y3, side3);
              
   /*-------どの三角形であるかの判定---------*/           
    if((side1 + side2 > side3 && side1 + side3 && side2 + side3)
       && (side1 > 0 && side2 > 0 && side3 >0)) {
      if(side1*side1 > side2*side2 + side3*side3 ||
         side2*side2 > side1*side1 + side3*side3 ||
         side3*side3 > side1*side1 + side2*side2 ) {
          printf("この座標よりできる三角形は鈍角三角形です。\n");
         }else if(side1*side1 == side2*side2 + side3*side3 ||
                  side2*side2 == side1*side1 + side3*side3 ||
                  side3*side3 == side1*side1 + side2*side2 ) {
          printf("この座標よりできる三角形は直角三角形です。\n");
         }else if(side1*side1 < side2*side2 + side3*side3 ||
                  side2*side2 < side1*side1 + side3*side3 ||
                  side3*side3 < side1*side1 + side2*side2 ) {       
          printf("この座標よりできる三角形は鋭角三角形です。\n");
         }
      }else{
       printf("この座標では三角形になりません\n");
      }
               
              
      return 0;
}      
   /*----------dist関数の定義--------*/
double dist(double x1 ,double x2 ,double y1 ,double y2) {
       double a;
       
       a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
       
       return a;
}


        
              
