#include <bits/stdc++.h>

using namespace std;

class LUPrefix
{
public:
    vector<bool> M;
    int pointer;
    LUPrefix(int n) : M(vector<bool>(n)), pointer(0)
    {
    }

    void upload(int video)
    {
        M[video - 1] = true;
    }

    int longest()
    {
        int i = pointer;
        for (; i < M.size(); i++)
            if (M[i] == false)
                break;
        if (i)
            pointer = i;
        return i;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    LUPrefix *obj = new LUPrefix(4);
    obj->upload(3);
    cout << obj->longest() << endl;
    obj->upload(1);
    cout << obj->longest() << endl;
    obj->upload(2);
    cout << obj->longest() << endl;
}
