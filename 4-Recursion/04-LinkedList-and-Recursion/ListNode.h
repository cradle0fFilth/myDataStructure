#pragma once
#include<iostream>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int arr[], int n) {
          if (arr == nullptr || n == 0) {
              throw "Empty";
          }
          val = arr[0];
          ListNode* cur = this;
          for (int i = 1; i < n; i++) {
              cur->next = new ListNode(arr[i]);
              cur = cur->next;
          }
      }
      void print() {
          ListNode* cur = this;
          while (cur != nullptr) {
              std::cout << cur->val << "->";
              cur = cur->next;
          }
          std::cout << "NULL" << std::endl;
      }
       
  };
 