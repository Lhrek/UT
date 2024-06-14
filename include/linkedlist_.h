#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

#include "header.h"

struct ListNode {
  int key;
  ListNode *pNext;
};

/*JZ06从尾到头打印链表*/
void printLinkedlistFromEnd(ListNode *pNode) {
  if (pNode == nullptr) return;
  if (pNode->pNext != nullptr)
    printLinkedlistFromEnd(pNode->pNext);
  cout << pNode->key << endl;
}

/*141*/
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        auto f1 = head;
        auto f2 = head->pNext;
        while(f1 != NULL && f2 != NULL && f2->pNext != NULL){
          if(f1 == f2)
            return true;
          f1 = f1->pNext;
          f2 = f2->pNext->pNext;
        }
        return false;
    }

#endif