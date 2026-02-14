#include<stdio.h>
int main() { // H alphabet
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 3 || j == 1 || j == 5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() { // L apphabet
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 5 || j == 1 ){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1 || j == 3 ){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1||i == 3 || j == 1 ){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1||i == 5 || j == 3 ){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1||i == 3 || i == 5||j == 1 ){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == j|| i +j == 6){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == j || j == 1 || j == 5){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1 || i== 5 || i+j == 6){
                printf("@ ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1 || i == 3 || j == 1 || i == 2 && j == 5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1 || i == 3 || j == 1 || i == 2 && j == 5 || i*j == 16 || i*j == 25){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1 && j <=4 || i == 3 && j <= 4 || i == 5 && j <= 4 || i*j == 10 || i*j == 20 || j == 1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i == 1 || i == 3 || j == 1||j == 5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 && j>=2 || i == 5 && j>= 2||  j == 1 &&(i>=2 &&i<=4) ){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((i ==1 && j<=4) ||j == 1 || (i == 5 && j <=4) ||  i *j == 10 || i*j == 20|| i *j == 15){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main() {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((i == 1 && i == 5) || j == 1 || j == 5 || (i == j && i <4 && j < 4) || i == 2 && j == 4){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}


