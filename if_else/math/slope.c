#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter first cordinarte ");
    scanf("%d%d",&x1,&y1);
    printf("enter second coordinate ");
    scanf("%d%d",&x2,&y2);
    printf("enter third coordinate ");
    scanf("%d%d",&x3,&
        y3);
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("points on line");
    }
    else{
        printf("points not on line");
    }
    return 0;
}