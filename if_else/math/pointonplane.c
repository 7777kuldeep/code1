#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinate ");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("lies on origin");
    }
    else if(y==0){
        printf("point on x axis");
    }
    else if(x==0){
        printf("lies on y axis");
    }
    
    return 0;
}