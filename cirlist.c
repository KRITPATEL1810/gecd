#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to insert a node at the end of the circular linked list
void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Node with value %d inserted at the end.\n", value);
}

// Function to insert a node before the specified position
void insertBeforePosition(int value, int position) {
    if (head == NULL || position <= 1) {
        printf("Invalid position. Insertion before the first position is not allowed.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* temp = head;
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
        if (temp == head) {
            printf("Position not found in the list.\n");
            free(newNode);
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    if (position == 1) {
        head = newNode;
    }

    printf("Node with value %d inserted before position %d.\n", value, position);
}

// Function to delete the first node of the circular linked list
void deleteFirstNode() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = head->next;
    free(head);
    head = temp->next;

    printf("First node deleted.\n");
}

// Function to delete a node after the specified position
void deleteAfterPosition(int position) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = head;
    for (int i = 1; i < position; i++) {
        temp = temp->next;
        if (temp == head) {
            printf("Position not found in the list.\n");
            return;
        }
    }

    struct Node* toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);

    printf("Node after position %d deleted.\n", position);
}

// Function to display the circular linked list
void display() {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("...\n");
}

int main() {
    int choice, value, position;

    do {
        printf("\nCircular Linked List Menu:\n");
        printf("1. Insert at the end\n");
        printf("2. Insert before a position\n");
        printf("3. Delete first node\n");
        printf("4. Delete node after a position\n");
        printf("5. Display list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 2:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the position to insert before: ");
                scanf("%d", &position);
                insertBeforePosition(value, position);
                break;
            case 3:
                deleteFirstNode();
                break;
            case 4:
                printf("Enter the position to delete after: ");
                scanf("%d", &position);
                deleteAfterPosition(position);
                break;
            case 5:
                printf("Circular Linked List: ");
                display();
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

