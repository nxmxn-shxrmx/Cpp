class Node
{
    int val;
    Node next;
    Node()
    {

    }
    Node(int val)
    {
        this.val = val;
    }
}

class LinkedList
{   
    static Node head;


    public void show(Node u)
    {
        while(u!=null)
        {
            System.out.println(u.val);
            u = u.next;
        }
    }
    public int size()
    {
        int c= 0;
        Node temp = head;
        while(temp!=null)
        {
            temp = temp.next;
            c++;
        }
            return c;
    }
    public void insertAtBeg(int val)
    {   
        if(head==null)
        {
            head = new Node(val);
            return;
        }
        Node temp = new Node(val);
        temp.next = head;
        head = temp;
    }
    public void insertAtEnd(int val)
    {
        
        if(head==null)
        {
            head = new Node(val);
            return;
        }
        Node temp = head;
        while(temp.next!=null)
        {
            temp = temp.next;
        }
        temp.next = new Node(val);
    }
    public void insertAtPos(int index,int val)
    {
        if(index==1)
        {
            Node temp = new Node(val);
            temp.next = head;
            head = temp;
            return;
        }
        if(index>size()+1)
        {
            System.out.println(size());
            System.out.println("Invalid Index");
            return;
        }
        Node u = head;
        Node pre = null;
        while(index>1)
        {
            pre = u;
            u = u.next;
            index--;
        }
        Node temp = new Node(val);
        temp.next =pre.next;
        pre.next = temp;

    }
    public void deleteAtBeg()
    {
        if(head==null || head.next==null)
        return;

        head = head.next;
    }
    public void deleteAtEnd()
    {
        if(head==null || head.next==null)
        return;

        Node u = head;
        while(u.next.next!=null)
        u = u.next;

        u.next = null;
    }
    public void deleteAtPos(int index)
    {
        if(head==null)
        return;

        if(index>size())
        {
            System.out.println("Invalid Index");
            return;
        }
        if(index==1)
        {           
            head = head.next;
            return;
        }
        Node pre = null;
        Node u = head;
        while(index>1)
        {
            pre = u;
            index--;
            u = u.next;
        }
        pre.next = u.next;
    }



    public static void main(String args[])
    {
        LinkedList obj = new LinkedList();
        // head= new Node(10);
        // Node n2 = new Node(20);
        // head.next= n2;
        // Node n3 = new Node(30);
        // n2.next = n3;
        
        // obj.insertAtBeg(50);
        // obj.insertAtEnd(50);
        //  obj.show(head);
        //  System.out.println("\n\n");
        //  obj.insertAtPos(5, 7);
        // obj.insertAtPos(3,60);
        // obj.insertAtPos(1, 1);
        //  obj.insertAtPos(3,80);
        //  obj.show(head);
        //  System.out.println("\n\n");
        // obj.deleteAtPos(5);
        // obj.show(head); 
        // System.out.println(obj.size());
        obj.insertAtPos(1, 12);
        obj.insertAtPos(20, 2);
        obj.insertAtPos(2, 2);
        obj.insertAtPos(3, 4);
        obj.deleteAtPos(3);
        obj.show(head);
    }
}