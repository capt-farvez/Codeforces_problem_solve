#include <stdio.h>

int main(){
    int year, count=1, y1, y2, y3, y4;
    scanf("%d",&year);
    year++;
    while(year>0){
        y1=year/1000;
        y2=(year/100)%10;
        y3=(year/10)%10;
        y4=year%10;

        if(y1!=y2 && y1!=y3 && y1!=y4 && y3!=y4 && y2!=y4 && y2!=y3){
         printf("%d",year);
        return 0;
        }
        else {
            year++;
        }
    }

    

}