import java.util.ArrayList;

class DST_rec {
    
    ArrayList<ArrayList<Integer>>l;
    boolean vis[];
    DST_rec(int v)
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
        vis[i]= true;
        System.out.println(i);
        for(int j:l.get(i))
        {
            if(!vis[j])
            DFS(j);
        }
    }
    public static void main(String[] args) {
        
        DST_rec g = new DST_rec(4);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 3);

        g.DFS(0);
    }
}
