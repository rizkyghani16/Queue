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
     if (front == NULL)
     {
           front=temp;
           front->next=NULL;
           rear=front;
     }
     else
     {
           front->next=temp;
           front=temp;
           front->next=NULL;
     }
}

void hapus()
{
       struct Node *temp, *var=rear;
      if(var==rear)
      {
             rear = rear->next;
             free(var);
      }
      else
      printf("\nTidak ada queue");
}

void muncul()
{
     struct Node *var=rear;
     if(var!=NULL)
     {
           printf("\nNomornya adalah :  ");
           while(var!=NULL)
           {
                printf("\t%d",var->Data);
                var=var->next;
           }
     printf("\n");
     } 
     else
     printf("\nQueue kosong");
}

int main()
{
     int i=0;
     front=NULL;
     printf("===================");
     printf(" \n1. Masukan Nomor");
     printf(" \n2. Hapus Nomor");
     printf(" \n3. Keluar \n");
     printf("===================\n");
     while(1)
     {
          
     }
}
