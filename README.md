# C_program Notes

Notes:

1. For True c uses 1
2. For false c uses 0
3. Increment and Decrement (++) (--) only works with variables not with constants
4. Unary operators have associativity right to left
5. In C every lines is a line if it has ';' to denote its end
6. Switch only works with integers and character constants, no variable is allowed unles evaluates to constant.
7. Array name is a constant pointer i.e stores the actual starting addres of the array.
8. In C by default call by value is used in function calling.
9. C supports Abstraction but not data hiding, abstraction means hiding irrrevelant details from user whereas data hiding is hiding relevant dateils from the users.
10. Function can never be defined inside the defination of another function.
11. Function in C can only return a single value.
12. Recursion Foraml Defination: Solving bigger problems using smaller problems is called as recursion given a base condition. In recursion function call is push stack and completion is pop stack.
13. To solve recursion use either Tree method or use activation stack record.
14. Storage in c are of 4 types(auto,registers,static,extern) with 4 defining properties with each (i.e location of storage on hardware, Default Inital Value, Scope, Life Time)
15. Static memory is scope bound but not lifetime bound (has default value 0).
16. Global variables can be accessed by any functions written after it, global variables have default storage class of extern.
17. Enternal variables or extern variable declares varibale directly not define it(define relates to memory allocation and declare relates to information to compiler).
18. :: is known as scope resolution operator. ( ::x=10; // means use x that is outside of the current scope)
19. In C if local and global variable is of same name then priority is given to local variable, if we want to use global variable then we use scope resolution operator.
20. Diff between extern and globals are that extern are alwats alredy defined you just have to decalare when we want to use them their scope is universal in system.
21. globals and static resides in same memory space of a program execution not in stack or heap.
22. Heap give away memory stack accumulates the memory as the program grows.
23. Pointers:
      1. "*" is value at operator
      2. "&" is address of operator
      3. Generic pointers have to be type casted before accessing data or otherwise they cas simply point to anything.
      4. Generic pointers cant use arithimatic operations as they can't deference memory without type casting.
      5. Pointers can be used to print the contents at a memory location but will access this content as entire memory bblock rather than giving access to the content of a specific address, for that we use char *ptr=someaddress; and then print using %u as a unsigned integer.
      6. -> is used of accessing a member variable of a structure e.g. "x.a=10;"  ===>  "int *p=&a; p->a=10;" ===> "(*p).a=10;".
      7. precidence for pointers
            1. |   () []
            2. |   *
            3. |   name of pointer
            4. |   data type
            5. V  the precidence here decreases from top to bottom
      
24. Pointer operations:
      1. addition i.e ptr1 + ptr2 ===> illegal
      2. substraction i.e ptr1-ptr2 ===> legal , will give the no of memory blocks between them, but both have to be pointing to same data type variable(i.e (ptr1-ptr2)/sizeof(datatype)).
      3. ptr*ptr ===> illegal
      4. ptr+I (I is signed integer) | ptr-I ===> legal , will help to move to next or previous first address to that memory block, (i.e ptr+I*sizeof(ptr))
      5. p++ ===> legal ,but will only work if this p is pointing to some memory block and have next memory block access in program state in activation record else returns null.
25. Diff between Pointer to string and pointer to an array.
      1. Pointer to an array points to a constant pointer to the first address of the first element in an array i.e name of an array is a const pointer that cant be changed ever.
      2. "arr[1]" ===> second element of the array ===> " *(arr+1) "
      3. In string the name of the string array points to the address at which the strings are stored. this is because string needs ust the first address to print the entire string untill \0 is reached e.g. " printf("%c","ABCD"[1]) " ===> o/p B i.e *("base address of this string" + I) here I is 1.
      4. strings are stored contigious in memory with \0 at the end of each string.
26. 
27. 
