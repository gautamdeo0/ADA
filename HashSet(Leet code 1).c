typedef struct {
  int arr[1000000];
 
    
} MyHashSet;

int hashval; 


MyHashSet* myHashSetCreate() {
    MyHashSet * temp = malloc(sizeof(MyHashSet));
    return temp;    
}

void myHashSetAdd(MyHashSet* obj, int key) {
    hashval=key%1000000;

    
    obj->arr[hashval]=key;

}

void myHashSetRemove(MyHashSet* obj, int key) {
    hashval=key%1000000;

    obj->arr[hashval]=NULL;

  
}

bool myHashSetContains(MyHashSet* obj, int key) {
    hashval=key%1000000;

    if(obj->arr[hashval]==key)
        return true;
    
    else
        return false;
  
}

void myHashSetFree(MyHashSet* obj) {
    free(obj);
    
}