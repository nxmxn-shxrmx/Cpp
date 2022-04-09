class Queue
{
    static int rear,size,front;
    static int arr[];

    Queue(int s)
    {
        size =s;
        rear =-1;
        front=-1;
        arr = new int[s];
    }
    public boolean isFull()
    {
        return rear==size-1;
    }
    public boolean isEmpty()
    {
        return rear ==-1 && front==-1;
    }
    public void Enqueue(int d)
    {
        if(isFull())
        {
            System.out.println("OverFlow Condition");
            return;
        }
        if(front==-1)
        front++;
        arr[++rear]=d;
    }
    public int Dequeue()
    {
        if(isEmpty())
        {
            System.out.println("UnderFlow Condition");
            return -1;
        }
        int r = arr[front];
        for(int i = 0;i<rear;++i)
        arr[i]=arr[i+1];

        if(rear<size)
        arr[rear]=0;
        if(front==rear)
        {
            front=-1;
            rear =-1;
            return r;
        }
        rear--;

        return r;
    }
    public int Front()
    {
        if(isEmpty())
        {
            System.out.println("Empty");
            return -1;
        }
        return arr[front];
    }
    public void traverse()
    {
        if(isEmpty())
        return;

        for(int i = 0;i<=rear;++i)
        System.out.println(arr[i]);
    }
}
class que
{
    public static void main(String[] args) {
        Queue q = new Queue(5);
        q.traverse();
        q.Enqueue(10);   
        q.Enqueue(30);   
        q.Enqueue(50);   
        q.Enqueue(70);  
        q.Enqueue(60);
        q.Enqueue(70);
        q.traverse(); 
        System.out.println("========");
        System.out.println(q.Dequeue()+"==");   
        q.traverse(); 
    }
}