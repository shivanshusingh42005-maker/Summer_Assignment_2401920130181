class Codec {
public:
    
    void save(TreeNode* root, string &s) {
        if (root == NULL) {
            s += "N,";
            return;
        }

        s += to_string(root->val) + ",";

        save(root->left, s);
        save(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s = "";
        save(root, s);
        return s;
    }

    
    TreeNode* makeTree(string &data, int &i) {
        if (data[i] == 'N') {
            i += 2;  
            return NULL;
        }

        string num = "";
        while (data[i] != ',') {
            num += data[i];
            i++;
        }

        i++;

        TreeNode* root = new TreeNode(stoi(num));

        root->left = makeTree(data, i);
        root->right = makeTree(data, i);

        return root;
    }

    TreeNode* deserialize(string data) {
        int i = 0;
        return makeTree(data, i);
    }
};
