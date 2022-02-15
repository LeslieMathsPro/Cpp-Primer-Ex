class TreeNode {
public:
    TreeNode() : value(string()), count(0), left( nullptr ), right( nullptr ) {}
    TreeNode(const TreeNode &T): value(T.value), count(T.count), left(new TreeNode(*T.left)), right(new TreeNode(*T.right)) { }
    TreeNode& operator=(const TreeNode &);
    ~TreeNode();
private:
    std::string value;
    int         count;
    TreeNode    *left;
    TreeNode    *right;
};

TreeNode::TreeNode& TreeNode::operator=(const TreeNode & orig)
{
    value = orig.value;
    count = orig.count;

    auto newpl = new TreeNode(*orig.left);
    auto newpr = new TreeNode(*orig.right);

    delete left;
    delete right;

    left = newpl;
    right = newpr;

    return *this;
}

TreeNode::~TreeNode()
{
    delete right;
    delete left;
}