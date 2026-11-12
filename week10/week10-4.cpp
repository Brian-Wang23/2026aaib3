// week10-4.cpp 厩策璸礶 Math 材7肈
// LeetCode 43. Multiply Strings
// 计ノ﹃家览秈︽猭
class Solution {
public:
    vector<int> myStrVec(string num) {
        vector<int> ans;
        for (int i=num.length()-1; i>=0; i--){ // 筁ㄓ癹伴
            ans.push_back(num[i] - '0'); // ダ-ダ跑计
        }
        return ans;
    }
    string multiply(string num1, string num2) {
        if (num1=="0" || num2=="0") return "0"; // ヴ计 0 碞跑 0
        vector<int> a = myStrVec(num1); // р﹃跑皚
        vector<int> b = myStrVec(num2);
        vector<int> ans(a.size() + b.size()); // ノㄓ氮
        for (int i=0; i<a.size(); i++){ // a[i]
            for (int j=0; j<b.size(); j++){ // b[j]
                ans[i+j] += a[i] * b[j];
                if (ans[i+j] > 9) { // び璶秈
                    ans[i+j+1] += ans[i+j] / 10; // 禬筁ぶ碞秈
                    ans[i+j] = ans[i+j] % 10; // 痙ㄓ计
                }
            }
        }
        // р筁ㄓ皚跑Θ﹃
        string  ans2 = "";
        for (int i=ans.size()-1; i>=0; i--) {
            if (i==ans.size()-1 && ans[i]==0 ) continue; // 狦程玡琌0 磷秨ウ
            ans2 += ('0' + ans[i]);
        }
        return ans2; // 程蔼计 0 或快?
    }
};
