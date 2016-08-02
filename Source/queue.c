#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>

 struct Node
 {
        int Data;
        struct Node* next;
 }*rear, *front;
 
 void kirim(int value)
{
     struct Node *temp;
     temp=(struct Node *)malloc(sizeof(struct Node));
     temp->Data=value;
     
}
