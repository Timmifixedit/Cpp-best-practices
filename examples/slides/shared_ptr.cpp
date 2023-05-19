template<typename T>
class TreeNode {
    T value;
    std::shared_ptr<TreeNode> left;
    std::shared_ptr<TreeNode> right;
};