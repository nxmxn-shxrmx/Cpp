class stac
{
    static int t;
    static char arr[] = new char[50];
    stac()
    {
        t = -1;
    } 
    public boolean isEmpty()
    {
        return t==-1;
    }
    public boolean isfull()
    {
        return t==49;
    }
    public void push(char c)
    {
        if(isfull())
        return;

        arr[++t]=c;
    }
    public char pop()
    {
        if(isEmpty())
        return 'e';

        char w = arr[t--];
        return w;
    }
}
class sre {

    public static void reverse(String e,stac r)
    {
        for(int i = 0;i<e.length();++i)
        {
            r.push(e.charAt(i));
        }
        while(!r.isEmpty())
        {
            System.out.print(r.pop());
        }
    }
    public static void main(String[] args) {
        stac r = new stac();
        String e = "kick";
        reverse(e,r);
    }
}
