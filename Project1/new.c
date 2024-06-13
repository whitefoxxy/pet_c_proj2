#include <malloc.h>
#include <stdlib.h>



double maxf(double mas[], int n)
{
    double max_chis = 0;
    for (int i = 0; i < n; i++)
        if (max_chis < mas[i])
            max_chis = mas[i];

    return max_chis;
};

int max_ind(double mas[], int n, double max_chis)
{
    for (int i = 0; i < n; i++)
        if (mas[i] == max_chis)
            return i;
};

double *add(int n, double (f)(double))
{
    double *arr, *itog, chis_itog[6];
    
    arr = (double*)malloc(n * sizeof(double));
    itog = (double*)malloc(n * sizeof(double));
    
    for (int i = 0; i < n; i++)
        arr[i] = 0.1 * i;

    

    for (int i = 0; i < n; i++)
        itog[i] = f(arr[i]);

    chis_itog[0] = maxf(itog, n);
    chis_itog[1] = arr[max_ind(itog, n, chis_itog[0])];

    return chis_itog;
}