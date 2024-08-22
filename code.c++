#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    int userID[100], balance[100];
    for (int i = 0; i < N; i++) 
    {
        cin >> userID[i] >> balance[i];
    }
    int T;
    cin >> T;
    while (T--)
    {
        int from_userID, to_userID, amount;
        cin >> from_userID >> to_userID >> amount;
        int from_index = -1, to_index = -1;
        for (int j = 0; j < N; j++)
        {
            if (userID[j] == from_userID) 
            {
                from_index = j;
            }
            if (userID[j] == to_userID)
            {
                to_index = j;
            }
        }
        if (balance[from_index] >= amount) 
        {
            balance[from_index] -= amount;
            balance[to_index] += amount;
            cout << "Success" << endl;
        } 
        else 
        {
            cout << "Failure" << endl;
        }
    }
    cout << endl;
    pair<int, int> user_balance[101];
    for (int i = 0; i < N; i++)
    {
        user_balance[i] = {balance[i], userID[i]};
    }
    sort(user_balance, user_balance + N);
    for (int i = 0; i < N; i++) 
    {
        cout << user_balance[i].second << " " << user_balance[i].first << endl;
    }
    return 0;
}
