#include<stdio.h>

int main(void){
int x[3];
scanf("%d",&x[0]);
scanf("%d",&x[1]);
scanf("%d",&x[2]);
int b=1;
int velke;

while(b=1){
for(int i; i<4;i++){
if(x[i-1]>velke){
int velke=x[i-1];
x[i-1]=0;
}
}
printf("%d\n",velke);
if(x[0]==0){
    b=2;
}
}

    return 0;
}