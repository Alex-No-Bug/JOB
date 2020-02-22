//C++面试宝典: https://wenku.baidu.com/view/92e0e923dd36a32d73758164.html
//1.语法头文件
//1.max函数头文件:
#include<algorithm> 
//2. 包含所有C++ 头文件:
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
//3.输入:
while (cin >> n)
getline(cin, str) //带空格的字符串
#include <string.h> 是cstring
#include <string>   是C++里的string容器的头文件
4.引用和指针： < References and Pointers>
a.指针一般指的是某块内存的地址，通过这个地址，我们可以寻址到这块内存；而引用是一个变量的别名
b.交换值函数： void change(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
c.达到同时修改指针的目的的话，就得使用引用了
fun(Node *&p)
/****************************************************************************************************************************/

//2.The data structure  stl
 
1.int a[] = {...} cout << sizeof(a) / sizeof(a[0]) 
2.数组传参数： 1. 指针 void myFunction(int *param) 
              2. 定义大小的数组 void myFunction(int param[10]) 3. 未定大小的 void myFunction(int param[]) 

2. < vector >
1. 用n个val初始化 vector<T>(n,val)
1. 插入 v.insert(v.begin() + i, 1) //返回新数据的位置
2. 删除 v.erase(v.begin() + i)     //返回下一个位置
3. v.push_back() 
4. v.pop_back() 
5. 
int max = *max_element(v.begin(), v.end()) 最大值的下标 index1 = max_element(v.begin(), v.end()) - v.begin()
int min = *min_element(v.begin(), v.end()) 最大值的下标 index2 = min_element(v.begin(), v.end()) - v.begin() 
6. v排序 
sort(v.begin(), v.end(),less<int>())//从小到大(默认)
sort(v.begin(),v.end(),greater<int>())//从大到小
class D                                                                                                                                                                                                                                                                    自定义排序算法 : class D
{
public:
    long dis;
    int index;
    D(long d, int i)
    {
        dis = d;
        index = i;
    }
};
bool judge(D d1, D d2) //reverse judge 函数
{
    if (d1.dis < d2.dis)
        return (true);
    else
        return (false);
}
sort(v.begin(), v.end(), judge);

//7.倒置容器 reverse(v.begin(),v.end())
//8.遍历容器
vector<int>::iterator iter;
for(iter=v.begin();iter!=v.end();iter++)
    cout<<*iter<<endl;

9.对比python
    list.insert(1, 'x')
    list.del(3)
    //二维 vector<vector<int> >;//这里，两个“>”间的空格是不可少的  不然会当做>>重载

2. <stack>
    stack empty() 堆栈为空则返回真
    pop() 移除栈顶元素
    push() 在栈顶增加元素
    size() 返回栈中元素数目
    top() 返回栈顶元素
    注意弾栈操作：
    int a = v.top();
    v.pop();
3.队列：queue
#include <iostream>
#include <queue>
q.push()
q.pop()
详细用法 : 定义一个queue的变量 queue<Type> 查看是否为空范例 M.empty() 是的话返回1，不是返回0
出队：显示第一个元素 M.front() 清除第一个元素 M.pop()
     显示最后一个元素 M.back() 从已有元素后面增加元素 M.push()
     输出现有元素的个数 M.size()

4.优先级队列 priority_queue<int> Q

5. 
map :          1.有序 2.树状结构
unordered_map: 1.无序 2.Hash表
#include <map>
插入 : mapStudent.insert(pair<int, string>(3, "student_three"))
查找 : if (mymap.find(k) == mymap.end())
           cout<< "没有这个key"<< endl
删除 :mapStudent.erase(m.begin()+i)

//数据的插入--第一种：用insert函数插入pair数据
#include <map>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    map<int, string> mapStudent;
    mapStudent.insert(pair<int, string>(1, "student_one"));
    mapStudent.insert(pair<int, string>(2, "student_two"));
    mapStudent.insert(pair<int, string>(3, "student_three"));
    map<int, string>::iterator iter;
    for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
        cout << iter->first << ' ' << iter->second << endl;
}

6.set 集合 : 计数 去重 
int mian()
{
    set<int> s;            //树状结构，有序
    unordered_set<int> s2; //哈希结构，无序，快
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    cout << s.size() << endl;
    for (auto tmp : s)
        cout << tmp << " ";
    cout << endl;
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;
}
//stl算法:.find()返回迭代器 .count()返回个数

7. C++ 结构体 
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
ListNode *temp = (ListNode *)new ListNode();

8.随机函数
    取得[a,b]的随机整数：rand()%(b-a+1)+a；
    取得(0,x)的随机整数：rand()%x；
    取得(a,b)的随机整数：rand()%(b-a)；
    取得[a,b)的随机整数：rand()%(b-a)+a；
    取得(a,b]的随机整数：rand()%(b-a)+a+1；
    取得0-1之间的浮点数：rand()/double(RAND_MAX)。
9. 绝对值函数
   头文件：#include<cmath>
10.
< C语言的初始化函数> 
 char a[100];
 memset(a,'\0',sizeof(a));
< C++初始化函数>
#include <algorithm>  
  fill();
11.//数组传参
void fun(int v[])//可以改变原来的数组的值
void fun(int v[][4]);

/*****************************************************************************************************************************/



//3.字符串
1. <string 以 '\0' 结束 转义字符都是 \n>
 while(input[i]!=0)//注意这里
    {
    userip += input[i];
    i++;
    }
for (int i=0;i<str.size();i++)

2.
#include <cstring>
using namespace std; 
strcmp(char*,char*);   
s1=s2

3.<string 和 Int的互换>
#include <cstdlib>
string -> char * -> int
string a = "1234";
int a=1234;
//重要！
/*********************************************************/
int b = atoi(a.c_str());//c_str()函数返回一个指向正规C字符串的指针常量, 内容与本string串相同.这是为了与c语言兼容，在c语言中没有string类型，故必须通过string类对象的成员函数c_str()把string 对象转换成c中的字符串样式。
string s=to_string(a);
/*********************************************************/

4.<string比较>
不可以用== ( 比较的是地址)
s1.compare(s2);(做差)

5.<string 后追加char>
s.push_back(c)

6.字符串的截取
s.substr(begin_pos,len)

/****************************************************************************************************************/

//4.数据结构
//<1>建立链表
将栈里的值弹出来   建立链表：
ListNode* build()
{
    ListNode *head = (ListNode *)new ListNode(0); //带头结点的List
    ListNode *front = head;
    while (v3.empty() != true)
    {
        ListNode *p = (ListNode *)new ListNode(v3.top());
        v3.pop();
        front->next = p;
        front = p;
    }
    front = NULL;
    return (head->next);
}

//<2>倒置链表：无需多余的空间  就地倒置链表
void inverseList(Node*&head)
{
    cout << "inverse" << endl;
    Node *cur = head->next;
    Node *temp = cur->next;
    Node *q = head->next; //负责找到最后的节点
    while (q->next)
        q = q->next;
    while (cur != q)
    {
        head->next = cur->next;
        //插入后面的位置
        cur->next = q->next;
        q->next = cur;
        //恢复初始状态
        cur = temp;
        temp = cur->next;
    }
}
//给出m n 来翻转链表

//<3>将偶数index的节点放到后面

Time complexity  : O(n)
Space complexity : O(1)

 ListNode* oddEvenList(ListNode* head) 
 {
    if (head == null)
        return null;
    ListNode odd = head, even = head->next, evenHead = even;
    while (even != null && even->next != null) //注意这个条件判断的巧妙
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

//<4>判断是否LinkedList有环  Tn=O(n)    
//若是2个指针记录节点 这复杂度必然是n2
bool hasCycle(ListNode *head) 
    {
    if (head == NULL || head->next == NULL)
        return (false);
    else
    {
        ListNode *p1 = head;
        ListNode *p2 = head;
        while (p1 != NULL && p2 != NULL)
        {
            p1 = p1->next;
            if (p2->next != NULL) //若遍历有NULL 立即推无环
                p2 = p2->next->next;
            else
                return (false);
            if (p1 == p2) //相遇 最坏的情况整个是环 2圈相遇
            {
                return (true);
            }
        }
        return (false);
    }
    }
//<5>删除指定数值的节点
    ListNode* removeElements(ListNode* head, int val)
    {
    if (head)
    {
        if (head->val == val) //头节点
        {
            while (head && head->val == val)
            {
                head = head->next;
            }
        }
        if (head)
        {
            ListNode *front = head; //此处保证第一个节点并不是想要的
            ListNode *cur = head->next;
            while (cur)
            {
                if (cur->val == val)
                {
                    front->next = cur->next;
                    cur = front->next;
                }
                else
                {
                    cur = cur->next;
                    front = front->next;
                }
            }
            return (head);
        }
        else
            return (NULL);
    }
    else
        return (NULL);
    }
//<6>判断是否是交叉链表并返回交叉点
//train of thought:直接遍历判断最后的节点是否相同
//找入口节点：在长的|la-lb|处开始遍历直至二者相等！

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(headA&&headB)
        {
            vector<ListNode*> Node;
            Node.pushck(headA);
            Node.push_back(headB);
            vector<int> L;//记录长度
            L.push_back(1);
            L.push_back(1);
            ListNode*pa=headA;
            ListNode*pb=headB;
            //判断最后的节点是否一致
            while(pa->next)
            {
    L[0]++;
    pa = pa->next;
            }
            while(pb->next)
            {
    L[1]++;
    pb = pb->next;
            }
            if(pa==pb)//如果最后的是相同节点则就是有交集
            {
    if (leangth_a >= length_b)
    {
        index_long = 0;
        index_short = 1;
    }
    else
    {
        index_long = 1;
        index_short = 0;
    }
    int i = 1;
    //q节点是长的头结点
    ListNode *cur = Node[index_long];
    while (i <= math.abs(length_a - length_b))
    {
        cur = cur->next;
        i++;
    }
    //cur移动到|la-lb|的位置 此时cur q距离intersection的位置一样
    ListNode *q = Node[index_short];
    while (q != cur)
    {
        q = q->next;
        cur = cur->next;
    }
    return (q);
} else
return(NULL);
}
else return (NULL);
}
}
;

//7.链表排序 注意是 vector<ListNode*> 重新建立链表
bool judge_fun(ListNode *&n1, ListNode *&n2) //小于号放入vector函数进行排序
{
    if (n1->val < n2->val) //升序是小于号
    {
        return (true);
    }
    else
        return (false);
}
class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *p = head;
        vector<ListNode *> v;
        while (p)
        {
            v.push_back(p);
            p = p->next;
        }
        sort(v.begin(), v.end(), judge_fun); //对对象指针进行排序
        ListNode *H = v[0];
        ListNode *cur = H;
        for (int i = 0; i < v.size() - 1; i++)
        {
            cur->next = v[i + 1];
            cur = cur->next;
        }
        cur->next = NULL;
        return (H);
    }
};

/***************************************************************************************************************************************************************************/
2. 树<1> leetcode里的树节点： struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

<2> 1. 基本操作：
#include <iostream>
    using namespace std;
struct TreeNode
{
public:
    TreeNode(int k)
    {
        val = k;
    }
    int val;
    TreeNode *left;
    TreeNode *right;
};
/******************************************************************************************************************************************/
//1.建树建树
void Create(TreeNode *&h)
{
    int x;
    cout << "input the x:" << endl;
    cin >> x;
    if (x)
    {
        h = (TreeNode *)new TreeNode(x);
        Create(h->left);
        Create(h->right);
    }
    else
        h = NULL;
}
//2.中序遍历
void Inorderprint(BTNode *t) //中序遍历
{
    if (t != NULL)
    {
        Inorderprint(t->left);
        cout << t->val << "  ";
        Inorderprint(t->right);
    }
}
//3.STL实现层次遍历
void LevelOrder(BTNode *t)
{
    queue<BTNode *> Q;
    Q.push(t);
    while (!Q.empty())
    {
        BTNode *p = Q.front(); //队列中第一个元素
        Q.pop();               //出队访问
        if (p->left)
            Q.push(p->left);
        if (p->right)
            Q.push(p->right);
    }
}

/******************************************************************************************************************/
//线索二叉树
//1.对其线索化：中序线索化--比较常见
void InThread(TreeNode *&root, TreeNode *&pre) //pre为p的前驱节点  p为pre的后继结点
{
    if (root)
    {
        InThread(root->left, pre);
        if (!root->left) //左节点是空
        {
            root->lflag = 1; //指向前驱节点
            root->left = pre;
        }
        if (pre && !pre->right) //pre后是空
        {
            pre->rflag = 1;
            pre->right = root; //指向后继结点
        }
        pre = root;
        InThread(root->right, pre);
    }
}
void CreateThreaded(TreeNode *&root)
{
    if (root)
    {
        TreeNode *pre = NULL;
        InThread(root, pre); //线索化
        //处理最后的pre
        pre->right = NULL;
        pre->rflag = 0;
    }
}

//2.线索二叉树的遍历：
TreeNode *FirstNode(TreeNode *t)
{
    if (!t)
        return (NULL);
    while (t->lflag == 0) //找到最左下节点
        t = t->left;
    return (t);
}
TreeNode *NextNode(TreeNode *t)
{
    if (t->rflag == 1) //直接后继结点
        return (t->right);
    else //右子树并不是直接的next节点  就找到其最左端节点
        return (FirstNode(t->right));
}
void ThreadTravel(TreeNode *root)
{
    for (TreeNode *p = FirstNode(root); p != NULL; p = NextNode(p))
        cout << p->val << endl;
}

/**********************************************************************************************************************/
//二叉搜索树BST(binary sort tree)
1. 性质：
            left < root < right 中序遍历 ==
    为递增序列 转为sorted数组

    2. 查找：
    // <2>非递归查找
    // bool SearchTree(BiTree*T,int key)
    // {
    //     Node*p=T;
    //     while(p)
    //     {
    //         if(p->val==key) return(true);
    //         else if(key>p->val) p=p->right;
    //         else if(key<p->val) p=p->left;
    //     }
    //     return(false);
    // }
    <1>
//递归查找：
BTNode *SearchTree(BiTree T, int key)
{
    if (!T)
        return (NULL);
    else if (key == T->val)
        return (T);
    else if (key > T->val)
        return (SearchTree(T->right));
    else if (key < T->val)
        return (SearchTree(T->left));
}

//<3>.插入元素:
void InsertBTNode(BTNode *&t, int key) //插入关键字  递归
{
    if (!t)
    {
        t = (BTNode *)new BTNode(key);
        t->left = NULL;
        t->right = NULL;
    }
    else
    {
        if (t->val > key)
            InsertBTNode(t->left, key);
        if (t->val < key)
            InsertBTNode(t->right, key);
    }
}
//   <4>.对其进行中序遍历转换为数组解决问题
// Given a Binary Search Tree and a target number,
// return true if there exist two elements in the
// BST such that their sum is equal to the given target.
这里使用了2个指针 前后相遇扫描 时间复杂度O(n) void Inorder(TreeNode *&root, vector<int> &v)
{
    //L Root R
    if (root)
    {
        Inorder(root->left, v);
        v.push_back(root->val);
        Inorder(root->right, v);
    }
}
bool findTarget(TreeNode *root, int k)
{
    int i = 0;
    vector<int> v;
    Inorder(root, v);
    int begin = 0;
    int end = v.size() - 1;
    while (begin != end)
    {
        if (v[begin] + v[end] < k)
            begin++;
        else if (v[begin] + v[end] > k)
            end--;
        else
            return true;
    }
    return (false);
}

//二叉平衡树AVL   balanced binary tree

/*********************************************************************************************************************************************/

//树的基本题型
//1.计算叶子节点的个数
int leaf(BTNode *t)
{
    int sum;
    if (t == NULL)
        sum = 0;
    else if (t->left == NULL && t->right == NULL)
        sum = 1;
    else
    {
        sum = leaf(t->left) + leaf(t->right);
    }
    return (sum);
}

//2.查找x节点,1空2等于3递归！出错了
int Search(BTNode *t, int x, int depth)
{
    int flag = 0;
    if (t == NULL)
    {
        flag = 0;
    }
    else if (t->val == x)
    {
        flag = 1;
        cout << "depth is" << depth << endl; //在找的x节点输出depth！
    }
    else
    {
        flag = Search(t->left, x, depth + 1) + Search(t->right, x, depth + 1);
    }

    return (flag);
}

//3.统计总共多少个树节点
int total(BTNode *t)
{
    int sum = 0; //重点
    if (t == NULL)
        sum = 0;
    else
    {
        sum = total(t->right) + total(t->left) + 1; //关键语句:左子树+右子树+自己
    }
    return (sum);
}
//变式<1>计算左叶子节点的个数
int dfs(TreeNode *&root, int flag)
{
    if (root)
    {
        int sum = 0;
        if (flag == 1 && root->left == NULL && root->right == NULL) //只有是左叶子节点才可以相加的！
            return (root->val);
        sum = sum + dfs(root->left, 1) + dfs(root->right, 0);
        return (sum);
    }
    else
        return (0);
}

//4. 给定sorted array 建立平衡二叉树
TreeNode *build(vector<int> &nums, int l, int r)
{
    if (l > r)
        return (NULL);
    else if (l == r)
    {
        TreeNode *head = (TreeNode *)new TreeNode(nums[l]);
        return (head);
    }
    //找中间节点
    int middle = (r + l) >> 1;                               //右移一位  加快除法
    TreeNode *head = (TreeNode *)new TreeNode(nums[middle]); //申请头
    head->left = build(nums, l, middle - 1);                 ///中间的节点去掉
    head->right = build(nums, middle + 1, r);
    return (head);
}
TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return (build(nums, 0, nums.size() - 1));
}

//5.<层次遍历>
//STL实现层次遍历
void LevelOrder(BTNode *t)
{
    queue<BTNode *> Q;
    Q.push(t);
    while (!Q.empty())
    {
        BTNode *p = Q.front(); //队列中第一个元素
        Q.pop();               //出队
        if (p->left)
            Q.push(p->left);
        if (p->right)
            Q.push(p->right);
    }
}
//层次遍历的变式——记录每一次层的数目

//<1>利用层次遍历来判断是不是一个完全二叉树
bool isCompeletedTree(Node *t) //判断是否为一棵完全二叉树
{
    queue<Node *> q;
    q.push(t);
    Node *previous = t;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (previous == NULL && temp != NULL)
            return (false); //如果在空节点后有值  即非完全二叉树
        previous = temp;    //更改前面的值
        if (temp)
        {
            cout << temp->val << endl;
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return (true);
}
//<2>利用层次遍历求最下左节点：记录每一层的长度  出队时减一
int findBottomLeftValue(TreeNode *root)
{
    vector<TreeNode *> queue;
    queue.push_back(root);
    int front = 0;
    int rear = 1;
    int top = -1; //存放每层最前面的值
    while (front != rear)
    {
        int LEVEL_SIZE = rear - front; //当前层次的长度  接下来的三句才是核心
        top = queue[front]->val;
        //将这个层次的树节点全部出队
        while (LEVEL_SIZE > 0)
        {
            TreeNode *temp = queue[front]; //出队
            front++;
            cout << "出队的值：" << temp->val << endl;
            LEVEL_SIZE--;
            if (temp->left)
            {
                queue.push_back(temp->left); //入队
                rear++;
            }
            if (temp->right)
            {
                queue.push_back(temp->right); //入队
                rear++;
            }
        }
    }
    return (top);
}
//求每层的平均值
vector<double> averageOfLevels(TreeNode *root)
{

    vector<double> average; //存放平均数
    vector<TreeNode *> v;
    v.push_back(root);
    int front = 0;
    int back = 1;
    double sum = 0.0;
    while (front != back)
    {
        int size = back - front;
        int temp = size;
        while (size > 0)
        {
            TreeNode *p = v[front];
            front++; //出队
            size--;
            sum += p->val; //计数求和
            if (p->left)
            {
                //入队
                v.push_back(p->left);
                back++;
            }
            if (p->right)
            {
                v.push_back(p->right);
                back++;
            }
        }
        average.push_back((sum) / temp); //平均数压入
        sum = 0;                         //清零
    }
    return (average);
}

//倒序输出层次遍历
class Solution
{
public:
    int hight(TreeNode *root)
    {
        if (root)
            return (max(hight(root->left), hight(root->right)) + 1);
        else
            return (0);
    }
    //vector不能直接填写
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        if (root)
        {
            int h = hight(root) - 1;  //高度
            vector<vector<int>> temp; //正常的顺序压入一个层次的树节点
            vector<vector<int>> result;
            queue<TreeNode *> node; //levelorder的辅助队列
            node.push(root);
            while (node.empty() == 0)
            {
                int width = node.size();
                int i = 0;
                vector<int> temp_temp; //申请了一个临时临时的向量
                while (width > 0)
                {
                    TreeNode *p = node.front();
                    temp_temp.push_back(p->val);
                    node.pop();
                    width--;
                    if (p->left)
                        node.push(p->left);
                    if (p->right)
                        node.push(p->right);
                } //一个层次均压入队列
                temp.push_back(temp_temp);
                h--;
            }
            for (int i = temp.size() - 1; i >= 0; i--)
                result.push_back(temp[i]);
            return (result);
        }
        else
        {
            vector<vector<int>> v;
            return (v);
        }
    }
};

//6.判断是否2棵二叉树是否一样
bool isSame(TreeNode *p, TreeNode *q)
{
    if (q == NULL && p == NULL)
        return (true);
    else if (q && p)
        return (!(q->va - p->val) && isSame(p->left, q->right) && isSame(p->right, q->right));
    else
        return (false);
}

//将二叉树镜面翻转（invert）
void invert(TreeNode *&root)
{
    if (root)
    {
        TreeNode *temp = root->left; //交换本层
        root->left = root->right;
        root->right = temp;
        invertTree(root->left); //接着向下一层递归！
        invertTree(root->right);
    }
}
TreeNode *invertTree(TreeNode *root)
{
    invert(root);
    return (root);
}
//树的路径问题
//利用这个路径的树的算法可以求解最近的祖先问题！   打印路径  然后找到最近的祖先
//7.找出根节点和给定的节点的路径  注意如果没有这个flag  就会导致path传回来空值->
void find_path(vector<TreeNode *> &path, TreeNode *&t, TreeNode *target, int &flag) //先序遍历
{
    if (flag)
        return; //找到了直接返回
    if (t)
    {
        path.push_back(t);
        if (t == target)
        {
            flag = 1; //找到改变标志位
            return;
        } //遇到目标节点即可退出
        find_path(path, t->left, target, flag);
        find_path(path, t->right, target, flag);
        if (!flag)
            path.pop_back();
    }
}
//例题:找出根节点到叶子节点的路径和=target 的路径
class Solution
{
public:
    vector< vector<int> >v;
    vector<int>temp;
    void InOrder(TreeNode *root, int sum)
    {
        if (root)
        {
            temp.push_back(root->val);
            InOrder(root->left, sum);
            if (root->left == NULL && root->right == NULL)
            {
                int s=0;//注意这里的初始化
                for (int i = 0; i < temp.size(); i++)
                    s += temp[i];
                if (s == sum)
                    v.push_back(temp);
            }
            InOrder(root->right, sum);
            temp.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode *root, int sum)
    {
        InOrder(root, sum);
        return (v);
    }
};


//8.交换所有的左右子树 后序遍历
void Swap_Tree(TreeNode *&t)
{
    if (t)
    {
        Swap_Tree(t->left);
        Swap_Tree(t->right);
        TreeNode *temp;
        temp = t->left;
        t->left = t->right;
        t->right = temp;
    }
}

//9.求每个叶子结点的权重路径值
class Solution
{
public:
    int cal(vector<int> s) //计算二进制的值
    {
        int i = s.size() - 1;
        int j = 0, sum = 0;
        while (i >= 0)
        {
            sum += s[i] * pow(2, j);
            i--;
            j++;
        }
        return (sum);
    }
    void Inorder(TreeNode *&root, vector<int> &STACK, vector<int> &result) //
    {
        if (root)
        {
            STACK.push_back(root->val); //中序遍历进入和出去要入栈弹栈
            if (root->left == NULL && root->right == NULL)
            {
                result.push_back(cal(STACK));
            }
            Inorder(root->right, STACK, result);
            Inorder(root->left, STACK, result);
            STACK.pop_back();
        }
    }
    int sumRootToLeaf(TreeNode *root)
    {
        if (root == NULL)
            return (0);
        if (root->left == NULL && root->right == NULL)
            return (root->val);
        vector<int> result;
        vector<int> STACK;
        Inorder(root, STACK, result);
        int sum = 0;
        for (int i = 0; i < result.size(); i++)
            sum += result[i];
        return (sum);
    }
};
//10.求二叉树的最深节点的和-运用中序遍历
    int height(TreeNode* root)
    {
        if(root)
        {
            return(max(height(root->right),height(root->left))+1);
        }
        else 
        {
            return(0);
        }
    }
    void  InOrder(TreeNode* root,int &sum ,int &h,int H)//中序遍历
    {
        if(root)
        {
            h++;
            InOrder(root->left,sum,h,H);
            if(h==H)//到了最后一层
            {
                sum+=root->val;
            }
            InOrder(root->right,sum,h,H);
            h--;
        }
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        if(root)
        {
            int H=height(root);
            int sum=0;
            int h=0;
            InOrder(root,sum,h,H);
            return(sum);
        }
        else 
        {
            return(0);
        }   
    }


/*******************************************************************************************************************************************************/

3. 图
    //<1> 图的初始化
    struct Arcnode //普通节点
{
    Arcnode(int a)
    {
        adjvex = a;
        next = NULL;
    }
    int adjvex; //实际上是下标
    Arcnode *next;
};
struct VNode //头结点
{
    VNode(char x)
    {
        val = x;
        firstarc = NULL;
    }
    char val;
    Arcnode *firstarc;
};
struct Graph
{
    int vernum;             //点得个数
    int edgenum;            //边的个数
    vector<VNode> vertices; //头结点的数组
};
int Locate(char info, Graph &G) //输入节点info 得到他的下标index
{
    for (int index = 0; index < G.vertices.size(); index++)
    {
        if (G.vertices[index].val == info)
            return (index);
    }
}
void Create(Graph &G)
{
    cout << "input vernum:" << endl;
    cin >> G.vernum;
    cout << "input edgenum" << endl;
    cin >> G.edgenum;
    cout << "input the info of vertex :" << endl; //将节点的信息输入  无向图每条边输入2遍
    for (int i = 0; i < G.vernum; i++)
    {
        char temp;
        cin >> temp;
        VNode vnode(temp);
        G.vertices.push_back(vnode);
    }
    for (int i = 0; i < 2 * G.edgenum; i++) //输入边 注意无向图是2倍！
    {
        char start, end;
        cout << "input the start point and the end point:" << endl;
        cin >> start >> end;
        int index_start = Locate(start, G);
        int index_end = Locate(end, G);
        Arcnode *p = (Arcnode *)new Arcnode(index_end); //将这个节点
        if (G.vertices[index_start].firstarc == NULL)
            G.vertices[index_start].firstarc = p;
        else
        {
            Arcnode *cur = G.vertices[index_start].firstarc;
            while (cur->next)
                cur = cur->next;
            cur->next = p; //插入p节点
        }
    }
}

// <2>图搜索算法  DFS=先序遍历-可以解决    联通图的问题
void DFS(Graph &G, int index, vector<int> &visited)
{
    visited[index] = 1; //访问到
    cout << G.vertices[index].val << "  ";
    Arcnode *p = G.vertices[index].firstarc; //开始遍历他的所有没有被访问的临界点
    while (p)
    {
        if (!visited[p->adjvex]) //如果这个临接点没有被访问
            DFS(G, p->adjvex, visited);
        p = p->next;
    }
}
int DFS_Traval(Graph &G)
{
    int n = 0;
    vector<int> visited;
    for (int i = 0; i < G.vernum; i++)
        visited.push_back(0); //初始化
    for (int i = 0; i < G.vernum; i++)
        if (!visited[i])
        {
            n++; //进行的DFS的个数就是连通分量的个数
            DFS(G, i, visited);
        }
    return (n);
}

//<2>BFS-广度优先遍历-层次遍历-注意与二叉树不一样的地方是他是在入队就访问-解决单源无权的最短路径
void BFS(Graph &G, int i, vector<int> &visited)
{
    queue<int> q; //辅助队列
    if (!visited[i])
    {
        cout << G.vertices[i].val << "  ";
        visited[i] = 1; //入队就访问
        q.push(i);
        while (!q.empty())
        {
            int index = q.front(); //出队
            q.pop();
            Arcnode *cur = G.vertices[index].firstarc;
            while (cur) //开始层次遍历
            {
                if (!visited[cur->adjvex])
                {
                    //入队就访问
                    cout << G.vertices[cur->adjvex].val << "  ";
                    visited[cur->adjvex] = 1;
                    q.push(cur->adjvex);
                }
                cur = cur->next; //依次遍历
            }
        }
    }
}
void BFS_Traval(Graph &G)
{
    vector<int> visited;
    for (int i = 0; i < G.vernum; i++)
        visited.push_back(0);
    for (int i = 0; i < G.vernum; i++) //同样可在此加入记录值  记录多少个联通分量
    {
        if (!visited[i])
            BFS(G, i, visited);
    }
}
//BFS的应用：求这个图中半径最小的生成树
void BFSForTree(vector<int> &visited, int T[][n])
{
    queue<int> q;
    q.push(0); //从0开始访问
    visited[0] = 1;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && G[temp][i])
            {
                q.push(i);
                visited[i] = 1; //入队
                T[temp][i] = 1; //得到生成树
                T[i][temp] = 1;
            }
        }
    }
}
//图中路径问题
<1> 找出i到j的所有路径(先序遍历_ + _栈) void fromVitoVj(Graph &g, int start, int end, vecto<int> &path, vector<int> &visited) //仿造树的求路径的方法
{
    path.push_back(start);
    visited[start] = 1;
    //先序遍历
    if (start == end) //找到目标节点
        print(path);  //找到就输出
    Arcnode *cur = g.vertices[start].firstarc;
    while (cur)
    {
        if (visited[cur->adjvex] == 0) //未访问过的节点
            fromVitoVj(g, cur->adjvex, end, path);
        cur = cur->next;
    }
    visited[start] = 0; //恢复环境
    path.pop_back();
}
//类比树的路径-先序遍历+栈
//找出根节点和给定的节点的路径  注意如果没有这个flag  就会导致path传回来空值->
void find_path(vector<TreeNode *> &path, TreeNode *&t, TreeNode *target, int &flag) //先序遍历
{
    if (flag)
        return; //找到了直接返回
    if (t)
    {
        path.push_back(t);
        if (t == target)
        {
            flag = 1; //找到改变标志位
            return;
        } //遇到目标节点即可退出
        find_path(path, t->left, target, flag);
        find_path(path, t->right, target, flag);
        if (!flag)
            path.pop_back();
    }
}
//变式:通过定点的回路
                      
/********************************************************************************************************************************************************************/
4.排序
//不稳定算法的记忆
// 考研复习好痛苦啊 情绪不稳定啊 快些选一堆好友来聊天吧  
// 快： 快速排序
// 些：shell排序
// 选：简单选择排序
// 堆：堆排序
//<1>插入排序   T=n^2
void InsertSort(vector<int> &v)
{
    for (int cur = 1; cur < v.size(); cur++)
    {
        int temp = v[cur];
        int i = cur - 1;
        while (i >= 0 && v[i] > temp) //这里的条件要注意鸭！  一定是先判断 i>=0
        {
            v[i + 1] = v[i];
            i--;
        }
        v[i + 1] = temp;
    }
}
//<2>希尔排序   改进版的插入排序
void ShellSort(vector<int> &v) //T=n^2
{
    for (int gap = v.size() / 2; gap >= 1; gap = gap / 2) //gap为中间的间隙
    {                                                     //这里的gap相当于1
        for (int cur = gap; cur < v.size(); cur++)        //插入排序的开始节点  每次循环都是一次插入排序！
        {
            cout << cur << endl;
            int temp = v[cur];
            int i = cur - gap;
            while (i >= 0 && v[i] > temp)
            {
                v[i + gap] = v[i];
                i = i - gap;
            }
            v[i + gap] = temp;
        }
    }
}
//交换排序
//<3>冒泡排序
//t=n^2
void BubbleSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++) //次数
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}
//<4>快速排序法  分治策略 时间 T=nlogn      空间：栈深 logn
int partition(vector<int> &v, int L, int H)
{
    int low = L;
    int high = H;
    int key = v[low];
    while (low < high)
    {
        while (low < high && v[high] >= key)
            high--;
        while (low < high && v[low] <= key)
            low++;
        swap(v[low], v[high]);
    }
    swap(v[L], v[low]);
    return (low);
}
void QSort(vector<int> &v, int low, int high)
{
    if (low < high)
    { //注意这里别忘记
        int mid = partition(v, low, high);
        QSort(v, low, mid);
        QSort(v, mid + 1, high);
    }
}

//<5>二路归并排序  T=n^2
void MergeSort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(v, low, mid); //先排序  再合并
        MergeSort(v, mid + 1, high);
        merge(v, low, mid, mid + 1, high);
    }
}

//<6>堆排序  1.建堆-从第一个非叶子节点开始调整向上 2.将最大的放到后面
void adjust(int low,int high,vector<int>&v)//调整low为根部的树
{
    int father=low;
    int child=2*low+1;
    while(child<high)
    {
        if( child+1<high  &&  v[child]<v[child+1] )//指向最大的
            child++;
        if(v[child]>v[father])
        {
            swap(v[child],v[father]);
            father=child;
            child=father*2+1;
        }
        else break;
    }
}
void HeapSort(vector<int>&v)//先建堆
{
    int n=v.size();
    for(int i=n/2-1;i>=0;i--)//从第一个非叶子节点开始
        adjust(i,v.size()-1,v);
    for(int i=v.size()-1;i>=0;i--)//每次都将最大的跳出来
    {
        swap(v[0],v[i]);//把最大的值放在后面
        adjust(0,i-1,v);
    }
    print(v);
}

//<7>堆的操作
//插入
//堆的基本操作
//建堆
void adjustHeap(vector<int> &v, int i) //调整以index作为节点的  小顶堆 从向下调整！也是删除的代码
{
    while (i < v.size())
    {
        int child = i * 2 + 1; //child存储最大的孩子节点
        if (child + 1 < v.size() && v[child + 1] > v[child])
            child++;
        if (child < v.size() && v[child] > v[i])
        {
            swap(v[child], v[i]);
            i = child;
        }
        else
            break;
    }
}
void buildHeap(vector<int> &v)
{
    //从第一个非叶子节点开始调整
    for (int i = (v.size() - 1) / 2; i >= 0; i--)
        adjustHeap(v, i);
}
void HeapSort(vector<int> &v)
{
    buildHeap(v);
    for (int i = 0; i < N; i++)
    {
        cout << v[0] << " ";
        v[0] = v[v.size() - 1];
        v.pop_back();
        adjustHeap(v, 0);
    }
}
//插入  向上调整
void InsertHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int i = v.size() - 1;

    while (i >= 0)
    {
        if (v[i] < v[(i - 1) / 2]) //大于自己的双亲节点
        {
            swap(v[i], v[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
        else
            break; //如果不大于就直接跳出 调整结束
    }
}
//删除
void delete (vector<int> &v, int x)
{

}

//1.图论算法

<1> 判断图中是否有环
    1.无向图 : 那就是将度为1或者0的节点删除，并删除他相连接的边，修改其他顶点的度，都删除这说明无环 否则有环

               int Search(Graph &g) //寻找度<=1 找到就
{
    for (int i = 0; i < g.vernum; i++) //找到节点度<=1的
        if (g.in[i] == true && (g.vertices[i].degree == 0 || g.vertices[i].degree == 1))
            return (i);
    return (-1);
}
bool isLoop(Graph &g)
{
    int i;
    while (Search(g) >= 0)
    {
        i = Search(g);
        g.in[i] = false; //删去
        cout << "delete" << i << endl;
        Arcnode *cur = g.vertices[i].firstarc;
        while (cur) //与这个点相连的删除
        {
            g.vertices[cur->adjvex].degree--;
            cur = cur->next;
        }
    } //遍历这个数组
    for (int index = 0; index < g.vernum; index++)
        if (g.in[index] == true)
            return (true);
    return (false);
}

<2> 有向图(g.vertices[i].degree == 0) //图中度是0的节点
    s.push(i);
int n = 0;
while (!s.empty())
{
    int temp = s.front();
    n++; //删除的节点个数
    s.pop();
    ArcNode *cur = g.vertices[temp].firstarc;
    while (cur)
    {
        g.vertices[cur->adjvex].degree--;
        if (g.vertices[cur->adjvex].degree == 0)
            s.push(cur->adjvex);
        cur = cur->next;
    }
}
if (n == g.n)
    return (false); //无环
else
    return (true);
}

//2.树的遍历-非递归算法<none-recursion>

/
{
    s.push_back(h);
    while (s.size())
    {
        TreeNode *temp = s[s.size() - 1];
        cout << temp->val << endl;
        s.pop_back(); //出栈
        //注意先右后左 这样才可以使出栈的时候是NLR
        if (temp->right)
            s.push_back(temp->right);
        if (temp->left)
            s.push_back(temp->left);
    }
}
}

//后序 类比先序NLR 后序LRN 逆后序 NRL 通过逆后序来实现
void PostorderNoneRecursion(TreeNode *&h)
{
    stack<TreeNode *> s2;
    vector<TreeNode *> s;
    if (h)
    {
        s.push_back(h);
        while (s.size())
        {
            TreeNode *temp = s[s.size() - 1];
            s2.push(temp); //将它入栈
            s.pop_back();  //出栈
            //逆后序
            if (temp->left)
                s.push_back(temp->left);
            if (temp->right)
                s.push_back(temp->right);
        }
    }
    while (!s2.empty())
    {
        cout << s2.top()->val << endl;
        s2.pop();
    }
}

//中序的非递归算法  LNR 注意找最左段的节点！
void InorderRecursion(TreeNode *&t)
{
    vector<TreeNode *> s;
    while (t)
    {
        s.push_back(t);
        用拓扑排序成功与否来判断

        bool isLoop(Graph & g)
        {
            stack<int> s;
            for (int i = 0; i < g.vernum; i++)
                if
                    t = t->left;
        }
        while (s.size())
        {
            TreeNode *temp = s[s.size() - 1];
            s.pop_back();
            cout << temp->val << endl;
            if (temp->right)
            {
                TreeNode *r = temp->right;
                while (r)
                {
                    s.push_back(r); //将其路径上的节点一次入栈
                    r = r->left;
                }
            }
        }
    }

    2. < string >

        int p;         //这是一个普通的整型变量
    int *p;            //首先从P 处开始,先与*结合,所以说明P 是一个指针,然后再与int 结合,说明指针所指向的内容的类型为int 型.所以P是一个返回整型数据的指针
    int p[3];          //首先从P 处开始,先与[]结合,说明P 是一个数组,然后与int 结合,说明数组里的元素是整型的,所以P 是一个由整型数据组成的数组
    int *p[3];         //首先从P 处开始,先与[]结合,因为其优先级比*高,所以P 是一个数组,然后再与*结合,说明数组里的元素是指针类型,然后再与int 结合,说明指针所指向的内容的类型是整型的,
                       //所以P 是一个由返回整型数据的指针所组成的数组
    int(*p)[3];        //首先从P 处开始,先与*结合,说明P 是一个指针然后再与[]结合(与"()"这步可以忽略,只是为了改变优先级),说明指针所指向的内容是一个数组,然后再与int 结合,说明数组里的元素是整型的.所以P 是一个指向由整型数据组成的数组的指针
    int **p;           //首先从P 开始,先与*结合,说是P 是一个指针,然后再与*结合,说明指针所指向的元素是指针,然后再与int 结合,说明该指针所指向的元素是整型数据.由于二级指针以及更高级的指针极少用在复杂的类型中,所以后面更复杂的类型我们就不考虑多级指针了,最多只考虑一级指针.
    int p(int);        //从P 处起,先与()结合,说明P 是一个函数,然后进入()里分析,说明该函数有一个整型变量的参数,然后再与外面的int 结合,说明函数的返回值是一个整型数据
    Int (*p)(int);     //从P 处开始,先与指针结合,说明P 是一个指针,然后与()结合,说明指针指向的是一个函数,然后再与()里的int 结合,说明函数有一个int 型的参数,再与最外层的int 结合,说明函数的返回类型是整型,所以P 是一个指向有一个整型参数且返回类型为整型的函数的指针
    int *(*p(int))[3]; //可以先跳过,不看这个类型,过于复杂从P 开始,先与()结合,说明P 是一个函数,然后进入()里面,与int 结合,说明函数有一个整型变量参数,然后再与外面的*结合,说明函数返回的是一个指针,,然后到最外面一层,先与[]结合,说明返回的指针指向的是一个数组,然后再与*结合,说明数组里的元素是指针,然后再与int 结合,说明指针指向的内容是整型数据.所以P 是一个参数为一个整数据且返回一个指向由整型指针变量组成的数组的指针变量的函数.
    ！
        //****************************************************************************************************/

        //动态规划:
        int
        maxSubArray(vector<int> & nums)
    {
        //dp 放置以A[i]结尾的连续序列最大和
        vector<int> dp;
        dp.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            dp.push_back(max(nums[i], dp[i - 1] + nums[i])); //只有2种可能和 前面累加起来
        }
        return (*max_element(dp.begin(), dp.end()));
    }

    // two points：倾向于排好序的

    // 1. a+b=M
    // 以一个例子引入：给定一个递增的正整数序列和一个正整数M，
    // 求序列中的两个不同位置的数a和b，使得他们的和恰好为M，
    // 输出所有满足条件的方案。
    while (i < j)
    {
        if (A[i] + B[j] == M)
        {
            printf("%d+%d\n", A[i], B[j]);
            i++;
            j--;
        }
        else if (A[i] + B[j] < M)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    //变式：求三个数的和  思路:固定一个 另2个用2个 pointers
    vector<vector<int>> threeSum(vector<int> & nums)
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int k = 0; k < nums.size(); ++k)
        {
            if (nums[k] > 0)
                break;
            if (k > 0 && nums[k] == nums[k - 1])
                continue;
            int target = 0 - nums[k];
            int i = k + 1, j = nums.size() - 1;
            while (i < j)
            {
                if (nums[i] + nums[j] == target)
                {
                    res.push_back({nums[k], nums[i], nums[j]});
                    while (i < j && nums[i] == nums[i + 1])
                        ++i;
                    while (i < j && nums[j] == nums[j - 1])
                        --j;
                    ++i;
                    --j;
                }
                else if (nums[i] + nums[j] < target)
                    ++i;
                else
                    --j;
            }
        }
        return res;
    }
    //最接近的三数之和
    vector<int> Delete(vector<int> nums, int i) //剔除这个值
    {
        nums.erase(nums.begin() + i);
        return (nums);
    }
    int threeSumClosest(vector<int> & nums, int target)
    {
        int MIN = 99999;
        sort(nums.begin(), nums.end());
        int result;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> temp = Delete(nums, i);
            int low = 0;
            int high = temp.size() - 1;
            while (low < high)
            {
                if (nums[i] + temp[low] + temp[high] == target)
                {
                    result = target;
                    break;
                }
                else if (nums[i] + temp[low] + temp[high] > target)
                {
                    if (abs(nums[i] + temp[low] + temp[high] - target) < MIN) //差值比最小的还小 不断的记录差值
                    {
                        MIN = abs(nums[i] + temp[low] + temp[high] - target);
                        result = nums[i] + temp[low] + temp[high];
                    }
                    high--;
                }
                else if (nums[i] + temp[low] + temp[high] < target)
                {
                    if (abs(nums[i] + temp[low] + temp[high] - target) < MIN) //差值比最小的还小
                    {
                        MIN = abs(nums[i] + temp[low] + temp[high] - target);
                        result = nums[i] + temp[low] + temp[high];
                    }
                    low++;
                }
            }
        }
        return (result);
    }

    //2.求交集
    //求交集：排序+2pointers
    class Solution
    {
    public:
        vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> result;
            sort(nums1.begin(), nums1.end());
            sort(nums2.begin(), nums2.end());
            int index1 = 0, index2 = 0;
            while (index1 < nums1.size() && index2 < nums2.size())
            {
                if (nums1[index1] == nums2[index2])
                {
                    result.push_back(nums1[index1]);
                    index1++;
                    index2++;
                }
                else if (nums1[index1] > nums2[index2])
                {
                    index2++;
                }
                else if (nums1[index1] < nums2[index2])
                {
                    index1++;
                }
            }
            return (result);
        }
    };

    /*****************************************************************************************************/
    //二分法 ：倾向于排好序的  没有等于号
    int binSearch(vector<int> v, int key)
    {
        l = 0;
        h = v.size() - 1;
        while (l < h)
        {
            int mid = (l + h) >> 1; //除2
            if (key < v[mid])
                h = mid; //深入前 半段[lo,mid)继续查找
            else if (key > v[mid])
                l = mid + 1; //深入后半段[mid+1,hi)
            else
                return mid;
        }
        return -1;
    }

    //Search in Rotated Sorted Array II
    class Solution
    {
    public:
        bool search(vector<int> &nums, int target)
        {
            int l = 0, r = nums.size() - 1;

            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (nums[mid] == target)
                    return true;
                if (nums[mid] < nums[r])
                {
                    if (nums[mid] < target && target <= nums[r])
                        l = mid + 1;
                    else
                        r = mid - 1;
                }
                else if (nums[mid] > nums[r])
                {
                    if (nums[mid] > target && target >= nums[l])
                        r = mid - 1;
                    else
                        l = mid + 1;
                }
                else
                    r--;
            }
            return false;
        }
    };

    /*****************************************************************************************************/
    //求一个数字的各个位数!重要！
    vector<int> num(int count)
    {
        vector<int> result;
        while (count)
        {
            int n = count % 10;
            result.push_back(n);
            count = count / 10;
        }
        return (result);
    }
    //求一个数字的二进制
    
    //1.倒置2进制的数
    uint32_t reverseBits(uint32_t n)
    {
        vector<int> bits;
        for (int i = 0; i < 32; i++)
        {
            bits.push_back(n % 2);
            n = n / 2;
        }
        int i = 0;
        uint32_t sum = 0;
        for (int i = 0; i < 32; i++)
        {
            sum = sum * 2 + bits[i];
        }
        return (sum);
    }

    /*********************************************************/
    //字符串全排列
    void full_permutation(vector<char> a, int index)
    {
        if (index == a.size() - 1)
        {
            for (int i = 1; i <= a.size(); i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        else
        {
            for (int i = index; i < a.size(); i++)
            {
                swap(a[i], a[index]);           //对应图一abc的第一次访问
                full_permutation(a, index + 1); //对应图一step2,step4
                swap(a[i], a[index]);           //对应图一abc的第二次访问
            }
        }
    }
/**********************************************************************************************/
//动态规划
//<1>求连续子数组的最大和(正负)
dp[i]= max(dp[i]+arr[ i ] , arr[ i ]) 
int main()
{
    int a[9]={-2,1,-3,4,-1,2,1,-5,4};
    //dp 放置以A[i]结尾的连续序列最大和
    vector<int> dp;
    dp.push_back(a[0]);
    for(int i=1;i<9;i++)
    dp.push_back(max(dp[i],dp[i-1]+a[i]));//只有2种可能和前面累加起来
    cout<< *max_element(dp.begin(),dp.end()) ;
}
//<>最长公共子串 
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        vector<vector<int> > dp;
        for (int i = 0; i < a.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < b.size(); j++)
            {
                temp.push_back(0);
            }
            dp.push_back(temp);
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[0])
            {
                dp[i][0] = 1;
            }
            else
            {
                dp[i][0] = 0;
            }
        }
        for (int j = 0; j < b.size(); j++)
        {
            if (b[j] == a[0])
            {
                dp[0][j] = 1;
            }
            else
            {
                dp[0][j] = 0;
            }
        }
        for (int i = 1; i < a.size(); i++)
        {
            for (int j = 1; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;//动态规划方程
                }
            }
        }
        int max = 0;
        int end;
        for (int j = 0; j < b.size(); j++)
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (dp[i][j] > max)
                {
                    max = dp[i][j];
                    end = i;//注意這裏
                }
            }
        }
        cout << a.substr(end - max + 1, max) << endl;
    }
}


//笔试技巧
//1.四舍五入保留小数点后两位
控制流输出
#include<iomanip>
cout<<fixed<<setprecision(2)<<a<<endl;//注意笔试的时候要加endl
