class Solution {
 public:
  string removeKdigits(string num, int k) {
    if (num.length() == k)
      return "0";

    string resp;
    vector<char> stack;

    for (int i = 0; i < num.length(); ++i) {
      while (k > 0 && !stack.empty() && stack.back() > num[i]) {
        stack.pop_back();
        --k;
      }
      stack.push_back(num[i]);
    }

    while (k-- > 0)
      stack.pop_back();

    for (const char c : stack) {
      if (c == '0' && resp.empty())
        continue;
      resp += c;
    }

    return resp.empty() ? "0" : resp;
  }
};