## 3.1 Namespace using Declarations.

## 3.2 String
1. Using getline
2. auto len=a.size()---auto is equivalent to string::size_type
3. When we mix string and literal,there must be an operand which is string.
4. Dealing with string type---a. cctype header b. for(:)

##3.3 Vector.
1. Initialization
2. push_back();

## 3.4 Iterators
1. (*iter).empty()---iter->empty();
2. ::iterator and const_interator
3. iter+n  difference_type=iter1-iter2

## 3.5 Array
1. char array is a special array with a '\0'.
2. The type used to indicate the array length must be a const. 
3. Understanding complicated array declaration from inside out
4. No copy or assignment.
5. size_t--cstddef---ptrdiff_t
6. Array and pointer--- - *p=nums(i.e &nums[0])---decltype(nums) is an array. - pointers are iterators(begin and end defined in iterator header). - Unlike subscripts for vector and string, the index of the built-in subscript operator is not an unsigned type.
7. a. c-style string--strlen,strcmp,strcpy,strcat. b. c_str---using array to initialize vector.

## 3.6 Multidimension array.
1. Initialization
2. auto,decltype,using typedef 


