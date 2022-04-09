class CQueue
{
    static int rear,front,size;
    static int arr[];

    CQueue(int s)
    {
        arr =new int[s];
        size = s;
        rear =front = -1;
    }

    public boolean isEmpty()
    {
        return (rear==-1 && front==-1);
    }
    public boolean isFull()
    {
        return (rear+1)%size ==front;
    }
    public void Enqueue(int data)
    {
        if(isFull())
        {
            System.out.println("OverFLow Condition");
            return;
        }
        if(front==-1)
        front=0;

        rear = (rear+1)%size;
        arr[rear] = data;
    }
    public int Dequeue()
    {
        if(isEmpty())
        {
            System.out.println("UnderFlow Condition");
            return -1;
        }
        int r = arr[front];
        if(rear==front)
        {
            rear = front = -1;
        }
        front = (front+1)%size;
        return r;
    }
    public int front()
    {
        if(isEmpty())
        {
            System.out.println("UnderFlow");
            return -1;
        }
        return arr[front];
    }

    public void traverse()
    {
        if(isEmpty())
        {
            System.out.println("Empty");
            return;
        }
        if(rear>=front)
        {
            for(int i = front;i<=rear;++i)
            {
                System.out.println(arr[i]);
            }
            return;
        }
        for(int i = front;i<size;++i)
        System.out.println(arr[i]);

        for(int i = 0;i<=rear;i++)
        System.out.println(arr[i]);
    }
}

class circularByarr {
    public static void main(String[] args) {
        CQueue q= new CQueue(5);
        q.traverse();
        q.Enqueue(10);   
        q.Enqueue(30);   
        q.Enqueue(50);   
        q.Enqueue(70);
        q.traverse(); 
        System.out.println("========");
        System.out.println(q.Dequeue()+"==");   
        q.traverse(); 

    }
}
