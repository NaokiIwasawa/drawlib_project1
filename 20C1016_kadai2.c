#include <stdio.h>
   /*------strcmp,dictsortのプロトタイプ宣言-------*/
int strcmp(char *str1, char *str2);
void dictsort(char **a, int n);
   /*------strcmpの関数定義,int型の戻り値rを利用する-------*/
int strcmp(char *str1, char *str2) {
    int r = 0;
    
   while (1) {
       if(*str1 != *str2){
         if(*str1 < *str2){
           r = -1;
           break;
          }else if(*str1 > *str2){
           r = 1;
           break;
          }
        }else if(*str1 == '\0' && *str2 == '\0'){
         r = 0;
         break;
        }else if(*str1 == '\0'){
         r = -1;
         break;
        }else if(*str2 == '\0'){
         r = 1;
         break;
        }
       str1++;
       str2++;
     }
   return r;
} 
  /*------
          distcortの関数定義で戻り値はなし。定義内では上記のstrcmp関数を利用。
          単語を入れ替える必要があればif文で入れ替える。           
                                                                             ----------*/     
void dictsort(char **a, int n) {
     int i, j, k;
     char *b;
      
      for (i = 0; i < n - 1; i++) {
          for(j = 0; j < n - 1; j++){
          
          k = strcmp(a[j], a[j + 1]);
          
          if(k == 1){
            b = a[j];
            a[j] = a[j + 1];
            a[j + 1] = b;
           }
         }   
      }    
  return;
}  

    /*-------文字を辞書順にdictsor関数を使ってソートし単語数分出力する。--------*/
int main(void) {
    char *colors[] = {"white", "black", "red", "pink", "orange", "blue", "yellow", "green", "purple", "gray", "brown", "gold", "silver"};
    int i = 0, j;
    
   while(i != 13){
        i++;
        dictsort(colors,i);
       }
     
      for(j = 0; j < i; j++){
         printf(" %s\n", colors[j]);
        }
     
 return 0;
}
  









        
          
          
                          
