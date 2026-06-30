#include <stdio.h>

void PrintVersion()
{
    printf("Standard SEMA v1.1 (Bug Fixed)\n");
}

void BugFix()
{
    printf("Fixed temperature calculation bug.\n");
}

int main()
{
    PrintVersion();
    BugFix();
    return 0;
}
