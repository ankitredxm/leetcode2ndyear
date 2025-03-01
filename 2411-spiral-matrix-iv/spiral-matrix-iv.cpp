/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m, vector<int>(n));
        int minr = 0;
        int minc = 0;
        int maxr = m - 1;
        int maxc = n - 1;
        
        while (1>0) {
            if (minc <= maxc && minr <= maxr) {
                for (int i = minc; i <= maxc; ++i) {
                    if (head != NULL) {
                        v[minr][i] = head->val;
                        
                        head = head->next;
                    } else {
                        v[minr][i] = -1;
                    }
                }
                ++minr;
            } else {
                break;
            }

            if (minc <= maxc && minr <= maxr) {
                for (int i = minr; i <= maxr; ++i) {
                    if (head != NULL) {
                        v[i][maxc] = head->val;
                        head = head->next;
                    } else {
                        v[i][maxc] = -1;
                    }
                }
                --maxc;
            } else {
                break;
            }
            if (minc <= maxc && minr <= maxr) {
                for (int i = maxc; i >= minc; --i) {
                    if (head != NULL) {
                        v[maxr][i] = head->val;
                        head = head->next;
                    } else {
                        v[maxr][i] = -1;
                    }
                }
                --maxr;
            } else {
                break;
            }
            if (minc <= maxc && minr <= maxr) {
                for (int i = maxr; i >= minr; --i) {
                    if (head != NULL) {
                        v[i][minc] = head->val;
                        head = head->next;
                    } else {
                        v[i][minc] = -1;
                    }
                }
                ++minc;

            } else {
                break;
            }
        }
        return v;
    }
};