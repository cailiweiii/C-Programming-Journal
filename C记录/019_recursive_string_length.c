
#include <stdio.h>

int length(char str[])
{
    if (str[0]=='\0')
    {
        return(0);
    }
    else
    {
        return(1+length(str+1));
    }
}
  

int main(void)
{
    char str[100];

    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%99s", str);

    printf("×Ö·û´®³¤¶ÈÎª£º%d\n", length(str));

    return 0;
}

