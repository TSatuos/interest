#include <iostream>
#include <unistd.h>
using namespace std;
static int count = 0;
int interaction()
{
    int in;
    cin >> in;
    if (in == 1)
    {
        cout << "Ok,bye.\n"
             << endl;
    }
    else if (in == 0)
    {
        if (count == 0)
        {
            cout << "\n\nLet me show you.\n"
                 << endl;
            count++;
        }
        else
            cout << "\n\nLet me show you again.\n"
                 << endl;
    }
    else
    {
        cout << "You can only input 1 or 0 !\ntry again>" << endl;
        cin >> in;
    }
    return in;
}
int main()
{
    cout << "Do you know how to proof that 1=2?\ninput>   1:yes 0:no\n    >>   ";
    sleep(1);
    bool flag = !interaction();
    while (flag)
    {
        cout << "First:" << endl;
        sleep(1);
        cout << " When a+b=X and c+d=Y," << endl;
        sleep(1);
        cout << "     If X=Y ," << endl;
        sleep(1);
        cout << " we get a+b=c+d , right?\n"
             << endl;
        sleep(1);
        cout << "Remember:" << endl;
        sleep(1);
        cout << "the answer X equals to Y is the key\n"
             << endl;
        sleep(1);
        cout << "Then:\nWhen 3/2=Answer_X , 5/4=Answer_Y" << endl;
        sleep(1);
        cout << "     if Answer_X=Answer_Y" << endl;
        sleep(1);
        cout << "we get 3/2=5/4 ,right?\n"
             << endl;
        sleep(1);
        cout << "Answer_X   =   ";
        sleep(1);
        cout << 3 / 2;
        sleep(1);
        cout << " ... ";
        sleep(1);
        cout << 3 % 2 << endl;
        cout << "Answer_Y   =   ";
        sleep(1);
        cout << 5 / 4;
        sleep(1);
        cout << " ... ";
        sleep(1);
        cout << 5 % 4 << endl;
        sleep(1);
        cout << "Answer_X do equals to Answer_Y!\n"
             << endl;
        sleep(1);
        cout << "So ..." << endl;
        sleep(1);
        cout << "   3/2x4=5/4x4" << endl;
        sleep(1);
        cout << "     3x2=5" << endl;
        sleep(1);
        cout << "       6=5" << endl;
        sleep(1);
        cout << "     6-4=5-4" << endl;
        sleep(1);
        cout << "       2=1" << endl;
        sleep(1);
        cout << "\n?!...wait!\n"
             << endl;
        sleep(2);
        cout << "we get what we want !!" << endl;
        sleep(1);
        cout << " --->    1=2 !!!\n"
             << endl;
        sleep(2);
        cout << "Got it?\ninput>    1:yes 0:no\n    >>    ";
        sleep(1);
        if (interaction())
            flag = 0;
        else
            flag = 1;
    }
}