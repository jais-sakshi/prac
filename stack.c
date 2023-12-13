#include<stdio.h>
#include<stdlib.h>
#define max 100
int top=-1;
int stack[max];
void push(int x){
    if(top==max-1){
        printf("Overflow !!");
        return;
    }
    else{
        top+=1;
        stack[top]=x;
    }
}

int pop(){
    if (top<0){
        printf("UNDERFLOW !!");
        return -1;
    }
    else{
        int temp=stack[top];
        top=top-1;
        return temp;
    }
}

void traverse(){
    if (top<-1){
        printf("UNDERFLOW !!");
        return;
    }
    else{
        int temp=top;
        while (temp>-1){
            printf("%d\t",stack[temp]);
            temp-=1;
        }
    }
}
int main(){
    int x,ch;
    while(1){
        printf("\n1.INSERTION ");
        printf("\n2.DELETION ");
        printf("\n3.TRAVERSE ");
        printf("\n4.EXIT ");
        printf("\n\nEnter your choice : ");
        scanf("%d",&ch);
        if(ch==1){
            printf("\nEnter the element to insert :");
            scanf("%d",&x);
            push(x);
        }
        else if(ch==2){
            pop();
        }
        else if(ch==3){
            traverse();
        }
        else{
            exit(0); 
        }
    }
    

}