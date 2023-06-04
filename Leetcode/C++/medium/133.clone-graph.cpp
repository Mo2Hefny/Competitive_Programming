class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) return NULL;
        Node *V[100];
        for (int i = 1; i <= 100; i++)
            V[i - 1] = new Node(i);
        bool visited[100] = {0};
        queue<Node*> q;
        q.push(node);
        visited[node->val - 1] = true;
        while (!q.empty())
        {
            Node * u = q.front();

            for (int i = 0; i < u->neighbors.size(); i++)
            {
                int n = u->neighbors[i]->val;
                if (!visited[n - 1])
                {
                    q.push(u->neighbors[i]);
                    visited[n - 1] = true;
                }
                V[u->val - 1]->neighbors.push_back(V[n - 1]);
            }
            q.pop();
        }
        return V[node->val - 1];
    }
};