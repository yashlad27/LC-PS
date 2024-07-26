// Use a stack: A stack data structure is suitable here as it allows easy access to the most recent scores.
// Iterate through operations: For each operation in the list, perform the corresponding action.
// Perform actions based on the operation:
// If the operation is an integer, push it onto the stack.
// If the operation is "+", push the sum of the last two scores.
// If the operation is "D", push double the last score.
// If the operation is "C", pop the last score from the stack.
// Sum the scores: After processing all operations, sum the values in the stack to get the final score.

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> scores;

        for(const string& op:ops){
            if(op=="+"){
                int top=scores.top();
                scores.pop();

                int newTop=top+scores.top();
                scores.push(top);
                scores.push(newTop);
            }else if(op=="D"){
                scores.push(2*scores.top());
            }else if(op=="C"){
                scores.pop();
            }else{
                scores.push(stoi(op));
            }
        }
        int total=0;
        while(!scores.empty()){
            total+=scores.top();
            scores.pop();
        }
        return total;
    }
};