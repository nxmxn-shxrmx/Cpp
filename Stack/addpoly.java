class poly 
{
    poly next;
    int co;
    int ex;
    poly(int co,int ex)
    {
        this.co = co;
        this.ex = ex;
    }
}
class addpoly {

    static poly l1,l2,l;
    static poly k = l;


    static void find()
    {
        poly n1=l1;
        poly n2=l2;
        poly k = l;

        while(n1!=null || n2!=null)
        {
            if(n1==null)
            {
                if(k==null)
                {
                k = new poly(n2.co,n2.ex);
                return;
                }
                k.next = new poly(n2.co,n2.ex);
                n2 = n2.next;
                k = k.next;
            }
            else if(n2==null)
            {
                if(k==null)
                {
                k = new poly(n1.co,n1.ex);
                return;
                }
                k.next = new poly(n1.co,n1.ex);;
                n1 = n1.next;
                k = k.next;
            }
            else if(n1.ex==n2.ex)
            {
                if(k==null)
                {
                k =new poly(n1.co+n2.co,n1.ex);
                return;
                }
                k.next = new poly(n1.co+n2.co,n1.ex);
                k = k.next;
                n1 = n1.next;
                n2 = n2.next;
            }
            else if(n1.ex>n2.ex)
            {
                if(k==null)
                {
                k = new poly(n1.co,n1.ex);
                return;
                }
                k.next = new poly(n1.co,n1.ex);
                k = k.next;
                n1 = n1.next;
            }
            else
            {
                if(k==null)
                {
                k =  new poly(n2.co,n2.ex);
                return;
                }
                k.next = new poly(n2.co,n2.ex);
                k = k.next;
                n2 = n2.next;
            }
        }
    }
    static void show()
    {
        poly g = l;
        while(g!=null)
        {
            System.out.print(g.co+"x^"+g.ex+" +");
            g = g.next;
        }

    }
    
    public static void main(String[] args) {
        l1 = new poly(5,2);
        l1.next = new poly(4,1);
        l1.next.next =new poly(2, 0);
        l2 = new poly(5,2);
        l2.next = new poly(3,0);
        find();
        show();
    }
}
