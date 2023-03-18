/*
 * @lc app=leetcode id=1472 lang=cpp
 *
 * [1472] Design Browser History
 */

// @lc code=start
#include <iostream>
#include <string>
#include <stack>

using namespace std;
class BrowserHistory {
    string currpage;
    stack<string> fd;
    stack<string> bd;
public:
    BrowserHistory(string homepage) {
        currpage = homepage;
    }
    
    void visit(string url) {
        stack<std::string>().swap(fd);
        bd.push(currpage);
        currpage = url;
    }
    
    string back(int steps) {
        while (steps--)
        {
            if (bd.empty())
                return currpage;
            fd.push(currpage);
            currpage = bd.top();
            bd.pop();
        }
        return currpage;
    }
    
    string forward(int steps) {
        while (steps--)
        {
            if (fd.empty())
                return currpage;
            bd.push(currpage);
            currpage = fd.top();
            fd.pop();
        }
        return currpage;
    }
};


/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
// @lc code=end

