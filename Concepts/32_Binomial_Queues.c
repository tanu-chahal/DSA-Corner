#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Structure to represent a node in the Binomial Queue
struct BinomialNode {
    int value; // The value of the node
    int rank; // The rank of the node
    struct BinomialNode* parent; // Pointer to the parent node
    struct BinomialNode* child; // Pointer to the leftmost child node
    struct BinomialNode* sibling; // Pointer to the sibling node
};

// Function to create a new node in the Binomial Queue
struct BinomialNode* newBinomialNode(int value) {
    struct BinomialNode* node = (struct BinomialNode*)malloc(sizeof(struct BinomialNode));
    node->value = value;
    node->rank = 0;
    node->parent = NULL;
    node->child = NULL;
    node->sibling = NULL;
    return node;
}

// Function to merge two Binomial Trees of the same rank
struct BinomialNode* mergeBinomialTrees(struct BinomialNode* tree1, struct BinomialNode* tree2) {
    if (tree1->value > tree2->value) {
        struct BinomialNode* temp = tree1;
        tree1 = tree2;
        tree2 = temp;
    }

    tree2->parent = tree1;
    tree2->sibling = tree1->child;
    tree1->child = tree2;
    tree1->rank++;

    return tree1;
}

// Function to merge two Binomial Queues
struct BinomialNode* mergeBinomialQueues(struct BinomialNode* queue1, struct BinomialNode* queue2) {
    if (queue1 == NULL) {
        return queue2;
    }

    if (queue2 == NULL) {
        return queue1;
    }

    struct BinomialNode* result = NULL;
    struct BinomialNode* current = NULL;
    struct BinomialNode* next1 = queue1;
    struct BinomialNode* next2 = queue2;

    while (next1 != NULL && next2 != NULL) {
        if (next1->rank <= next2->rank) {
            if (current == NULL) {
                result = next1;
            } else {
                current->sibling = next1;
            }

            current = next1;
            next1 = next1->sibling;
        } else {
            if (current == NULL) {
                result = next2;
            } else {
                current->sibling = next2;
            }

            current = next2;
            next2 = next2->sibling;
        }
    }

    if (next1 != NULL) {
        current->sibling = next1;
    } else {
        current->sibling = next2;
    }

    current = result;
    struct BinomialNode* prev = NULL;

    while (current != NULL && current->sibling != NULL) {
        if (current->rank != current->sibling->rank || (current->sibling->sibling != NULL && current->sibling->sibling->rank == current->rank)) {
            prev = current;
            current = current->sibling;
        } else {
            current = mergeBinomialTrees(current, current->sibling);
            if (prev == NULL) {
                result = current;
            } else {
                prev->sibling = current;
            }
        }
    }

    return result;
}

// Function to insert a new element into the Binomial Queue
struct BinomialNode* insertBinomialQueue(struct BinomialNode* queue, int value) {
    struct BinomialNode* node = newBinomialNode(value);
    return mergeBinomialQueues(queue, node);
}

// Function to extract the minimum element from the Binomial Queue
struct BinomialNode* extractMinBinomialQueue(struct BinomialNode* queue) {
    if (queue == NULL) {
        return NULL;
    }

    struct BinomialNode* minNode = queue;
    struct BinomialNode* prevMin = NULL;
    struct BinomialNode* current = queue->sibling;

    while (current != NULL) {
        if (current->value < minNode->value) {
            minNode = current;
            prevMin = queue;
        } else {
            prevMin = current;
        }

        current = current->sibling;
    }

    if (prevMin == NULL && minNode->sibling == NULL) {
        queue = NULL;
    } else if (prevMin == NULL) {
        queue = minNode->sibling;
    } else {
        prevMin->sibling = minNode->sibling;
    }

    struct BinomialNode* child = minNode->child;
    struct BinomialNode* prev = NULL;

    while (child != NULL) {
        child->parent = NULL;
        struct BinomialNode* next = child->sibling;
        child->sibling = prev;
        prev = child;
        child = next;
    }

    return mergeBinomialQueues(queue, prev);
}

// Function to print the elements in the Binomial Queue
void printBinomialQueue(struct BinomialNode* queue) {
    printf("Elements in the Binomial Queue: \n");

    while (queue != NULL) {
        printf("%d ", queue->value);
        queue = queue->sibling;
    }

    printf("\n");
}

// Driver function to test the implementation
int main() {
    struct BinomialNode* queue = NULL;

    queue = insertBinomialQueue(queue, 5);
    queue = insertBinomialQueue(queue, 3);
    queue = insertBinomialQueue(queue, 7);
    queue = insertBinomialQueue(queue, 1);
    queue = insertBinomialQueue(queue, 9);

    printBinomialQueue(queue);
    return 0;
}
