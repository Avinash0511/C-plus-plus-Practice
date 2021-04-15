//Adding two polynomials provided in decreasing order the coefficient and exponents.

#include <stdio.h>

int main()
{
    int size1, size2; //size1 = 1st equation size ------ size2 = 2nd equation size
    scanf("%d", &size1);
    int coeff1[100], expo1[100];
    int coeff2[100], expo2[100];
    
    for(int i=0;i<size1;i++)
    {
        scanf("%d%d", &coeff1[i], &expo1[i]); // 1st euqation input, coefficient then exponent
    } //example: 3x^6 + 8x^4 + 9x^1 + 2 so input will be 3 6 8 4 9 1 2 0
    scanf("%d", &size2);
    for(int i=0;i<size2;i++)
    {
        scanf("%d%d", &coeff2[i], &expo2[i]); // 2nd euqation input, coefficient then exponent
    } // example: x^5 + 2x^3 + 4 so input will be 1 5 2 3 4 0
    int ans_coeff[100], ans_expo[100], i, j, k;
    for(i=0, j=0;i<size1, j<size2;) // i to traverse on equation 1 and j for equation 2
    {
        if(expo1[i] == expo2[j]) // if same add and store in answer coefficient and exponent
        {
            ans_coeff[k] = coeff1[i] + coeff2[j];
            ans_expo[k] = expo1[i];
            i++;
            j++;
            k++;
        }
        else if(expo1[i] != expo2[j] and expo1[i] > expo2[j]) // if not same and exponent of euqation 1 is greater from exponent of equation 2 at that moment then store exponent and coefficient of equation 1
        {
            ans_coeff[k] = coeff1[i];
            ans_expo[k] = expo1[i];
            i++;
            k++;
        }
        else if(expo1[i] != expo2[j] and expo2[j] > expo1[i]) // if not same and exponent of euqation 2 is greater from exponent of equation 1 at that moment 
          //then store exponent and coefficient of equation 2
        {
            ans_coeff[k] = coeff2[j];
            ans_expo[k] = expo2[j];
            j++;
            k++;
        }
    }
  //can happen that one of the euqation traversing get over and other is left so remaining should also be taken care of
    while(i < size1) // if still more left in quation 1 then store and proceed
    {
        ans_coeff[k] = coeff1[i];
        ans_expo[k] = expo1[i];
        k++;
    }
    while(j < size2) // if still more left in quation 2 then store and proceed
    {
        ans_coeff[k] = coeff2[i];
        ans_expo[k] = expo2[i];
        k++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d %d\n", ans_coeff[i], ans_expo[i]);
    }
    return 0;
}
