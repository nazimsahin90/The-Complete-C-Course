#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_SIZE 10
int stack[MAX_SIZE];
// element which is at the top of stack
int top = -1;
// is stack empty?
int isUnderflow() {
    return (top == -1);
}
// stack is completely filled
int isOverflow() {
    return (top == MAX_SIZE-1);
}


struct Node {
    int info;
    struct Node *next;
    // third part of the node contains the address of its previous node
    struct Node *prev;
};
// Double link head-tail pointers
struct Node *head = NULL;
struct Node *tail = NULL;

int push(int data) {
    if(isOverflow()) {
        printf("Stack overflow...\n");
        return 0;
    } else  {
        stack[++top] = data;
        return 1;
    }
}

void printMenu() {
    // Clear the console
    system("cls");

    printf("Stack Menu\n\n");
    printf("1. Push data to Stack\n");
    printf("2. Pop data from Stack\n");
    printf("3. Stack status\n");
    printf("4. Exit\n");
    printf("\nEnter you choice: ");
}

void addData() {
    int data;
    printf("Enter data : ");
    scanf("%d", &data);
    if(push(data)) {
        // data pushed successfully
        printf("%d pushed to stack.\n", data);
    } else  {
        printf("%d could not be pushed to stack.\n", data);
    }
}

void removeData() {
    pop();
    printf("Press any key to continue...");
    getch();
}

void pop() {
    if(isUnderflow()) {
        printf("Stack underflow...\n");
    } else  {
        printf("%d popped out from stack.\n", stack[top--]);
    }
}

void displayData() {
    int i;
    if(isUnderflow()) {
        printf("Stack underflow...\n");
        return 0;
    }
    for(i=top;i>=0;--i){
        printf("%d\n",stack[i]);
    }

    printf("Press any key to continue...");
    getch();
}

int main()
{
    /*
        Array implementation of Stack: Using array as stack
    */

    int choice;
    do {
        printMenu();
        scanf("%d", &choice);
        switch(choice)  {
        case 1:
            addData();
            break;
        case 2:
            removeData();
            break;
        case 3:
            displayData();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice");
            getch();
        }
    } while (1);

    // end program
    return 0;
}
