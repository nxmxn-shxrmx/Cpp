class Node
{
    int co;
    int ex;
    Node next;
    Node(int co,int ex)
    {
        this.co = co;
        this.ex = ex;
    }
}
class po {

    static Node sum(Node p1,Node p2)
    {

        Node h = new Node(0,0);
        Node j = h;
        while(p1!=null || p2!=null)
        {
            if(p1==null)
            {
                h.next = p2;
                break;
            }
            if(p2==null)
            {
                h.next = p1;
                break;
            }
            else if(p1.ex==p2.ex)
            {
                h.next = new Node(p1.co+p2.co,p1.ex);
                p1 = p1.next ;
                p2 = p2.next ;
                h = h.next;
            }
            else if(p1.ex>p2.ex)
            {
                h.next = new Node(p1.co,p1.ex);
                p1 = p1.next ;
                h = h.next;
            }
            else
            {
                h.next = new Node(p2.co,p2.ex);
                p2 = p2.next ;
                h = h.next;

            }

        }
        return j.next;
    }
    public static void main(String[] args) {
        Node p1 = new Node(5,2);
        p1.next = new Node(4,1);
        p1.next.next = new Node(2,0);
        Node p2 = new Node(5,1);
        p2.next=new Node(3,0);

        Node t = sum(p1,p2);

        while(t!=null)
        {
            System.out.print(t.co+"x^"+t.ex);
            if(t.next!=null)
            System.out.print("+");
            t = t.next;
        }
    }
}
