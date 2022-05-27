
class avl_insertion {
    class Node
    {
        Node left,right;
        int val;
        int height;
        Node(int val)
        {
            this.val = val;
            height= 1;
        }
    }    
    static Node root;
    static int max(int a,int b)
    {
        return a>b?a:b;
    }
    static int Height(Node l)
    {
        if(l==null)
        return 0;

        return l.height;
    }
    static int bf(Node root)
    {
        if(root==null)
        return 0;

        return Height(root.left)-Height(root.right);
    }
    static Node RRoate(Node z)
    {
        Node x = z.left;
        Node y = x.right;
        //rotate
        x.right = z;
        z.left = y;
        z.height = max(Height(z.left),Height(z.right));
        x.height = max(Height(x.left),Height(x.right));
        return x;
    }
    static Node LRoate(Node z)
    {
        Node x = z.right;
        Node y = x.left;
        //rotate
        x.left = z;
        z.right = y;
        z.height = max(Height(z.left),Height(z.right));
        x.height = max(Height(x.left),Height(x.right));
        return x;
    }
    static void insert(int d)
    {
        root = Insert(root,d);
    }

    Static Node Insert(Node root,int d)
    {
        if(root ==null)
        {
            return new Node(d);
        }
        else if(root.val>d)
        {
            root.left=Insert(root.left,d);
        }
        else if(root.val<d)
        {
            root.right = Insert(root.right,d);
        }
        root.height =1 + max(Height(root.left),Height(root.right));

        int b = bf(root);
        if(b>1)
        {
            if(d<root.left.val)
            {
                return RRotate(root);
            }
            else
            {
                root.left=LRotate(root.left);
                return RRotate(root);
            }
        }
        if(d<-1)
        {
            if(d>root.right.val)
            return LRotate(root);

            else
            {
                root.right = RRotate(root.right);
                return LRotate(root);
            }
        }
        return root;
        public static void main(String[] args) {
                insert(1);
                insert(45);
                insert(44);
        }
    } 
}
