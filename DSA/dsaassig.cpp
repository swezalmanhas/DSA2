



#include <iostream>
using namespace std;
#define swezal_if if
#define swezal_while while
#define swezal_for for
#define swezal_cout cout
#define swezal_in  cin


int main()
{

    int t = 1;

    int n = t;
    swezal_while (t--)
    {
        long long int size, size2, i, j, k;
        swezal_in >> size;
        swezal_in >>size2;

        int arrswezal[size][size][size];
        swezal_for (i = 0; i < size; i++)
            swezal_for (j = 0; j < size; j++)
                swezal_for (k = 0; k < size; k++)
                    swezal_in >> arrswezal[i][j][k];

        swezal_while (size2--)
        {
            int curr = 0;
            i = j = k = 0;
            swezal_while (j < size)
            {
                swezal_for (i = 0; i < size; i++)
                {
                    curr += arrswezal[i][j][i];
                    arrswezal[i][j][i] = curr - arrswezal[i][j][i];
                    curr -= arrswezal[i][j][i];
                }
                j++;
                swezal_if (j < size)
                {
                    swezal_for (i = size - 1; i >= 0; i--)
                    {
                        curr += arrswezal[i][j][i];
                        arrswezal[i][j][i] = curr - arrswezal[i][j][i];
                        curr -= arrswezal[i][j][i];
                    }
                }
                j++;
            }
            arrswezal[0][0][0] = curr;
            i = j = k = 0;
            swezal_while (j < size)
            {
                swezal_for (i = 0; i < size; i++)
                {
                    curr += arrswezal[size - i - 1][j][i];
                    arrswezal[size - 1 - i][j][i] = curr - arrswezal[size - 1 - i][j][i];
                    curr -= arrswezal[size - 1 - i][j][i];
                }
                j++;
                swezal_if (j < size)
                {
                    swezal_for (i = size - 1; i >= 0; i--)
                    {
                        curr += arrswezal[size - 1 - i][j][i];
                        arrswezal[size - 1 - i][j][i] = curr - arrswezal[size - 1 - i][j][i];
                        curr -= arrswezal[size - 1 - i][j][i];
                    }
                }
                j++;
            }
            arrswezal[size - 1][0][0] = curr;
        }
        swezal_for (i = 0; i < size; i++)
        {
            swezal_for (j = 0; j < size; j++)
            {
                swezal_for (k = 0; k < size; k++)
                {
                    swezal_cout << arrswezal[i][j][k] << " ";
                }
            }
        }
    }
    return 0;
}
