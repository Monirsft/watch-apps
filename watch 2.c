#include<stdio.h>
#include<unistd.h>
int main(){
int h=0,m=0,s=0;
 while(1){
    printf("%.2d:%.2d:%.2d\n",h,m,s);

    s++;
    sleep (1);
    if(s==60){
        m++;
        s=0;
    }
  if(m==60){
    h++;
    m=0;
  }
}
}
