#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::sort;

/* Hash define */
#define nodesize 500000
#define hashsize 1000

typedef struct node
{
    int value, l, r;
    node *next;
} list;
list dict[nodesize + 1];
list *head[hashsize + 1];

class Hash
{
private:
    int size;

public:
    Hash()
    {
        size = 0;
        memset(head, 0, sizeof(head));
    }
    int hash(int value) { return abs(value) % hashsize; }
    void insert(int value, int i, int j)
    {
        int id = hash(value);
        dict[size].value = value;
        dict[size].l = i;
        dict[size].r = j;
        dict[size].next = head[id];
        head[id] = &dict[size++];
    }
    int find(int value, int i, int j)
    {
        int id = hash(value);
        for (list *p = head[id]; p; p = p->next)
            if (value == p->value)
                if (i != p->r && i != p->l && j < p->l)
                    return true;
        return false;
    }
};
/* Hash end */

int data[1002];

int main()
{
    int n;
    while (cin >> n && n)
    {
        for (int i = 1; i <= n; ++i)
            cin >> data[i];
        sort(data + 1, data + n + 1);

        Hash hash;
        for (int i = 1; i <= n; ++i)
            for (int j = i + 1; j <= n; ++j)
                hash.insert(data[i] + data[j], i, j);
        int flag = 0;
        for (int i = n; i >= 1; --i)
        {
            for (int j = 1; j <= n; ++j)
                if (i != j && hash.find(data[i] - data[j], i, j))
                {
                    cout << data[i] << endl;
                    flag = 1;
                    break;
                }
            if (flag)
                break;
        }

        if (!flag)
            cout << "no solution" << endl;
    }
    return 0;
}
