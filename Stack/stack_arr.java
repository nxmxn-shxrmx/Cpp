class stak
{
    static final int max = 1000;
    int top;
    int a[]=new int[max];
    stak()
    {
        top =-1;
    }
    boolean inEmpty()
    {
        return top<0;
    }
   public void push(int d)
    {
        if(top>(max-1))
        {
            System.out.println("overflow");
            return;
        }
        a[++top]=d;
    }
    int pop()
    {
        if(top<0)
        {
            System.out.println("underflow");
            return -1;
        }
        int l = a[top--];
        return l;
    }
    int peek()
    {
        if(top<0)
        {
            System.out.println("underflow");
            return -1;
        }
        int l = a[top];
        return l;
    }
    void display()
    {
        for(int i = top;i>-1;--i)
        {
            System.out.println(a[top]);
        }
    }

}

class stack_arr {
   
    public static void main(String[] args) {
        stak s = new stak();
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(20);
        s.push(30);
        System.out.println(s.pop() + " Popped from stack");
        System.out.println("Top element is :" + s.peek());
        System.out.print("Elements present in stack :");
        s.display();

    }
    
}
