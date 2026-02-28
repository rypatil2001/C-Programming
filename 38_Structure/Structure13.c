// Same data types

// Different order of members

// Different padding

// Different total size (16 bytes vs 20 bytes)

#include<stdio.h>

struct Demo
{
    int no;
    char ch1;
    char ch2;
    float f;
    int i;
};

/*

Address →
+----+----+----+--------+
| no (4 bytes)          | 0–3
+----+----+----+--------+
| ch1 | ch2 | pad | pad | 4–7
+----+----+----+--------+
| f (4 bytes)           | 8–11
+----+----+----+--------+
| i (4 bytes)           | 12–15
+----+----+----+----+---+

16 Bytes total

*/


struct Demo
{
    int no;
    char ch1;
    float f;
    char ch2;
    int i;
};


/*

Address →
+----+----+----+--------+
| no (4 bytes)          | 0–3
+----+----+----+--------+
| ch1 | pad | pad | pad | 4–7
+----+----+----+----+---+
| f (4 bytes)           | 8–11
+----+----+----+----+---+
| ch2 | pad | pad | pad | 12–15
+----+----+----+----+---+
| i (4 bytes)           | 16–19
+----+----+----+----+---+

20 Bytes total

*/



int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}
