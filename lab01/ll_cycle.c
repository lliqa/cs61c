#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *tort, *hare;
    tort = hare = head;
    if (head == NULL) return 0;
    while (1) {
        hare = hare->next;
        if (hare == NULL) return 0;
        hare = hare->next;
        if (hare == NULL) return 0;
        tort = tort->next;
        if (hare == tort) return 1;
    }
    return 0;
}