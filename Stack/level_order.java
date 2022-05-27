class Node
{
    int val;
    Node left,right;
    Node(int val)
    {
        this.val = val;
    }
}
class level_order {
    static Node root;

  static  int height(Node  ro)
    {
        if(ro==null)
        return 0;

        int l  = height(ro.left);
        int r  = height(ro.right);
        if(l>r)
        return l+1;
        
        return r+1;
    }
    static void inOrder(Node root)
    {
        if(root==null)
        return;
        System.out.println(root.val);
        inOrder(root.left);
        inOrder(root.right);
    }
   static void printcurrent(Node r,int i)
    {
        if(r==null)
        return;
     
        if(i==1)
        System.out.print(r.val+" ");

        else if(i>1)
        {
            printcurrent(r.left, i-1);
            printcurrent(r.right, i-1);
        }
    }
    public static void main(String[] args) {
        root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);

        int h =  height(root);
        inOrder(root);

        for(int i = 1;i<=h;++i)
        {
            printcurrent(root,i);
        }
    }
}
