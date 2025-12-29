#include <iostream>
using namespace std;
/*
(1)
void main()
{
    int i, j, * pi, * pj;
    pi = &i;
    pj = &j;
    i = 5; j = 7;
    cout << i << '\t'<< j << '\t' << pi << '\t' << pj;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
}*/


/*
(2)
int main()
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;
    for (i = 0; i < 3; i++)
    printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
}*/


/*
(3)
#include <iostream>
using namespace std;

void f(char* st, int i)
{
    st[i] = '\0';
    cout << st << endl;
    if (i > 1) f(st, i - 1);
}

int main()
{
    char st[] = "abcd";
    f(st, 4);
    return 0;
}*/

/*
(4)
#include<iostream>
using namespace std;
int* f()
{
    int* list = new int[4] {1, 2, 3, 4};
    return list;
}
int main()
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    return 0;
}*/