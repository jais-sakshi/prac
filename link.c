#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *ptr=NULL;

void insertend(int data){
    struct node *newnode=malloc(sizeof (struct node));
    newnode -> data=data;
    newnode -> next=NULL;
    if (head==NULL){
        head=newnode;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}
void insertbeg(int data){
    struct node *newnode=(struct node *)malloc(sizeof (struct node));
    newnode -> data=data;
    newnode -> next=head;
    head=newnode;

}

void insert(int data,int num){
    struct node *newnode=(struct node *)malloc(sizeof (struct node));
    newnode -> data=data;
    struct node *ptr=head;
    struct node *preptr=ptr;
    while(ptr -> data!=num){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=newnode;
    newnode->next=ptr;
}
void delete(){
    if (head==NULL){
        printf("UNDERFLOW !!");
        return;
    }
    else if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    else{
    struct node *ptr=head;
    struct node *preptr=ptr;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    }
}
void deleteval(int val){
    
    struct node *ptr=head;
    struct node *preptr=ptr;
    if (head==NULL){
        printf("UNDERFLOW !!");
        return;
    }
    else if (ptr->data == val) {
        head = ptr->next;
        free(ptr);
        return;
    }

    else{
    ptr=head;
    preptr=ptr;
    while(ptr->data!=val){
        preptr=ptr;
        ptr=ptr->next;
    }
    }
    preptr->next=ptr->next;
    free(ptr);
}
void traverse(){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    printf("yes0");
    int ch,x,val;
    insertend(1);
    insertend(2);
    insertend(3);
    while(1){
        printf("\n1.Insert at begining");
        printf("\n2.Insert before specific element");
        printf("\n3.Delete the last element");
        printf("\n4.Delete specific element");
        printf("\n5.Traverse");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        if (ch==1){
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&x);
            insertbeg(x);
        }
        else if (ch==2){
            printf("\nEnter the element before which the element to be inserted : ");
            scanf("%d",&val);
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&x);
            insert(x,val);
        }
        else if (ch==3){
            delete();
        }
            
        else if (ch==4){
            printf("\nEnter element to be deleted :");
            scanf("%d",&x);
            deleteval(x);
            }
        else if(ch==5){
            traverse();
        }
        else{
            exit(0);
        }
    }
    return 0;
}
