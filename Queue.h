

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  NodePtr new_node=(NodePtr) malloc(sizeof(Node));
  new_node->data=x;
  if(new_node){
    q->headPtr;
    if(q->size==0) q->headPtr=new_node;
    else q->tailPtr->nextPtr=new_node;
    q->tailPtr=new_node;
    q->size++;
  }
}


int dequeue_struct(Queue *q){
  NodePtr t=q->headPtr;
  if(t){
    if(q->size>0){
    int value= t->data;
    if(q->size==1) q->tailPtr=NULL;
    q->headPtr=t->nextPtr;
    q->size--;
    return value;
   }
  }
   printf("Empty queue\n");
   return 0;
}

