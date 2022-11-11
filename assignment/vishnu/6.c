int a = 2, b = 3, c = 4;
int f(void);
main()
{
    printf("%d\t", f());
    printf("%d\t%d\t%d\n", a, b, c);
}
int f(void)
{
    int b, c;
    a = b = c = 5;
    return (a + b + c);
}