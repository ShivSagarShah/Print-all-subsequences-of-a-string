Method 1: If we want to find the subsequence of "abc" then (find the subsequence of "bc") + (adding 'a' to every subsequences of "bc" from first) this will give 
all the subsequences of "abc".
We have two pointers i and j, i keeps a track on input string while j keeps a track on output string.
If i becomes NULL then add NULL to output string in the last and then print the output string.
We are taking two cases, first we include the first character and second we don't include it.



#include <iostream>
using namespace std;
void subsequence(char in[], int i, char ou[], int j)
{

    // Base case
    if (in[i] == '\0')
    {
        ou[j] = '\0';
        cout << ou << " ";
        return;
    }

    // Recursive case
    // exclude karo
    subsequence(in, i + 1, ou, j);

    // include karo
    ou[j] = in[i];
    subsequence(in, i + 1, ou, j + 1);
}

int main()
{
    char input[100], output[100];
    cin >> input;

    subsequence(input, 0, output, 0);
    return 0;
}
