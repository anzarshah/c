
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 6

int size = 0, front = 0;
char arr[MAX];

int isFull()
{
    return (size == MAX);
}

int isEmpty()
{
    return (size == 0);
}

void deque()
{
    if (isEmpty())
    {
        printf("Queue is empty");
        return;
    }

    front = (front + 1) % MAX;
    --size;
}

void insert()
{

    if (isFull())
    {
        printf("Queueis full\n");
        return;
    }

    char elem;
    printf("enter elem to be insetert");
    scanf("%c", &elem);

    int rear = (size + front - 1) % MAX;
    rear = (rear + 1) % MAX;
    arr[rear] = elem;
    ++size;
}

void display()
{
    if (isEmpty())
    {
        printf("QUEUE IS EMPTY!\n");
        return;
    }
    int count = 0;
    for (int i = front; count < size; ++i)
    {
        printf("%c", arr[i]);
        if (i == (MAX - 1))
            i = 0;
        ++count;
    }
}

int main()
{
    int exit_ = 0;
    do
    {
        printf("\n1.Insert ");
        printf("2.Delete ");
        printf("3.Display ");
        printf("4.exit \n");

        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        while ((getchar()) != '\n')
            ;

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            exit_ = 1;
            break;
        default:
            printf("Enter correct choice!\n");
            break;
        }

    } while (!exit_);
}
