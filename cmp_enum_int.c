

#include <stdio.h>

int main()
{
    enum DHCP_TYPE 
    {
        DHCPDISCOVER=1,
        DHCPOFFER,
        DHCPREQUEST,
        DHCPDECLINE
    };

    int x = 3;
    if(x == DHCPOFFER)
        printf("yes");
    else
        printf("no");


    return 0;
}
