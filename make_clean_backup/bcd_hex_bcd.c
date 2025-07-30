#include <stdio.h>
#include <stdint.h>

uint8_t a_ds1307_hex2bcd(uint8_t val);
uint8_t a_ds1307_bcd2hex(uint8_t val);


int main()
{
    uint8_t hex,bcd;
    printf("enter hex value\n");
    scanf("%hhx",&hex);
    bcd = a_ds1307_hex2bcd(hex);
    printf("bcd: %hx\n",bcd);
    hex = a_ds1307_bcd2hex(bcd); 
    printf("hex; %hhx\n",hex);

    return 0;

}





uint8_t a_ds1307_hex2bcd(uint8_t val)
{
    uint8_t i, j, k;

    i = val / 10;            /* get tens place */
    j = val % 10;            /* get ones place */
    k = j + (i << 4);        /* set bcd */

    return k;                /* return bcd */
}

/**
 * @brief     bcd to hex
 * @param[in] val bcd data
 * @return    hex data
 * @note      none
 */
uint8_t a_ds1307_bcd2hex(uint8_t val)
{
    uint8_t temp;

    temp = val & 0x0F;              /* get ones place */
    val = (val >> 4) & 0x0F;        /* get tens place */
    val = val * 10;                 /* set tens place */
    temp = temp + val;              /* get hex */

    return temp;                    /* return hex */
}


