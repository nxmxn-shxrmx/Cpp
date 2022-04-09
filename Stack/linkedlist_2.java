class Node
{
    int val;
    Node next;
    Node(int val)
    {
        this.val  = val;
    }
}
class linkedlist_2 {
    
    static Node head;
    static Node tail;

    static void show()
    {
        Node t = head;

        while(t!=null)
        {
            System.out.println(t.val);
            t =t.next;
        }
    }
     static void insertAtBeg(int data)
    {
        if(head==null)
        {
            head = new Node(data);
            tail = head;
            return;
        }
        Node t = new Node(data);
        t.next = head;
        head = t;
    }
    static void insertAtEnd(int data)
    {
        if(head==null)
        {
            head = new Node(data);
            tail = head;
            return;
        }
        // Node t = new Node(data);
        // Node u =head;
        // while(u.next!=null)
        // {
        //     u = u.next;
        // }
        // u.next = t;
        tail.next= new Node(data);
        tail = tail.next;

    }
    static void insertAtPos(int index,int data)
    {
        if(index==1)
        {
        }
    }
    public static void main(String[] args) {
        
        insertAtBeg(6);
        insertAtEnd(19);
        insertAtEnd(40);
        insertAtBeg(30);

        insertAtPos(2,5000);
        show();
    }
}
