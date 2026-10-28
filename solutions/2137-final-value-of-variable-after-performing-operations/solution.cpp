class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int var =0;
        for(int i=0;i < operations.size(); i++){
            std::string ch = operations[i];
            if(ch == "++X" || ch == "X++"){
                var = var + 1;
            }
            else if (ch == "--X" || ch == "X--"){
                var = var - 1;
            }
        }
        return var;
        
    }
};
