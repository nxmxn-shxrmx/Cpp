import java.util.*;
class BFS_que {
    ArrayList<ArrayList<Integer>>l;
    boolean vis[];
    BFS_que(int v)
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
    void BFS(int i)
    {
        vis[i]=true;
        Queue<Integer> q = new ArrayDeque<>();
  
        q.add(i);
        while(!q.isEmpty());
        {
            int p = q.poll();
            System.out.println(p);
            for(int x:l.get(p))
            {
                if(!vis[x])
                {
                  vis[x]=true;
                  q.add(x);
                }
            }
        }
    }
    public static void main(String[] args) {
        BFS_que g = new BFS_que(4);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 3);
        
        g.BFS(0);
    }
}

// BFS algorithm in Java

