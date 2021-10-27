#include<bits/stdc++.h>
using namespace std;
// Hello World
struct Node{
    int data;
    struct Node* next;
};
  struct Node * top=NULL;

int isEmpty(struct Node * top){
    if(top==NULL){
        return 1;
    }
    else return 0;
}

int isFull(struct Node * top){
    struct Node * p= (struct Node*)malloc(sizeof(struct Node *));
    if(p==NULL){
        return 1;
    }
     else return 0;
}

struct Node * push(struct Node * top,int x){
    if(isFull(top)){
        cout<<"stack overflow ";
    }
    else{
        struct Node* p=(struct Node* )malloc(sizeof(struct Node*));
        p->data=x;
        p->next=top;
        top=p;
        return top;
    }
} 

int pop(struct Node* tp){
    if(isEmpty(tp)){
        cout<<"Stack Underflow";
    }
    else{
        struct Node * p=tp;
        top=tp->next;
        int x =p->data;
        free(p);
        return x;
    }
}

void printlistl(struct Node *ptr){
   while(ptr!=NULL){
       printf("%d\n",ptr->data);
       ptr=ptr->next;
   }
}

int peek(int pos){
    struct Node * ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main()
{
   // struct Node * top=NULL;
    top=push(top,45);
    top=push(top,69);
    top=push(top,78);
    int element=pop(top);
   cout<<"Element popped is "<<element<<endl;
   cout<<"Element at position 1 is : "<<peek(1)<<endl;
    printlistl(top);
    return 0;   
}