public class krukal {

    class Egde implements Comparable<Egde>
    {
        int src,dst,weight;
        void comparable(Egde copareto)
        {
            return this.weight - copareto.weight;
        }
    };
    class Subset
    {
        int parent,rank;
    };
    int V;
    int E;
    Edge []edge;
    krukal(int v,int e)
    {
        V = v;
        E = e;
        edge = new Edge[E];
        for(int i = 0;i<E;++i)
        edge[i] = new Edge();
    }
    int find(Subset sub[],int i)
    {
        if(sub[i].parent!=i)
        sub[i].parent = find(sub,sub[i].parent);

        return sub[i].parent;
    }
    void union(Subset sub,int x,int y)
    {
        int xroot = find(sub,x);
        int yroot = find(sub,y);

        if(sub[xroot].rank>sub[yroot].rank)
        {
            sub[yroot].parent =xroot;
        }
       else  if(sub[xroot].rank<sub[yroot].rank)
        {
            sub[xroot].parent =yroot;
        }
        else
        {
            sub[yroot].parent = xroot;
            sub[xroot].rank++;
        }
    }

    void krus()
    {
        Edge res[] = new Edge[V];
        Subset sub[] = new Subset[V];
        Arrays.fill(edge);
        for(int i =  0;i<V;++i)
        {
            res[i] = new Egde();
            sub[i] = new Subset();
            sub[i].parent = i;
            sub[i].rank = 0;
        }
        int e = 0;
        int i = 0;
        while(e<V-1)
        {
            Edge nex = new Edge();
            nex = edge[e++];
            int x = find(sub,nex.src);
            int y = find(sub,nex.dst);
            if(x!=y)
            {
                res[i++]=nex;
                union(sub,x,y);
            }
        }
        
    }



    
}
