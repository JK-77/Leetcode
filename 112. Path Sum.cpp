// TC : O(N) no og nodes
// SC: O(H) height of the tress

class Solution {
public:
    
    bool flag = false;
    void dfs(TreeNode* root, int targetSum, int sum) {
        if(!root) {
            return;
        }
        sum += root -> val;

        if(sum == targetSum && !root -> left && !root -> right) {
            flag = true;
            return;
        }
        dfs(root -> left, targetSum, sum);
        dfs(root -> right, targetSum, sum);

    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        dfs(root, targetSum, sum);
        return flag;
    }
};
