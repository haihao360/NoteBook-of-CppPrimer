## 2.1 Primitive Build-in Types 
1. Primitive types:arithmetic(integral and floating-point) types and    void.char,wchart_t,char16_t,char32_t;short,int,long,long    long;float,double,long double.--signed unsigned
2. Type conversion
3. literal--escape literal.

## 2.2 Variables
1. List initialization vs default initialization (Uninitialized objects of built-in type defined inside a function body have a undefined value. Objects of class type that we do not explicitly initialize have a value that is defined by class)
2. Definition and Declarations(extern)
3. Identifiers---Reserve names and naming convention.
4. Global and block scope using scope operator(::)

## 2.3 Compound Types
1. References¢Ùtypes need to match when initializing(two exceptions).¢Úmust be intialized and initializer must be an object. 
2. Pointer---a. taking the address of an object.b. *& have mutiple meaning.c. nullptr and void*---a pointer is an object that can point to a different object
3. Understand complicated *& from right to left.

## 2.4 Const
1. To share a const object among multiple files, you must define the variable as extern.
2. const double *const pip = &pi---const int &a=b(double).
3. A pointer can't point a const.
4. Top level const and low level const(cant be ignored).
5. A constant expression is an expression whose value cannot change and that can be evaluated at compile time---constexpr.eg:constexpr int *q = nullptr;

## 2.5 Dealing with Types
1. Two Type alias by typedef or using.(care:in pointer)
2. Auto---Initializers must be consistent.
3. Decltype---a. decltype(()) and decltype(a=b) are reference type. b. diffence with auto ¢Ù handles top-level const ¢Ú decltype deduction depend on the form of its given expression.

##2.6 Defining our own data structure
1. struct.
2. #ifndef,#define SALES_DATA_H,#endif--header guard--preprocessor


