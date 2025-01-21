#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, size_t aux) {
  // you may use this function
  long long a,b;
  if(n->left!=NULL) {
    a=my_recur(this->left,0)
    a=a+1;
   } else a=0;
  if(n->right!=NULL){
     b=my_recur(this->right,0)
     b=b+1;
  }  else b=0;
  return a+b-1;
}

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::sum_leaves_depth() {
  // write your code here
  
  return my_recur(mHeader,0);

}

#endif
