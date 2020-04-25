#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_SIZE 10
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void printMenu()  {
    system("cls");

    printf("Queue menu: \n");
    printf("1. Insert data to queue\n");
    printf("2. Delete data from queue\n");
    printf("3. Queue status\n");
    printf("4. Exit\n");
    printf("Enter you choice...\n");
}

void addData() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    if(enQueue(data))
        printf("%d inserted to queue.\n",data);
    else
        printf("%d could not be inserted to queue.\n",data);

    printf("Press any key to continue...\n");
    getch();
}
void deleteData() {

    printf("Press any key to continue...\n");
    getch();
}
void displayData() {
    if(isUnderflow()) {
        printf("Queue underflow...\n");
    } else  {
        // queue is not empty
        int i;
        printf("Queue status: ");
        for(i=front;i<=rear;++i){
            printf("%d", queue[i]);
        }
    }
    printf("Press any key to continue...\n");
    getch();
}

int main()
{
    int choice;
    do{
        printMenu();
        scanf("%d", &choice);
        switch(choice){
            case 1:
                addData();
                break;
            case 2:
                deleteData();
                break;
            case 3:
                displayData();
                break;
            case 4:
                // this will terminate the program
                exit(0);
            default:
                printf("Wrong choice...");
                getch();
        }
    } while(choice == 34);

    return 0;
}

void deQueue(){
    if(isUnderflow()){
        printf("Queue underflow...\n");
    } else if(front==rear){
        // if queue is not underflow, we will delete data from front
        ++front;
        printf("%d deleted from queue.\n", queue[front-1]);
    }
}
int enQueue(int data) {
    if(isOverflow()) {
        printf("Queue overflow...\n");
        // return zero because data cannot be inserted
        return 0;
    } else {
        if(front == -1)
            front = rear = 0;
        else
            ++rear;

        queue[rear]=data;
        // return 1 because data inserted
        return 1;
    }
}
int isOverflow(){
    return (rear==MAX_SIZE-1);
}
int isUnderflow(){
    // If front contains -1, that means no data is added to queue yet
    // and hence queue is underflow or array is empty
    return (front == -1);
}
