#include <iostream>
#include<cstdio>
using namespace std;
/*int main() {
    for(int a=0;a<=9;++a){
        for(int b=0;b<=9;++b){
            for(int c=0;c<=9;++c){
                if(a*100+b*110+c*12==532){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}*/
/*int Reverse(int x){
    int revx=0;
    while(x!=0) {
        revx *= 10;
        revx += x % 10;
        x /= 10;
    }
    return revx;
}
int main(){
    for(int i=1000;i<=9999;++i){
        if(i*9==Reverse(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}*/
/*int Reverse(int x){
    int revx=0;
    while(x!=0){
        revx*=10;
        revx+=x%10;
        x/=10;
    }
    return revx;
}
int  main(){
    for (int i=0;i<=256;++i) {
        if(i*i==Reverse(i*i)){
            printf("%d\n",i);
        }
    }
    return 0;
}*/
/*int main(){
    for (int i = 0; i < 100; ++i) {
        if (i%7==0){
            printf("%d\n",i*i);
        }
        if((i%10)%7==0||(i-(i%10)*10)%7==0){
            printf("%d\n",i*i);
        }
    }
    return 0;
}*/