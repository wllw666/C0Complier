const int _ = -0;
const int __=+0;
const int _2 = 2, _PoS_3 = 3, neg5_ = -5;
const char add = '+', sub = '-', mul = '*', _div = '/';

const int MAX_FIBO = 100;

int N, n;
int fibo[100], num[100];
char str[1000];

void init_fibo()
{
    int i;
    i = 0;
    while (i < MAX_FIBO/2+1) {
        fibo[i] = 0;
        fibo[MAX_FIBO-1-i] = 0;
        i = i + 1;
    }
}

int fibonacci(int n)
{
    switch (n) {
        case 0: return (0);
        case 1: return (1);
        default: {
            if (fibo[n] == 0)
                fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
            return (fibo[n]);
        }
    }
}

int factorial(int n)
{
    if (n == 0)
        return (1);
    return (n * factorial(n - 1));
}



void swap(int i, int j)
{
    int tmp;
    tmp = num[i];
    num[i] = num[j];
    num[j] = tmp;
    return;
}

void sort(int left, int right)
{
    if (left >= right) {
        return;
    }
    int i, j;
    i = left;
    j = left + 1;
    while (j <= right) {
        if (num[j] < num[left]) {
            i = i + 1;
            swap(i, j);
        }
        j = j + 1;
    }
    swap(left, i);
    sort(left, i - 1);
    sort(i + 1, right);
}

int calculate(int a, int b, char op)
{
    switch (op) {
        case '+': return (a + b);
        case '-': return (a - b);
        case '*': return (a * b);
        case '/': return (a / b);
    }
    return (0);
}

int charcomp(char a, char b, int op)
{
    const int _true = 1, _false = 0;
    int ret;
    {
        ret = _false;
    };
    switch (op) {
        case 1: if(a<b) ret = _true;
        case 2: if(a<=b) ret = _true;
        case 3: if(a>b) ret = _true;
        case 4: if(a>=b) ret = _true;
        case 5: if(a!=b) ret = _true;
        case 6: if(a==b) ret = _true;
        default : ret = _false;
    }
    return (ret);
}

void strrev(int i, int j)
{
    char c;
    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i = i + 1;
        j = j - 1;
    }
}

void main()
{
    const char x = 'x', X = 'X';
    int result;
    int a, b;
    int i, tmp;

    printf("Test start:");
    printf("Test printf:");
    printf("This is a string.");
    printf('_');
    printf('1');
    printf(-1024);
    printf(_);
    printf(__);
    printf(_2);
    printf(_PoS_3);
    printf(neg5_);
    printf(X);
    printf('x');
    printf('X');
    printf(x);
    printf(X);
    printf("X*2+x/3 ",X*2+x/3);
    
    printf("Test scanf:");
    printf("Please input int a:");
    scanf(a);
    printf("int a is ", a);
    printf("Please input char x:");
    scanf(x);
    printf("char x is ", x);

    printf("Test charcomp:");
    i=1;
    while(i<=6){
        printf(charcomp('A', 'a', i));
        printf(charcomp('a', 'a', i));
        printf(charcomp('a', 'A', i));
    }

    printf("Test calculate:");
    a = -123*456+-987/+321*(2-1);
    b = (-a*1 + -0 * 156) / 123;
    printf("a: ", a);
    printf("b: ", b);
    result = calculate(a, b, add);
    printf("a b add: ", result);
    result = calculate(a, b, sub);
    printf("a b sub: ", result);
    result = calculate(a, b, mul);
    printf("a b mul: ", result);
    printf("a b div: ", calculate(a, b, _div));

    printf("Test strrev:");
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '_';
    str[6] = '1';
    str[7] = '2';
    str[8] = '3';
    strrev(0, 8);
    i = 0;
    while (i < 9) {
        printf(str[i]);
        i = i + 1;
    }

    printf("Please input N, n:");
    scanf(N, n);
    printf("Test factorial N: ", factorial(N));

    init_fibo();
    printf("Test fibonacci n: ", fibonacci(n));


    printf("Please input 10 numbers:");
    i = 0;
    while (i < 10) {
        scanf(tmp);
        num[i] = tmp;
        i = i + 1;
    }
    sort(0, 9);
    printf("Test sort:");
    i = 0;
    while (i < 10) {
        printf(num[i]);
        i = i + 1;
    };
    ;;;
    printf("Test finished.");

    return;
}