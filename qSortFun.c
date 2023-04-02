/*
void qsort (void* base, size_t num, size_t size, 
            int (*comparator)(const void*,const void*));
The key point about qsort() is comparator function comparator. 
The comparator function takes two arguments and contains logic to decide their relative order in sorted output. 
The idea is to provide flexibility so that qsort() can be used for any type (including user defined types) and can be used to obtain any desired order (increasing, decreasing or any other).

The comparator function takes two pointers as arguments (both type-casted to const void*) and defines the order of the elements by returning (in a stable and transitive manner
int comparator(const void* p1, const void* p2);
Return value meaning
<0 The element pointed by p1 goes before the element pointed by p2
0  The element pointed by p1 is equivalent to the element pointed by p2
>0 The element pointed by p1 goes after the element pointed by p2
*/
