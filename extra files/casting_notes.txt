Static cast is the most common cast. It can cast through heirarchies. Used to 
cast related classes

Const cast is the only cast which is allowed to cast a const. It is useful for 
when overloading member functions based on const. Removes the "const"

Dynamic cast is used exclusively for handling polymorphism. It can be used to cast
downwards, sideways, or even up a chain. If the cast cannot find the object it will 
return a "nullptr". If it is a pointer, it throws ???. Can only be used with pointers
and references to pointers

Reinterpret cast is the most dangerous cast. It turns one type directly into another.
Usually only used in weird conversions and bit manipulations, like turning a raw 
stream into data.