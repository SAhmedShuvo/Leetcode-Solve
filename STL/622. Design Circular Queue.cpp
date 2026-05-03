class MyCircularQueue {
public:
vector<int> cq;
int size, front=0, rear=-1, count=0;
    MyCircularQueue(int k) {
    cq.resize(k);
    size=k;
    }
    
    bool enQueue(int value) {
       if(isFull()) return false; 
       rear= (rear+1)%size;
       cq[rear]=value;
       count++; 
       return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        count--;
        front= (front+1)%size;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return cq[front];
    }
    
    int Rear() {
       if(isEmpty()) return -1; 
        return cq[rear];
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        if(count==size) return true;
        return false; 
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */