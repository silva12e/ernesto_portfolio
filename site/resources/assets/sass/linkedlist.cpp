// A recursive program to add two linked lists
 
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
// #include <String>
 
//creating the list
struct Node
{
    int data;
    struct Node* next;
};
 
typedef struct Node node;
 
//insertion. 
void insert(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
 
/* Printing the sum or multiplication*/
void print(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
    printf("n");
}
 
//this method distinguishes the two heads. So basically when the second list starts
void changePointer( Node** a, Node** b )
{
    node* t = *a;
    *a = *b;
    *b = t;
}
 
//gets the size of the list. 
int getSize(struct Node *node)
{
    int size = 0;
    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}
 
// Adds two linked lists of same size represented by head1 and head2 and returns
node* addSameSize(Node* head1, Node* head2, int* carry)
{
    // Since the function assumes linked lists are of same size,
    // check any of the two head pointers
    if (head1 == NULL)
        return NULL;
 
    int sum;
 
    
    Node* result = (Node *)malloc(sizeof(Node));//assumes both list are the same size. 
    result->next = addSameSize(head1->next, head2->next, carry);//enters the numbers into the list.
    sum = head1->data + head2->data + *carry;
    *carry = sum / 10;
    sum = sum % 10;
 
    //the sum to current node of resultant list
    result->data = sum;
 
    return result;
}
 

void remainder(Node* head1, Node* cur, int* carry, Node** result)
{
    int sum;
 
    // If diff. number of nodes are not traversed, add carry
    if (head1 != cur)
    {
        remainder(head1->next, cur, carry, result);
 
        sum = head1->data + *carry;
        *carry = sum/10;
        sum %= 10;
 
        // add this node to the front of the result
        insert(result, sum);
    }
}
 
//this function adds the two list together. 
void addList(Node* head1, Node* head2, Node** result)
{
    Node *current;
 
    // if first list is empty
    if (head1 == NULL)
    {
        *result = head2;
        return;
    }
 
    // if second list is empty
    else if (head2 == NULL)
    {
        *result = head1;
        return;
    }
 
    int size1 = getSize(head1);
    int size2 = getSize(head2) ;
 
    int carry = 0;
 
    // Add same size lists
    if (size1 == size2)
        *result = addSameSize(head1, head2, &carry);
 
    else
    {
        int diff = abs(size1 - size2);
 
        // First list should always be larger than second list.
        // If not, swap pointers
        if (size1 < size2)
            changePointer(&head1, &head2);
 
        // move diff. number of nodes in first list
        for (current = head1; diff--; current = current->next);
 
        // get addition of same size lists
        *result = addSameSize(current, head2, &carry);
 
        // get addition of remaining first list and carry
        remainder(head1, current, &carry, result);
    }
 
    // if some carry is still there, add a new node to the fron of
    // the result list. e.g. 999 and 87
    if (carry)
        insert(result, carry);
}
 
// Driver program to test above functions
int main()
{
    Node *head1 = NULL, *head2 = NULL, *result = NULL;
 
    int arr1[] = {9, 9, 9};
    int arr2[] = {1, 8};
 
    //i want to print the dialog. so: Please choose an operation. multiplication(m)/addition(a)
    //then checks if its mult or add. after that the list one will be added. once the user enters
    //"and". the second list input will beging. once the user enters "end" then the operations will start.
    //i sent yoy the lab question as well. 
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
 
    // Create first list as 9->9->9
    int i;
    for (i = size1-1; i >= 0; --i)
        insert(&head1, arr1[i]);
 
    // Create second list as 1->8
    for (i = size2-1; i >= 0; --i)
        insert(&head2, arr2[i]);
 
    addList(head1, head2, &result);
 
    print(result);
 
    return 0;
}
