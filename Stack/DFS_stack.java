import java.util.*;
class DFS_stack {
    
    ArrayList<ArrayList<Integer>>l;
    boolean vis[];
    DFS_stack(int v)
    {
        l = new ArrayList<ArrayList<Integer>>(v);
        vis = new boolean[v];

        for(int i = 0;i<v;++i)
            l.add(new ArrayList<Integer>());
    }
    void addEdge(int s,int d)
    {
        l.get(s).add(d);
        l.get(d).add(s);

    }
    void DFS(int i)
    {
       vis[i]=true;
       Stack<Integer> s = new Stack<Integer>();
       s.add(i);
       while(!s.empty())
       {
           int p = s.pop();
           System.out.println(p);
           for(int x:l.get(p))
           {
               if(!vis[x])
               {
                   vis[x]=true;
                   s.add(x);
               }
           }
       }
    }
    public static void main(String[] args) {
        
        DFS_stack g = new DFS_stack(4);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 3);

        g.DFS(0);
    }
}
