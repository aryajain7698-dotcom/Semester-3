#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coef;
    int expo;
    struct node *link;
};

struct node *first = NULL;
struct node *first2 = NULL;
struct node *first3 = NULL;
struct node *last = NULL;
struct node *last2 = NULL;
struct node *last3 = NULL;

void insertAtLast(int x, int y)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->coef = x;
    new->expo = y;
    new->link = NULL;
    if (first == NULL)
    {
        first = new;
        last = first;
        last->link = first;
    }
    else
    {
        last->link = new;
        new->link = first;
        last = new;
    }
}
void insertAtLast2(int x, int y)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->coef = x;
    new->expo = y;
    new->link = NULL;
    if (first2 == NULL)
    {
        first2 = new;
        last2 = first2;
        last2->link = first2;
    }
    else
    {
        last2->link = new;
        new->link = first2;
        last2 = new;
    }
}

void sum()
{
    struct node *save1 = first;
    struct node *save2 = first2;
    int done1 = 0;
    int done2 = 0;
    do
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        if (save1->expo == save2->expo && !done1 && !done2)
        {
            new->coef = save1->coef + save2->coef;
            new->expo = save1->expo;
            if (save1 != last)
                save1 = save1->link;
            else
                done1 = 1;
            if (save2 != last2)
                save2 = save2->link;
            else
                done2 = 1;
        }
        else if (done1 && !done2)
        {
            new->coef = save2->coef;
            new->expo = save2->expo;
            if (save2 != last2)
                save2 = save2->link;
            else
                done2 = 1;
        }
        else if (!done1 && done2)
        {
            new->coef = save1->coef;
            new->expo = save1->expo;
            if (save1 != last)
                save1 = save1->link;
            else
                done1 = 1;
        }
        else
        {
            if (save1->expo > save2->expo)
            {
                new->coef = save1->coef;
                new->expo = save1->expo;
                if (save1 != last)
                    save1 = save1->link;
                else
                    done1 = 1;
            }
            else
            {
                new->coef = save2->coef;
                new->expo = save2->expo;
                if (save2 != last2)
                    save2 = save2->link;
                else
                    done2 = 1;
            }
        }

        if (first3 == NULL)
        {
            first3 = new;
            last3 = first3;
            last3->link = first3;
        }
        else
        {
            last3->link = new;
            new->link = first3;
            last3 = new;
        }
    } while (!done1 || !done2);
}

void display()
{
    struct node *save = first3;
    while (save != last3)
    {
        printf("%dx^%d+", save->coef, save->expo);
        save = save->link;
    }
    printf("%dx^%d\n", last3->coef, last3->expo);
}

void main()
{
    insertAtLast(2, 4);
    insertAtLast(1, 3);
    insertAtLast(5, 2);
    insertAtLast(1, 1);
    insertAtLast2(2, 3);
    insertAtLast2(4, 2);
    insertAtLast2(2, 1);
    insertAtLast2(1, 0);
    sum();
    display();
}