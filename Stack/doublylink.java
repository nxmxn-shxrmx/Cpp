class Nodee
{
    Nodee next;
    Nodee pre;
    int val;
    Nodee(int val)
    {
        this.val = val;
    }
}


class doublylink {

    static Nodee head;
    static boolean h = false;
    int size()
    {
        int c = 0;
        Nodee u = head;
        while(u!=null)
        {
            c++;
           u=  u.next ;
        }
        return c;
    }
     void show()
    {
        Nodee u = head;
        while(u!=null)
        {
            System.out.println(u.val);
            u = u.next;
        }
    }
    void insertAtPos(int data,int in)
    {
        if(in>size()+1 || in<1)
        {
            System.out.println("Invalid");
            return;
        }
        Nodee t = new Nodee(data);
        if(in==1)
        {
            if(head==null)
            {
                head = t;
                head.pre=null;
                return;
            }
            t.next = head;
            head.pre = t;
            head= t;
            return;
        }
    
        Nodee temp =head;
        Nodee u = null;
        while(in>1)
        {
            in--;
            u = temp;
            temp = temp.next;
        }
        t.next = temp;
        if(temp!=null)
        temp.pre = t;
        u.next =t;
        t.pre= u;
    }
    void deleteAtPos(int pos)
    {
        if(pos>size() || pos<1)
        {
            System.out.println("Invalid");
            System.exit(0);
            return;
        }
        if(pos==1)
        {
            head= head.next;
            head.pre = null;
            return;
        }
        Nodee u = head;
        Nodee pre = null;
        while(pos>1)
        {
            pos--;
            pre = u;
            u = u.next;
        }
    
        pre.next = u.next;
        if(u.next!=null)
        u.next.pre = pre;
    }
    public static void main(String[] args) {
        doublylink o = new doublylink();
        o.insertAtPos(12, 1);
        o.insertAtPos(13, 1);
        o.insertAtPos(122, 3);
        o.insertAtPos(1333, 2);
        o.insertAtPos(44, 5);
        o.insertAtPos(2200, 6);
        o.insertAtPos(40000, 7);
        o.insertAtPos(10000000, 8);

        o.deleteAtPos(8);
        o.deleteAtPos(7);
        o.deleteAtPos(6);
        o.deleteAtPos(5);

        o.show();
    }
}
