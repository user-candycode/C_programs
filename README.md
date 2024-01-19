# C_programs

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
20. Heap give away memory stack accumulates the memory as the program grows.
