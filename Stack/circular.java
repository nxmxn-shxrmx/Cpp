class Noded
{
    Noded next;
    int val;
    Noded(int val)
    {
        this.val = val;
    }
}
class circular {

    static Noded head;
    static int size()
    {
        if(head==null)
        return 0;
        int c =0;
        Noded n = head;
        do
        {
            c++;
            n = n.next;
        }while(n!=head);
        return c;
    }
    static void insertAtBeg(int data)
    {
        Noded n = new Noded(data);
    
        if(head==null)
        {
            head =n;
            head.next = head;
            return;
        }

        Noded  t = head;
        while(t.next!=head)
        t = t.next;

    
        t.next = n;
        n.next = head;
        head = n;
    }
    static void InsertAtLast(int data)
    {
        Noded n = new Noded(data);
        
        if(head==null)
        {
            head= n;
            head.next = head;
            return;
        }
        Noded t = head;
        while(t.next != head)
            t = t.next;

        t.next = n;
        n.next = head;
        
    }
    static void deleteAtFront()
    {
        if(head==null)
        return;
        if(head.next==head)
        {
            head= null;
            return;
        }
        Noded t = head;
        while(t.next!=head)
        t = t.next;
        head = head.next;
        t.next =head;
    }
    static void deleteAtLast()
    {
        if(head==null)
        return;

        if(head.next==head)
        {
            head = null;
            return;
        }
        Noded r = head;
        while(r.next.next!=head)
            r = r.next;
        r.next = head;
    }
    static void deleteAtPos(int index)
    {
        if(head==null)
        return;

        if(index>size())
        return;

        Noded t = head;
        Noded r = null;
        while(index>1)
        {
            r = t;
            t = t.next;
            index--;
        }
        r.next = t.next;
        
    }
    static void show()
    {
        Noded n = head;
        do
        {
            System.out.println(n.val);
            n = n.next;
        }while(n!=head);

    }
    public static void main(String[] args) {
        
        insertAtBeg(60);
        InsertAtLast(78);
        insertAtBeg(70);
        InsertAtLast(90);
        deleteAtLast();
        deleteAtFront();
        show();
    }
}
