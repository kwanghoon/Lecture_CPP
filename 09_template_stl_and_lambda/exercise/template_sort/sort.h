#ifndef SORT_H
#define SORT_H

#include <iostream>
using std::cout;
using std::endl;

/*  완성하시오  */
void swapValues(/*  완성하시오  */ variable1, /*  완성하시오  */ variable2)
{
      /*  완성하시오  */ temp;

      temp = variable1;
      variable1 = variable2;
      variable2 = temp;
}

/*  완성하시오  */
int indexOfSmallest(const T a[], int startIndex, int numberUsed)
{
    /*  완성하시오  */ min = a[startIndex];
    int indexOfMin = startIndex;

    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
            //min is the smallest of a[startIndex] through a[index]
        }

    return indexOfMin;
}

/*  완성하시오  */
void sort(/*  완성하시오  */ a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {//Place the correct value in a[index]:
         indexOfNextSmallest =
              indexOfSmallest(a, index, numberUsed);
         swapValues(a[index], a[indexOfNextSmallest]);
      //a[0] <= a[1] <=...<= a[index] are the smallest of the original array
      //elements. The rest of the elements are in the remaining positions.
    }
}


/*  완성하시오  */
void print(/*  완성하시오  */ a[], int numberUsed)
{
    for (int index = 0; index < numberUsed; index++)
      {
	cout << a[index] << " ";
      }
    
    cout << endl;
}

#endif // SORT_H
